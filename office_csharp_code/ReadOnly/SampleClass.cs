namespace ReadOnly {
    class SampleClass {
        public int x;

        public readonly int y = 25;
        public readonly int z;

        public SampleClass() {
            z = 24;
        }

        public SampleClass(int p1, int p2, int p3) {
            x = p1;
            y = p2;
            z = p3;
        }
    }
} 