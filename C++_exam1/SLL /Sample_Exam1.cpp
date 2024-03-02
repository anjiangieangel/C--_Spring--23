#include "AnyList.h"

using namespace std;


void AnyList::moveLastToFirst(Node * ptrBeforeLast)
{
   ptrBeforeLast -> getNext() -> setNext(first); //
   first = ptrBeforeLast-> getNext();
   ptrBeforeLast->setNext(nullptr);
}

// 
// Member function of the class AnyList.
// Parameters: A pointer pointing to the node before last.
// Return type: void
// The function moves the last node to first position.
// 
// ASSUMPTION: The list has at least three nodes.
// 
// REQUIREMENTS: Cannot create any pointers.
//
// EXAMPLE 1:
// List: 1 2 3
// Function runs...
// List: 3 1 2
// 
// EXAMPLE 2:
// List: 70 45 32 99 85
// Function runs...
// List: 85 70 45 32 99



/*

Possible errors:
Not using a descriptive identifier for ptrBeforeLast.
Using NULL instead of nullptr.
Checking if the list has at least three nodes when it is already assumed.
Creating a pointer when requirements state not to create any.
Rearranging values instead of moving nodes.
Not connecting all necessary pointers.
Redundant code (for example, connecting a point that has already been connected).
Not updating pointer first.
Not updating the next pointer of the node that will become the last node in the list.
Instead of moving, deleting the node and creating a new one.
Writing long statements.
Not indenting properly.
Not writing your name at the top of the exercise.
Incorrect spacing (do NOT add spaces around the arrow operator, but DO add spaces around the assignment operator).

*/