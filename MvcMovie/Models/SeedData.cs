using Microsoft.EntityFrameworkCore;
using Microsoft.Extensions.DependencyInjection;
using System;
using System.Linq;

namespace MvcMovie.Models 
{
    // 设定数据种子
    public static class SeedData {
        public static void Initialize (IServiceProvider serviceProvider) {
            using (var context = new MvcMovieContext(serviceProvider.GetRequiredService<
            DbContextOptions<MvcMovieContext>>())) {
                // 如果DB中没有任何电影,则会返回种子初始值设定项,并且不会添加任何电影 
                if (context.Movie.Any()) {
                    return;  // DB has been seeded
                }

                context.Movie.AddRange(
                    new Movie
                    {
                        Title = "When Harry Met Sally",
                        ReleaseDate = DateTime.Parse("1989-2-12"),
                        Genre = "Romatic Comedy",
                        Rating = "R",
                        Price = 7.99M
                    },

                     new Movie
                    {
                        Title = "Ghostbusters",
                        ReleaseDate = DateTime.Parse("1984-3-13"),
                        Genre = "Comedy",
                        Rating = "R",
                        Price = 8.99M
                    },

                    new Movie
                    {
                        Title = "Ghostbusters 2",
                        ReleaseDate = DateTime.Parse("1986-2-23"),
                        Genre = "Comedy",
                        Rating = "R",
                        Price = 9.99M
                    },

                     new Movie
                    {
                        Title = "Rio Bravo",
                        ReleaseDate = DateTime.Parse("1959-4-15"),
                        Genre = "Western",
                        Rating = "R",
                        Price = 3.99M
                    }

                );

                context.SaveChanges();
            }
        }
    }
}