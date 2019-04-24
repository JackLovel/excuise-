using System;

namespace ReadOnly
{
    class Program
    {
        static void Main(string[] args)
        {
            SampleClass p1 = new SampleClass(11, 21, 32);

            Console.WriteLine($"p1: x={p1.x}, y={p1.y}, z={p1.z}");

            SampleClass p2 = new SampleClass();
            p2.x = 55;  // 对
            //p2.y = 66; // 错
            Console.WriteLine($"p2: x={p2.x}, y={p2.y}, z={p2.z}");
        }
    }
}
