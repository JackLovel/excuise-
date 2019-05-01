// 部门
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace ContosoUniversity2.Models 
{
    public class Department 
    {
        public int DepartmentID { get;set; }

        [StringLength(50, MinimumLength = 3)]
        public string Name { get;set; }

        // 货币数据类型　
        [DataType(DataType.Currency)]
        [Column(TypeName = "money")]
        public decimal Budget { get;set; } // 预算

        [DataType(DataType.Date)]
        [DisplayFormat(DataFormatString = "{0:yyyy-MM-dd}", ApplyFormatInEditMode = true)]
        [Display(Name = "Start Date")]
        public DateTime StartDate { get;set; }

        public int? InstructorID { get;set; }

        public Instructor Administrator { get;set; } // 管理员
        public ICollection<Course> Courses { get;set; } //　一个系可以有多门课程
    }
}