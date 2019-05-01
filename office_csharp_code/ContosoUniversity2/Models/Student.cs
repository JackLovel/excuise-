using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace ContosoUniversity2.Models 
{
    public class Student {
        public int ID { get;set; }  // 主键
        // Display: 指定文本框的标题应是，而不是每个实例中的属性名称
        [StringLength(50, MinimumLength=1)] // 指定长度最大为50
        [Display(Name = "Last Name")]
        public string LastName { get;set; }
        
        [Required]
        [StringLength(50)] 
        [Column("FirstName")]
        [Display(Name = "First Name")]
        public string FirstMidName { get;set; }

        [DataType(DataType.Date)]
        [DisplayFormat(DataFormatString = "{0:yyyy-MM-dd}", ApplyFormatInEditMode = true)]
        [Display(Name = "Enrollment Date")]
        public DateTime EnrollmentDate { get;set; }
        //public string Secret { get;set; }
        [Display(Name = "Full Name")]
        public string FullName 
        {
            get 
            {
                return LastName + ", " + FirstMidName;
            }
        }

        public ICollection<Enrollment> Enrollments {get;set;}
    }
}