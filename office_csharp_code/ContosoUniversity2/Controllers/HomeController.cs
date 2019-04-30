using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using ContosoUniversity2.Models;
using Microsoft.EntityFrameworkCore;
using ContosoUniversity2.Data;
using ContosoUniversity2.Models.SchoolViewModels;

namespace ContosoUniversity2.Controllers
{
    public class HomeController : Controller
    {
        /*
            为数据库上下文添加一个变量，并从asp.net core DI获取上下文实例
         */
        private readonly SchoolContext _context;
        public HomeController(SchoolContext context) 
        {
            _context = context;
        }
        public IActionResult Index()
        {
            return View();
        }

        public IActionResult Privacy()
        {
            return View();
        }

        public async Task<ActionResult> About() 
        {
            // 按注册日期对学生实体进行分组，计算每组中实体的数量，
            // 并将结果存储在 EnrollmentDateGroup视图模型对象的集合中
            IQueryable<EnrollmentDateGroup> data = 
                from student in _context.Students
                group student by student.EnrollmentDate into dateGroup
                select new EnrollmentDateGroup
                {
                    EnrollmentData = dateGroup.Key,
                    StudentCount = dateGroup.Count()
                };

            return View(await data.AsNoTracking().ToListAsync());
        }
        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}
