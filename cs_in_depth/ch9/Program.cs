using System;
using System.Linq.Expressions;
using System.Collections.Generic;
using System.Collections;
using ch9.Model;

namespace ch9
{
    class Program
    {
        static void Main(string[] args)
        {
            Func<string, int> returnLength;  // 定义一个委托类型　
            // returnLength = delegate (string text) 
            // {
            //     return text.Length;
            // };

            // returnLength = (string text) =>
            // {
            //     return text.Length;
            // };

            returnLength = text => text.Length;

            //Console.WriteLine(returnLength("hello"));

            // ex: 9-4
            // var films = new List<Film>
            // {
            //     new Film {Name="Jaws", Year=1975},
            //     new Film {Name="Singing in the Rain", Year=1952},
            //     new Film {Name="Some like it Hot", Year=1959},
            //     new Film {Name="The Wizard of Oz", Year=1939},
            //     new Film {Name="It's a Wonderful Life", Year=1946},
            //     new Film {Name="American Beauty", Year=1999},
            //     new Film {Name="High Fidelity", Year=2000},
            //     new Film {Name="The Usual Suspects", Year=1995}
            // };

            // Action<Film> print = film => Console.WriteLine("Name={0}, Year={1}", film.Name, film.Year);

            // Console.WriteLine("All films");
            // films.ForEach(print);
            // Console.WriteLine();

            // Console.WriteLine("Oldies");
            // films.FindAll(film => film.Year < 1960)
            //     .ForEach(print);
            // Console.WriteLine();

            // Console.WriteLine("Sorted");
            // films.Sort((f1, f2) => f1.Name.CompareTo(f2.Name));
            // films.ForEach(print);

#region 9-6
            // Expression firstArg = Expression.Constant(2);
            // Expression secondArg = Expression.Constant(3);
            // Expression add = Expression.Add(firstArg, secondArg);
            
            // Func<int> compiled = Expression.Lambda<Func<int>>(add).Compile();
            // Console.WriteLine(compiled());
#endregion

// ArrayList list = new ArrayList { "First", "Second", "Third" };
// IEnumerable<string> strings = list.Cast<string>();
// foreach (string item in strings)
// {
//     Console.WriteLine(item);
// }

// list = new ArrayList { 1, "not an int", 2, 3 };
// IEnumerable<int> ints = list.OfType<int>();
// foreach (int item in ints)
// {
//     Console.WriteLine(item);
// }
            var query = from user in SampleData.AllUsers
                        orderby user.Name.Length
                        select user.Name;
            
            foreach (var name in query) 
            {
                Console.WriteLine("{0}: {1}", name.Length, name);
            }

        }
    }
}


