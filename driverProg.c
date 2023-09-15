#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include"stackArr_H"

void insertBottom(STACK *A, char data);

int main(){
    STACK head;

    initS(&head);
    pushS(&head, 420);
    printS(head);


    insertBottom(&head, 69);
    popS(&head);
    printS(head);

    return 0;
}

void insertBottom(STACK *A, char data)
{
    if(!(isFull(*A))){
        STACK temp;
        initS(&temp);
        
        while(!isEmpty(*A)){
            pushS(&temp, topS(*A));
            popS(A);
        }
        pushS(A, data);

        while(!isEmpty(temp)){
            pushS(A, topS(temp));
            popS(&temp);
        }
    }
}