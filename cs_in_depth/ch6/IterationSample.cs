using System;
using System.Collections;

namespace ch6
{
    public class IterationSample : IEnumerable
    {
        public object[] values;
        public int startingPoint;

        public IterationSample(object[] values, int startingPoint) 
        {
            this.values = values;
            this.startingPoint = startingPoint;
        }

        public IEnumerator GetEnumerator() 
        {
            // yield return 实现迭代器块
            for (int index = 0; index < values.Length; index++)
            {
                yield return values[(index + startingPoint) % values.Length];
            }
        }
    }
}
