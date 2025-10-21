#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

void LinkedListTraversal(struct Node*head){
    struct Node*ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);  
}

struct Node*insertAtFirst(struct Node*head, int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node*p = head->next;
    
    while(p->next!=head){
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
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
    head->data = 7;
    head->next = second;

    // Link second and third Nodes
    second->data = 11;
    second->next = third;

    // Link third and forth Nodes
    third->data = 16;
    third->next = forth;

    // Terminate the List at the forth Node
    forth->data = 66;
    forth->next = head;
    
    printf("Circular Linked List before insertion\n");
    LinkedListTraversal(head);
    
    head = insertAtFirst(head, 8);
    head = insertAtFirst(head, 47);

    printf("Circular Linked List after insertion\n");
    LinkedListTraversal(head);
    return 0;
}