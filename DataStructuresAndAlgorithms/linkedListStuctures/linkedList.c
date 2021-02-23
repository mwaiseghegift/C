//This is just a demo

#include <stdio.h>
#include <stdlib.h> //because we'll allocate memory

int main(){
    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;

    //memory allocation
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //assigning values to nodes
    head->data = 80;
    second->data= 90;
    third->data= 100;

    //lining the nodes
    head->next=second;
    second->next=third;
    third->next=NULL;

    //calling display
    display(head);
    return 0;
}