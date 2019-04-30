using System.Collections.Generic;
using System.ComponentModel.DataAnnotations.Schema;

namespace ContosoUniversity.Models 
{
    public class Course {
        // DatabaseGenerated: 指定主键
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int CourseID { get;set; }
        public string Title { get;set; }
        public int Credits { get;set; }

        public ICollection<Enrollment> Enrollments { get;set; }
    }
}