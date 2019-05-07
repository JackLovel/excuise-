using Microsoft.AspNetCore.Mvc;
using SportsStore.Models;
using SportsStore.Models.ViewModels;
using System.Linq;

namespace SportsStore.Controllers {
    public class ProductController : Controller {
        private IProductRepository repository;
        public int PageSize = 4;  // 表示一页有多少条

        public ProductController(IProductRepository repo) {
            repository = repo;
        }

        // public IActionResult List() {
        //     return View(repository.Products);
        // }

        // skip: 从多少页开始
        // https://localhost:5001/product/list?productPage=2
        public IActionResult List(int productPage = 1) {
            // var page = repository.Products
            //     .OrderBy(p => p.ProductID)
            //     .Skip((productPage - 1) * PageSize)
            //     .Take(PageSize);
            
            return View(
                new ProductsListViewModel {
                    Products = repository.Products
                        .OrderBy(p => p.ProductID)
                        .Skip((productPage - 1) * PageSize)
                        .Take(PageSize),
                    PagingInfo = new PagingInfo {
                        CurrentPage = productPage,
                        ItemsPerPage = PageSize,
                        TotalItems = repository.Products.Count()
                    }
                });
        }
    }
}