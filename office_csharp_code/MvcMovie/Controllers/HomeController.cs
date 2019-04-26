using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using MvcMovie.Models;
using System.Text.Encodings.Web;

namespace MvcMovie.Controllers
{
    public class HomeController : Controller
    {
        public IActionResult Index()
        {
            return View();
        }

        // public string Welcome()
        // {
        //     return "This is the Welcome action method....";
        // }

        public IActionResult Welcome(string name, int numTimes = 1) 
        {
            ViewData["Message"] = "Hello" + name;
            ViewData["NumTimes"] = numTimes;
            
            return View();
        }

        // public string Welcome(string name, int numTimes = 1) 
        // {
        //     return HtmlEncoder.Default.Encode($"Hello {name}, NumTImes is: {numTimes}");
        // }
        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}
