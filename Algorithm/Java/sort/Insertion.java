import edu.princeton.cs.algs4.*;

import java.util.Comparator;

public class Insertion {
    private Insertion() {
    }

    /**
     * @param a the array to sorted
     */
    public static void sort(Comparable[] a)
    {
        int n = a.length;
        for (int i = 1; i < n; i++)
        {
            for (int j = i; j > 0 && less(a[j], a[j-1]); j--)
            {
                exch(a, j, j-1);
            }
            assert isSorted(a, 0, i);
        }
        assert isSorted(a);
    }

    /**
     * Rearranges the subarray a[lo..hi) in ascending, using a comparator
     * @param a the array
     * @param comparator the comparator specifying the order
     */
    public static void sort(Object[] a, Comparator comparator)
    {
        int n = a.length;
        for (int i = 1; i < n; i++)
        {
            for (int j = i; j > 0 && less(a[j], a[j-1], comparator); j--)
            {
                exch(a, j, j-1);
            }
            assert isSorted(a, 0, i, comparator);
        }
        assert  isSorted(a, comparator);
    }


    /**
     * help sort function
     */
    // is v < w ?
    @SuppressWarnings("unchecked")
    private static boolean less(Comparable v, Comparable w) {
        return v.compareTo(w) < 0;
    }

    // is v < w ?
    @SuppressWarnings("unchecked")    
    private static boolean less(Object v, Object w, Comparator comparator) {
        return comparator.compare(v, w) < 0;
    }

    // exchange a[i] and [j]
    private static void exch(Object[] a, int i, int j) {
        Object temp = a[i];
        a[i] = a[j];
        a[j] = a[i];
    }

    // exchange a[i] and a[j] (for indirect sort)
    private static void exch(int[] a, int i, int j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }


    /*
     * Check if array is sorted - useful for debugging
     */
    private static boolean isSorted(Comparable[] a) {
        return isSorted(a, 0, a.length);
    }

    private static boolean isSorted(Comparable[] a, int lo, int hi) {
        for (int i = lo + 1; i < hi; i++)
            if (less(a[i], a[i - 1])) return false;
        return true;
    }

    private static boolean isSorted(Object[] a, Comparator comparator) {
        return isSorted(a, 0, a.length, comparator);
    }

    // is the array a[lo..hi) sorted
    private static boolean isSorted(Object[] a, int lo, int hi, Comparator comparator) {
        for (int i = lo + 1; i < hi; i++)
            if (less(a[i], a[i - 1], comparator)) return false;
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
        Insertion.sort(a);
        show(a);
    }
}
