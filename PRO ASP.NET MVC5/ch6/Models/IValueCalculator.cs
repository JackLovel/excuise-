using System.Collections.Generic;

namespace ch6.Models {
    public interface IValueCalculator {
        decimal ValueProducts(IEnumerable<Product> products);
    }
}