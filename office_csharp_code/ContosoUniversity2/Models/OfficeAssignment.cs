// 办公室分配
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace ContosoUniversity2.Models 
{
    public class OfficeAssignment
    {
        // key: 主键 
        [Key]
        public int InstructorID { get;set; }
        [StringLength(50)]
        [Display(Name = "Office Location")]
        public string Location { get;set; }

        // 导师
        public Instructor Instructor { get;set; }
    }
}