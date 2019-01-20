import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;

/**
 * This program demonstrates operations on linked lists
 *
 * @author wcc
 * @version 1.1 2019
 */
public class LinkedListTest {
    public static void main(String[] args) {
        List<String> a = new LinkedList<>();
        a.add("Amy");
        a.add("Carl");
        a.add("Erica");

        List<String> b = new LinkedList<>();
        b.add("Bob");
        b.add("Doug");
        b.add("Frances");
        b.add("Gloria");

        // merge the words from b into a
        ListIterator<String> alter = a.listIterator();
        Iterator<String> blter = b.iterator();

        while (blter.hasNext()) {
            if (alter.hasNext()) alter.next();
            alter.add(blter.next());
        }

        System.out.println(a);

        // remove every second word from a
        blter = b.iterator();
        while (blter.hasNext()) {
            blter.next();  // skip one element
            if (blter.hasNext()) {
                blter.next();   // skip next element
                blter.remove(); // remove that element
            }
        }

        System.out.println(b);

        a.removeAll(b);
        System.out.println(a);
    }
}
