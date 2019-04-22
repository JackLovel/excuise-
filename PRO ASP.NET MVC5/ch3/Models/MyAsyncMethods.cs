using System.Net.Http;
using System.Threading.Tasks;

namespace ch3.Models {
    public class MyAsyncMethods {
        public async static Task<long?> GetPageLength() {
            
            HttpClient client = new HttpClient();
            var httpMessage = await client.GetAsync("http://apress.com");
            
            // 在等待HTTP请求完成期间，可以在这里做其他事情
            return httpMessage.Content.Headers.ContentLength;
        }
    }
}