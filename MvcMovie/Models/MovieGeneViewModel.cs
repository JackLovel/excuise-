using Microsoft.AspNetCore.Mvc.Rendering;
using System.Collections.Generic;

namespace MvcMovie.Models 
{
    public class MovieGeneViewModel {
        public List<Movie> Movies;
        public SelectList Geners;
        public string MovieGenre { get;set; }
        public string SearchString { get;set; }
    }
}