using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ContosoUniversity2.Models.SchoolViewModels
{
    public class InstructorIndexData
    {
        //  创建三个属性的视图模型　
        public IEnumerable<Instructor> Instructors { get;set; }  // 讲师
        public IEnumerable<Course> Courses { get;set;}
        public IEnumerable<Enrollment> Enrollments { get;set;}
    }
}