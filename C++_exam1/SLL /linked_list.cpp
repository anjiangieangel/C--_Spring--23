//How do we create a linked list?
/*
    1) create the link object 
    2) we would use the AnyList class
    -> This statement will call the constructor in the AnyList class to create the object
*/

Node *ptr = new Node;//create the pointer
            // Point the pointer to a new node by using the default constructor. 
ptr -> setData(3); // same as (*ptr).setData(3); -> referes to dereference and dot ^ㅅ^ ~~
++count; //Increment the count , still we got nullptr for *first 

//so in this case.. we create the myList with count and *first / all is set for nullptr and count 0 
// at first so we have to put data on the first and also increase the count / 

//#Simplified version below ! 
Node *ptr = new Node(4, nullptr);
first = ptr; 
++count;  //count would be 1, tho first will point to the node which is pointed by ptr .. 
// 그니까 first는 ptr 의 값 : 4의 주소값을 갖게됨 ~! 

// Lets simplify EVEN MORE !! 
first = new Node(6,nullptr);
++count; // DON'T FORGET TO INCREMENT THE COUNT !!!! 
// -> From now on, we will simplify our representation by using arrows instead of addresses . 

// Create a pointer and make it point to a new node by using the overloaded constructor 
// and storing a value right away! 


//INSERTING TO THE FRONT OF THE LIST 
/* to insert a node to the front of the list, you need to ... 
    1) Create a pointer to point a new node (which is dynamic) / 
    2) Create a new node / new Node(???)
    3) Store a data in the new node / new Node(newData, ??? )
    4) Set new node's pointer to point to the first node / new Node(newData, first)
    5) Make the new node be the "first" node  /new Node(newData, first);
    6) Increment the count  / ++count; 
*/

void AnyList::insertFront(int newData)
{
    first = new Node(newData, first)
    ++count; 
}



//PRINTING THE LIST 
/* How do you print the list? 
    1) Create a pointer to traverse the list -> current 
        프로그래밍에서 "traverse"는 데이터 구조를 순회하거나 탐색하는 것을 의미합니다. 
        이는 보통 트리, 링크드 리스트, 배열 등과 같은 데이터 구조에서 
        각 노드 또는 요소를 차례대로 방문하거나 접근하는 과정을 말합니다. 
        순회는 데이터를 조사하거나 처리하는 데 사용됩니다.
    2) Set the current pointer to point to the first node
    3) While the current pointer is not nullptr(it means that it has not reached the end of the list)
        a. Output the data the current pointer is pointing to 
        b. Move the current pointer forward 
*/

void AnyList::print()
{
    if(first == nullptr)
    {
        cerr << "List is empty.";
       /* cout은 일반적인 출력에 사용됩니다. 정보, 결과 또는 데이터를 표준 출력 스트림에 출력하는 데 사용됩니다.
        cerr은 주로 오류 메시지, 경고 또는 진단 정보에 사용됩니다. cerr은 버퍼되지 않으며, 즉시 콘솔에 표시됩니다. 
        이는 버퍼가 채워지거나 새 줄 문자를 기다리지 않고도 cerr에 보낸 메시지가 즉시 표시됨을 의미합니다.
        요약하면, cerr은 오류 상황을 처리하고 사용자나 개발자에게 진단 정보를 제공하여 오류 메시지를 명확하게 표시합니다.
        */ 
    }
    else 
    {
        Node *current = first; 
        // Create a pointer to traverse the list. 
        // This pointer will point to the first node in the List. 
        while (current != nullptr)
        {
            cout << current -> getData() << " ";
            current = current -> getNext(); // current = (*current).getNext();
        }
    }
}



//클래스 만드는법 : 책보고  암기   필 . ...... 

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
