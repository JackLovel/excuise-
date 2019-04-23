using Xunit;
using Prime.Services;

namespace Prime.UnitTests.Services
{
    public class PrimeService_IsPrimeShould
    {
        private readonly PrimeService _primeService;

        public PrimeService_IsPrimeShould() {
            _primeService = new PrimeService();
        }

        // 测试运行程序运行的测试方法
        [Fact]
        public void Test1()
        {
            var result = _primeService.IsPrime(1);

            Assert.False(result, "1 should not be prime");
        }

        [Theory]
        [InlineData(-1)]
        [InlineData(0)]
        [InlineData(1)]
        public void ReturnFalseGivenValueLessThans(int value) {
            var result = _primeService.IsPrime(value);

            Assert.False(result, $"{value} shoud not be prime");
        }
    }
}
