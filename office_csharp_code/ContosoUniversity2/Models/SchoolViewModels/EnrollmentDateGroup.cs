using System;
using System.ComponentModel.DataAnnotations;

namespace ContosoUniversity2.Models.SchoolViewModels
{
    public class EnrollmentDateGroup 
    {
        [DataType(DataType.Date)]
        public DateTime? EnrollmentData { get;set; }
        public int StudentCount { get;set; }
    }
    
}