using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using ch5.Models;

namespace ch5.Controllers
{
    public class HomeController : Controller
    {
        Product myProduct = new Product {
            ProductID = 1,
            Name = "Kayak",
            Description = "A boat for one person",
            Category = "Watersports",
            Price = 275M
        };

        public IActionResult Index()
        {
            return View(myProduct);
        }

        public IActionResult NameAndPrice() 
        {
            return View(myProduct);
        }

        public IActionResult DemoExpression() {
            ViewBag.ProductCount = 1;
            ViewBag.ExpressShip = true;
            ViewBag.ApplyDiscount = false;
            ViewBag.Supper = null;

            return View(myProduct);
        }

        public IActionResult DemoArray() {
            Product[] array = {
              new Product { Name="Kayak", Price = 275M},
              new Product { Name="Lifejacket", Price = 48.95M},
              new Product { Name="Soccer ball", Price = 19.50M},
              new Product { Name="Corner flag", Price = 34.95M}              
            };

            return View(array);
        }
    }
}
