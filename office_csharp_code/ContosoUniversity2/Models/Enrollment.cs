using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace ContosoUniversity2.Models 
{
    public enum Grade {
        A, B, C, D, F
    }

#region 注册
    public class Enrollment {
        public int EnrollmentID { get; set; }
        public int CourseID { get; set; }  // 外键
        public int StudentID { get; set; }　// 外键

        [DisplayFormat(NullDisplayText = "No grade")]
        public Grade? Grade { get; set; }

        public Course Course { get; set; }
        public Student Student { get; set; }
    }
}
#endregion