using System.Collections.Generic;
using System.ComponentModel.DataAnnotations.Schema;

namespace ContosoUniversity2.Models 
{
    public class Course {
        // DatabaseGenerated: 自行指定主键
        [DatabaseGenerated(DatabaseGeneratedOption.None)]
        public int CourseID { get;set; }
        public string Title { get;set; }
        public int Credits { get;set; }

        public ICollection<Enrollment> Enrollments { get;set; }
    }
}