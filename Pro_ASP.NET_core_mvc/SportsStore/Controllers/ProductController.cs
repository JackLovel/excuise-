using Microsoft.AspNetCore.Mvc;
using SportsStore.Models;

namespace SportsStore.Controllers {
    public class ProductController : Controller {
        private IProductRepository repository;
        public ProductController(IProductRepository repo) {
            repository = repo;
        }

        public IActionResult List() {
            return View(repository.Products);
        }
    }
}