import java.io.ObjectStreamClass;
import java.util.Objects;

public class Item implements Comparable<Item> {
    private String desciption;
    private int partNumber;

    public Item(String desciption, int partNumber) {
        this.desciption = desciption;
        this.partNumber = partNumber;
    }

    public String getDesciption() {
        return desciption;
    }

    public String toString() {
        return "[description=" + desciption + ",partNumber=" + partNumber + "]";
    }

    public boolean equals(Object otherObject) {
        if (this == otherObject) return true;
        if (otherObject == null) return false;
        if (getClass() != otherObject.getClass()) return false;
        Item other = (Item) otherObject;
        return Objects.equals(desciption, other.desciption) &&
                partNumber == ((Item) otherObject).partNumber;
    }

    public int hashCode() {
        return Objects.hash(desciption, partNumber);
    }

    public int compareTo(Item other)
    {
        int diff = Integer.compare(partNumber, other.partNumber);
        return diff != 0 ? diff : desciption.compareTo(other.desciption);
    }


}
