using System;
using System.Collections;

namespace ch6
{
    public class IterationSampleIterator : IEnumerable
    {
        IterationSample parent;
        int position;

        internal IterationSampleIterator(IterationSample parent)
        {
            this.parent = parent;
            position = -1; 
        }

        public bool MoveNext() 
        {
            if (position != parent.values.Length) 
            {
                position++;
            }

            return position < parent.values.Length;
        }

        public object Current 
        {
            get 
            {
                if (position == -1 || position == parent.values.Length)
                {
                    throw new InvalidOperationException();
                }

                int index = position + parent.startingPoint;
                index %= parent.values.Length;

                return parent.values[index];
            }
        }

        public void Reset()
        {
            position = -1;
        }

        public IEnumerator GetEnumerator() 
        {
            throw new NotImplementedException();
        }
    }
}
