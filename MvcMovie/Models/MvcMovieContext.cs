using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace MvcMovie.Models 
{
    public class MvcMovieContext : DbContext 
    {
        public MvcMovieContext (DbContextOptions<MvcMovieContext> options)
            : base (options)
        {

        }

        // 为实体集创建 DbSet 属性 
        public DbSet<MvcMovie.Models.Movie> Movie { get;set; }
   }
}