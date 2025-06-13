#include <stdio.h>
#include <stdlib.h>

// total size of the struct or Node
// int- 4 bytes ; pointer variable- 64bits or 8 bytes
// total = 12 bytes for each node or struct you create

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // this is created in the stack to point to some address in the heap

// function to create a linked list
void create_linked_list(int A[], int n)
{

    // we need some variables
    int i;                   // for traversing the array
    struct Node *temp, *last; // temporary pointer variables for traversing linked list and assigning address of last node

    // head = (struct Node*) malloc(sizeof(struct Node)); // this will allocated 12 bytes of memory in the heap and return the address

    head = (struct Node *)malloc(sizeof(struct Node)); // creating first node here
    head->data = A[0];                                 // assign value to first node
    head->next = NULL;
    last = head; // why does last point to head too?

    // we can create the rest of the node using a loop

    for (i = 1; i < n; i++)
    {
        temp = malloc(sizeof(struct Node)); // create new node
        temp->data = A[i];                  // assign the next value in the array to the newly created node
        temp->next = NULL;                  // assign NULL to the pointer in the newly created node
        last->next = temp;                   // link previous node to newly created node
        last = temp;                        // we move the pointer of last variable to point to the newly created node
    }
}

//display function - traverse the linked list

void display_linked_list(struct Node* p){
    while (p != NULL){
        printf("%d->", p->data);
       
        p = p->next;
    }
    printf("\n");
}

 // recursive function to traverse linked list
 void display_recursive(struct Node* p){
    if (p != NULL){
        printf("%d->", p->data);
        display_recursive(p->next);
    }else{
        //printf("\n");
        printf(" NULL");
    }
 }

//  display_forward(3)
// │
// ├── prints: 3->
// │
// ├── display_forward(5)
// │   ├── prints: 5->
// │   ├── display_forward(7)
// │       ├── prints: 7->
// │       ├── display_forward(NULL)
// │           └── prints: NULL


// Call Stack Builds:
// display_forward(3)
//   → display_forward(5)
//     → display_forward(7)
//       → display_forward(NULL)

// ┌────────────────────────┐
// │ display_forward(NULL)  │ ← top
// │ display_forward(7)     │
// │ display_forward(5)     │
// │ display_forward(3)     │ ← bottom
// └────────────────────────┘




// function to traverse linked list and print node data in reverse
 void display_recursive_reverse(struct Node* p){
    if (p != NULL){
        display_recursive(p->next); // will print the linked list in reverse
        printf("%d->", p->data);
       
    }else{
        //printf("\n");
        printf(" NULL");
        printf("\n");
    }
    printf("\n");
 }
// how the recursion works when we switch the function call statement
//  display_recursive(3) → 
//     display_recursive(5) →
//         display_recursive(7) →
//             display_recursive(NULL) → prints "NULL"
//         print 7
//     print 5
// print 3

// ✅ Summary
// Recursion follows Last In, First Out (LIFO) — like a stack

// Putting printf() after the recursive call prints in reverse

// Putting printf() before the recursive call prints in forward order


// function to count the nodes in a linked list

 int count_nodes(struct Node* p){
    int count;
    count = 0;
    printf("\n");
    while(p != NULL){
        count++;
        p = p->next;


    }
    printf("The number of nodes are: %d \n", count);

    return count;

    // time complexity - O(n)
    // space complexity - O(1)
 }


int main()
{

    // what is a linked list?
    // what is a Node?
    // Node structure ( complex numbers)
    // create a node
    // access a node

    int A[] = {3, 5, 7, 10, 15};
    create_linked_list(A, 5);
    display_linked_list(head);
    display_recursive(head);
    printf("the number of nodes in the linked list are: %d \n", count_nodes(head));

    


    return 0;
}