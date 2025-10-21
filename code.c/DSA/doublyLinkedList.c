#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
    struct Node*prev;
};

void LinkedListTraversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//case 1
struct Node*insertAtFirst(struct Node*head, int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}



int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*forth;

    // Allocate memory for nodes in the linked list in Heap.
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));


    // Link first and second Nodes
    head->data = 4;
    head->next = second;
    head->prev = NULL;

    // Link second and third Nodes
    second->data = 3;
    second->next = third;
    second->prev = head;

    // Link third and forth Nodes
    third->data = 6;
    third->next = forth;
    third->prev = second;

    // Terminate the List at the forth Node
    forth->data = 1;
    forth->next = NULL;
    forth->prev = third;
    
    printf("Doubly Linked List before insertion\n");
    LinkedListTraversal(head);
    
    head = insertAtFirst(head, 10);
    
    printf("Doubly Linked List after insertion\n");
    LinkedListTraversal(head);
    return 0;
}