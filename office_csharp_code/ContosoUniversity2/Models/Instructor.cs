using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

// 导师
namespace ContosoUniversity2.Models
{
    public class Instructor : Person
    {
        [DataType(DataType.Date)]
        [DisplayFormat(DataFormatString = "{0:yyyy-MM-dd}", ApplyFormatInEditMode = true)]
        [Display(Name = "Hire Date")]
        public DateTime HireDate { get;set; }

        // 导航属性
        // 一名讲师可以教授任意数量的课程
        public ICollection<CourseAssignment>  CourseAssignments { get;set;}
        // 讲师最多只能有一个办公室
        public OfficeAssignment OfficeAssignment { get;set;}
    }
}