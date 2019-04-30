using ContosoUniversity2.Models;
using Microsoft.EntityFrameworkCore;

namespace ContosoUniversity2.Data 
{
    //　创建数据库上下文类
    public class SchoolContext : DbContext {
        public SchoolContext(DbContextOptions<SchoolContext> options) : base(options)
        {

        }

        // 实体集通常　与数据表相对应，具体实体与表中的行相对应
        // EF创建一系列数据表，表名默认和DbSet属性名相同
        public DbSet<Course> Courses { get;set; }
        public DbSet<Enrollment> Enrollments { get;set; }
        public DbSet<Student> Students { get;set; }

        // 对ＤbContext 指写字单数的表名来覆盖默认的表名
        protected override void OnModelCreating(ModelBuilder modelBuilder) {
            modelBuilder.Entity<Course>().ToTable("Course");
            modelBuilder.Entity<Enrollment>().ToTable("Enrollment");
            modelBuilder.Entity<Student>().ToTable("Student");
        }
   }
}