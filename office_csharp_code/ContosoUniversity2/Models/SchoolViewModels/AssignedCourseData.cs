using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ContosoUniversity2.Models.SchoolViewModels
{
    // 复选框列表
    public class AssignedCourseData
    {
        public int CourseID { get;set; }
        public string Title { get;set; }
        public bool Assigned { get;set; }
    }
}