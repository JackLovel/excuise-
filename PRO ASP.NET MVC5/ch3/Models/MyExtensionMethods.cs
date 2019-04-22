using System;
using System.Collections.Generic;

namespace ch3.Models {
    public static class MyExtensionMethods {

        // 扩展方法
        // public static decimal TotalPrices (this ShoppingCart cartParam) {
           
        //     decimal total = 0;
        //     foreach (Product prod in cartParam.Products) {
        //         total += prod.Price;
        //     }

        //     return total;
        // }

        public static decimal TotalPrices (this IEnumerable<Product> productEnum) {
           
            decimal total = 0;
            foreach (Product prod in productEnum) {
                total += prod.Price;
            }

            return total;
        }

        public static IEnumerable<Product> FilterByCategory (this IEnumerable<Product> productEnum, string categoryParam) 
        {
            foreach (Product prod in productEnum) {
                if (prod.Category == categoryParam) {
                    yield return prod;
                }
            }
        }

        // 针对每个 Product 进行调用的委托
        // 使用一个 Func 作为过滤参数
        public static IEnumerable<Product> Filter (this IEnumerable<Product> productEnum, 
        Func<Product, bool> selectorParam) {
            foreach (Product prod in productEnum) {
                if (selectorParam(prod)) {
                    yield return prod;
                }
            }
        }
    }
}