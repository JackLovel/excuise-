using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using ch6.Models;
using Ninject;

namespace ch6.Controllers
{
    public class HomeController : Controller
    {
        private Product[] products = {
            new Product { Name = "Kayak", Category = "Watersports", Price = 275M},
            new Product { Name = "Lifejacket", Category = "Watersports", Price = 48.95M},
            new Product { Name = "Soccer ball", Category = "Soccer", Price = 275M},
            new Product { Name = "Kayak", Category = "Watersports", Price = 275M},            
        };

        public IActionResult Index()
        {
            // create a ninject kernel
            IKernel ninjectKernel = new StandardKernel();
            // configure ninject kernel
            ninjectKernel.Bind<IValueCalculator>().To<LinqValueCalculator>();
            // use ninject create a object 
            IValueCalculator calc = ninjectKernel.Get<IValueCalculator>();

            ShoppingCart cart = new ShoppingCart(calc) { Products = products };
            decimal totalValue = cart.CalculateProductTotal();
            return View(totalValue);
        }
    }
}
