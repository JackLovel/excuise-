using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace ContosoUniversity.Models
{
    public class SchoolContext : DbContext
    {
        public SchoolContext (DbContextOptions<SchoolContext> options)
            : base(options)
        {
        }

        // 每个实体集对应一个数据库
        public DbSet<Student> Student { get;set; }
        public DbSet<Enrollment> Enrollment { get;set;}
        public DbSet<Course> Course { get;set ; }
    }
}
