using System;

namespace ReadOnly {
    class Age {
        readonly int year;

        Age(int year) {
            this.year = year;
        }

        void ChangeYear() {
            Console.WriteLine("This is Change year function.");
        }
    }
}