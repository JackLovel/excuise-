// 自动实现属性
namespace ch3.Models 
{
    public class Product {
        private string name;
        public int ProductID { get; set;}
        public string Name { 
            get {
                return ProductID + name;
            }
            set {
                name = value;
            } 
        }
        public string Description {get;set;}
        public decimal Price { get;set;}
        public string Category {get;set;}
    }
}