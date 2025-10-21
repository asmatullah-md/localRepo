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

//case 1
struct Node*insertAtFirst(struct Node*head, int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}

//case 2
struct Node*insertAtIndex(struct Node*head, int data, int index){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node*p = head;
    int i=0;

    while(i!=index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//case 3
struct Node*insertAtEnd(struct Node*head, int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node*p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

//case 4
struct Node*insertAfterNode(struct Node*head, struct Node*prevNode ,int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
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
    
    printf("Linked List before insertion\n");
    LinkedListTraversal(head);
    head = insertAtFirst(head, 56);
    //head = insertAtIndex(head, 74, 1);  // insert in between start from '1'.
    //head = insertAtEnd(head, 56);
    //head = insertAfterNode(head, second, 59);
    printf("Linked List after insertion\n");
    LinkedListTraversal(head);
    return 0;
}