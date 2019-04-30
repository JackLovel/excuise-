using System;
using System.Collections.Generic;

namespace ContosoUniversity2.Models 
{
    public class Student {
        public int ID { get;set; }  // 主键
        public string LastName { get;set; }
        public string FirstMidName { get;set; }
        public DateTime EnrollmentDate { get;set; }
        //public string Secret { get;set; }
        public ICollection<Enrollment> Enrollments {get;set;}
    }
}