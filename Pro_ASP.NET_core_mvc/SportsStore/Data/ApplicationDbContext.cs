using SportsStore.Models;
using Microsoft.EntityFrameworkCore;

namespace SportsStore.Data {
    public class ApplicationDbContext : DbContext {
        public ApplicationDbContext(DbContextOptions<ApplicationDbContext> options) : base(options) {

        }

        public DbSet<Product> Products { get; set;}
    }
}