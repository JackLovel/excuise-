import edu.princeton.cs.algs4.*;

public class Quick {
    private Quick() {
    }

    /**
     * @param a the array to be sorted
     */
    public static void sort(Comparable[] a) {
        StdRandom.shuffle(a);
        sort(a, 0, a.length - 1);
        assert isSorted(a);
    }

    // quick sort the sub array from a[lo] to a[hi]
    private static void sort(Comparable[] a, int lo, int hi) {
        if (hi <= lo) return;
        int j = partition(a, lo, hi);
        sort(a, lo, j - 1);
        sort(a, j + 1, hi);
        assert isSorted(a, lo, hi);
    }

    // partition the sub array a[lo..hi] so that a[lo..j-1] <= a[j] <= a[j+1..hi]
    // and return the index j
    private static int partition(Comparable[] a, int lo, int hi) {
        int i = lo, j = hi + 1;
        Comparable v = a[lo];
        while (true) {
            // find item on lo to swap
            while (less(a[++i], v)) {
                if (i == hi) break;
            }

            // fine item on hi to swap
            while (less(v, a[--j])) {
                if (j == lo) break;
            }

            // check if pointers cross
            if (i >= j) break;

            exch(a, i, j);
        }

        // put partitioning item v at a[j]
        exch(a, lo, j);

        // now, a[lo..j-1] <= a[j] <= a[j+1..hi]
        return j;
    }

    /**
     *
     * @param a the array
     * @param k the rank of key
     * @return the key of rank
     * @throws IllegalArgumentException unless {@code 0 <= k < a.length}
     */
    public static Comparable select(Comparable[] a, int k)
    {
        if (k < 0 || k >= a.length){
            throw new IllegalArgumentException("index is not between 0 and " + a.length + ": " + k);
        }

        StdRandom.shuffle(a);
        int lo = 0, hi = a.length - 1;
        while (hi > lo){
			int i = partition(a, lo, hi);
			if (i > k) hi = i - 1;
			else if (i < k) lo = i + 1;
			else return a[i];
		}
		return a[lo];
    }

    // is v < w ?
	@SuppressWarnings("unchecked")
    private static boolean less(Comparable v, Comparable w) {
        if (v == w) return false;
        return v.compareTo(w) < 0;
    }

    // exchage a[i] and a[j]
    private static void exch(Object[] a, int i, int j) {
        Object swap = a[i];
        a[i] = a[j];
        a[j] = swap;
    }

    /**
     * Check if array is sorted
     */
    private static boolean isSorted(Comparable[] a) {
        return isSorted(a, 0, a.length - 1);
    }

    private static boolean isSorted(Comparable[] a, int lo, int hi) {
        for (int i = lo + 1; i <= hi; i++)
            if (less(a[i], a[i - 1])) return false;

        return true;
    }

    // print array to standard output
    private static void show(Comparable[] a) {
        for (int i = 0; i < a.length; i++) {
            StdOut.println(a[i]);
        }
    }

    public static void main(String[] args)
    {
        String[] a = StdIn.readAllStrings();
        Quick.sort(a);
        show(a);
        assert isSorted(a);

        // shuffle
        StdRandom.shuffle(a);

        // display results again using select
        //StdOut.println();
        //for (int i = 0; i < a.length; i++)
        //{
        //    String ith = (String)Quick.select(a, i);
        //    StdOut.println(ith);
        //}

    }
}




















