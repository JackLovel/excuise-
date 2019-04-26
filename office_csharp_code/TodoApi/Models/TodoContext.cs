using Microsoft.EntityFrameworkCore;

// 添加数据库上下文　
namespace TodoApi.Models
{
    public class TodoContext : DbContext {
        public TodoContext(DbContextOptions<TodoContext> options) 
            : base(options) 
        {

        }

        public DbSet<TodoItem> TodoItems { get;set; }
    }

}