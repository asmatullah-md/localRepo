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
struct Node*deleteAtFirst(struct Node*head){
    struct Node*ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//case 2
struct Node*deleteAtIndex(struct Node*head, int index){
    struct Node*p = head;
    struct Node*q = head->next;
    for(int i=0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

//case 3
struct Node*deleteAtEnd(struct Node*head){
    struct Node*p = head;
    struct Node*q = head->next;
    while(q->next !=NULL){
        p = p->next;
        q = q->next;

    }
    p->next = q->next;
    free(q);
    return head;
}

//case 4
struct Node*deleteAtValue(struct Node*head, int value, int data){
    struct Node*p = head;
    struct Node*q = head->next;
    while(q->data!=value && q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
    p->next = q->next;
    free(q);
    }
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
    forth->next = NULL;
    
    printf("Linked List before deletion\n");
    LinkedListTraversal(head);
    
    //head = deleteAtFirst(head);
    //head = deleteAtIndex(head, 2);
    //head = deleteAtEnd(head); 
    head =  deleteAtValue(head, 2 ,16);                    //Douts

    printf("Linked List after deletion\n");
    LinkedListTraversal(head);
    return 0;
}