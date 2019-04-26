using System.Collections.Generic;
using System.Linq;
using BooksApi.Models;
using Microsoft.Extensions.Configuration;
using MongoDB.Driver;

// crud 操作类
namespace BooksApi.Services 
{
    public class BookSerivce {
        private readonly IMongoCollection<Book> _books;

        public BookSerivce(IConfiguration config) {
            var client = new MongoClient(config.GetConnectionString("BookstoreDb"));
            var database = client.GetDatabase("BookstoreDb");
            _books = database.GetCollection<Book>("Books");
        }

        public List<Book> Get() {
            return _books.Find(book => true).ToList();
        }

        public Book Get(string id) {
            return _books.Find<Book>(book => book.Id == id).FirstOrDefault();
        }

        public Book Create(Book book) {
            _books.InsertOne(book);
            return book;
        }

        public void Update(string id, Book bookIn) {
            _books.ReplaceOne(book => book.Id == id, bookIn);
        }

        public void Remove(Book bookIn) {
            _books.DeleteOne(book => book.Id == bookIn.Id);
        }
        
        public void Remove(string id) {
            _books.DeleteOne(book => book.Id == id);
        }
    }
}