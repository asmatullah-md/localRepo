#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};

void LinkedListTraversal(struct Node*ptr){
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}


int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;

    // Allocate memory for nodes in the linked list in Heap.
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Link first and second Nodes
    head->data = 7;
    head->next = second;

    // Link second and third Nodes
    second->data = 11;
    second->next = third;

    // Terminate the List at the third Node
    third->data = 66;
    third->next = NULL;
    
    LinkedListTraversal(head);
    return 0;
}