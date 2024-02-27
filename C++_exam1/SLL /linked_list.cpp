//How do we create a linked list?
/*
    1) create the link object 
    2) we would use the AnyList class
    -> This statement will call the constructor in the AnyList class to create the object
*/

Node *ptr = new Node;//create the pointer
            // Point the pointer to a new node by using the default constructor. 



class Node 
{
    public:
        Node() : data(0), next(nullptr){}
        Node(int theData, Node *newNext)
            : data(theData), next(newNext) {}
        Node* getData() const {return next;}
        int getData() const {return data;}
        void setData(int theData) { data = theData;}
        void setNext(Node *newNext)
        {next = newNext;}
        ~Node(){}

    private:
        int data;
        Node *next; //pointer that points to next node.
}

class AnyList
{
    public:
        AnyList() : first(nullptr), count(0) {}

        void insertFront(int);
        void print() const;
        void clearList();

        ~AnyList();

    private:
        Node *first; 
        // Pointer to point to the first node in the list. 
        int count;
        // Variable to keep track of number of nodes in the list.
}
