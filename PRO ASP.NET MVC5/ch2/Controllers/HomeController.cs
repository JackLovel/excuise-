using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using ch2.Models;

namespace ch2.Controllers
{
    public class HomeController : Controller
    {
        // public string Index() 
        // {
        //     return "Hello World";
        // }

        public IActionResult Index()
        {
            int hour = DateTime.Now.Hour;
            ViewBag.Greeting = hour < 12 ? "Good Morning" : "Good Afternoon";

            return View();
        }


        [HttpGet]
        public IActionResult RsvpForm() {
            return View();
        }

        [HttpPost]
        public IActionResult RsvpForm(GuestResponse guestResponse) {
            // 没有验证问题
            if (ModelState.IsValid) {
                // todo: 对晚会的组织者发送 email 响应
                return View("Thanks", guestResponse);
            } else {
                // 有验证问题，重新渲染RsvpForm视图
                return View();
            }

        }
    }
}
