using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using ch3.Models;

namespace ch3.Controllers
{
    public class HomeController : Controller
    {
        public string Index() 
        {
            return "Navigate to a URL to show example";
        }

        // public IActionResult Index()
        // {
        //     return View();
        // }

        public IActionResult CreateProduct() 
        {
            // Product myProduct = new Product();

            // myProduct.ProductID = 100;
            // myProduct.Name = "Kayak";
            // myProduct.Description = "A boat for one person";
            // myProduct.Price = 275M;
            // myProduct.Category = "Watersports";


            // 对象初始化器
            Product myProduct = new Product {
                ProductID = 100, Name = "Kayak",
                Description = "A boat for one person",
                Price = 275M, Category = "Watersports"
            };

            return View("Result", (object)String.Format("Category: {0}", 
                myProduct.Category));
        }
   
        public IActionResult CreateCollection() 
        {
            string[] stringArray = {"apple", "orange", "plum"};

            List<int> intList = new List<int> {10, 20, 30, 40};

            Dictionary<string, int> myDict = new Dictionary<string, int> {
                {"apple", 10}, {"orange", 20}, {"plum", 30}
            };

            return View("Result", (object)stringArray[1]);
        }
    
        public IActionResult UseExtension() 
        {
            // 创建并填充 ShoppingCart
            ShoppingCart cart = new ShoppingCart {
                Products = new List<Product> {
                    new Product { Name="Kayak", Price = 275M},
                    new Product { Name="Lifejacket", Price = 48.95M},
                    new Product { Name="Soccer ball", Price = 19.50M},
                    new Product { Name="Corner flag", Price = 34.95M}
                }
            };

            decimal cartTotal = cart.TotalPrices();

            return View("Result", (object)String.Format("Total: {0:c}", cartTotal));
        }

        public IActionResult UseExtensionEnumerable() 
        {

            IEnumerable<Product> products = new ShoppingCart {
                Products = new List<Product> {
                    new Product { Name="Kayak", Price = 275M},
                    new Product { Name="Lifejacket", Price = 48.95M},
                    new Product { Name="Soccer ball", Price = 19.50M},
                    new Product { Name="Corner flag", Price = 34.95M}
                }
            };

            Product[] productArray = {
                new Product { Name="Kayak", Price=275M},
                new Product { Name="Lifejacket", Price=48.95M},
                new Product { Name="Soccer ball", Price=19.50M},
                new Product { Name="Corner flag", Price=34.95M}
            };

            // 获取购物车中产品的总价
            decimal cartTotal = products.TotalPrices();
            decimal arrayTotal = productArray.TotalPrices();

            return View("Result", (object)String.Format("Cart Total: {0}, Array Total: {1}", cartTotal, arrayTotal));
        }
  
        public IActionResult UseFilterExtensionMethod() 
        {
            IEnumerable<Product> products = new ShoppingCart {
                Products = new List<Product> {
                    new Product { Name = "Kayak", Category = "Watersports", Price = 275M},
                    new Product { Name = "Lifejacket", Category = "Watersports", Price = 48.95M},
                    new Product { Name = "Soccer ball", Category = "Soccer", Price = 19.50M},
                    new Product { Name = "Corner flag", Category = "Soccer", Price = 34.50M},
                }
            };

            decimal total = 0;
            foreach (Product prod in products
                .Filter (prod => prod.Category == "Soccer" || prod.Price > 20)) {
                total += prod.Price;
            }

            return View("Result", (object)String.Format("Total: {0:C}", total));
        }
    
        Func<Product, bool> categoryFilter =  prod => prod.Category == "Soccer";
    
        public IActionResult CreateAnonArray() {
            var oddsAndEnds = new[] {
                new { Name = "Mvc", Category = "Pattern" },
                new { Name = "Hat", Category = "Clothing" },
                new { Name = "Apple", Category = "Fruit" },
            };

            StringBuilder result = new StringBuilder();
            foreach (var item in oddsAndEnds) {
                result.Append(item.Name).Append(" ");
            }

            return View("Result", (object)result.ToString());
        }
    
        public IActionResult FindProducts() {
            Product[] products = {
                new Product { Name="Kayak", Category="watersports", Price = 275M },
                new Product { Name="Lifejacket", Category="watersports", Price = 48.95M},
                new Product { Name="Soccer ball", Category="Soccer", Price = 19.50M},
                new Product { Name="Corner flag", Category="Soccer", Price = 34.95M}
            };

            // var foundProducts = from match in products
            //     orderby match.Price descending
            //     select new { match.Name, match.Price};

            // var foundProducts = products.OrderByDescending(e => e.Price)
            //     .Take(3)
            //     .Select(e => new { e.Name, e.Price });

            // 非延迟的
            var results = products.Sum(e => e.Price);

            products[2] = new Product { Name = "Stadium", Price = 79600M};
        
            // // 创建结果
            // StringBuilder result = new StringBuilder();
        
            // foreach (var p in foundProducts) {
            //     result.AppendFormat("Price: {0:c}", p.Price ).Append(" ");
            // }

            // return View("Result", (object)result.ToString());
            return View("Result", (object)String.Format("Sum: {0:c}", results));
        }
    }
}
