#ifndef LIST_H
#define LIST_H

template <typename elemType> class ListItem;
template <typename elemType> class List
{
public:
    List<elemType>();
    List<elemType>(const List<elemType> &);
    List<elemType>& operator=(const List<elemType> &);
    ~List();
    void inset(ListItem *ptr, elemType value);
private:
    ListItem<elemType> *front, *end;
    //      ^^^^^^^^^ -- template is not a type, the type must be provided
}

#endif // LIST_H
