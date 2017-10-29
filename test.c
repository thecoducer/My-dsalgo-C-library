#include<stdio.h>
#include "dsalgo.h"

int main(void)
{
        stack s=createstack();

        if(isempty(s))
                printf("Empty ");
        else
                printf("Not ");

        if(isfull(s))
                printf("Full ");
        else
                printf("Empty ");

        push(s,5);
        push(s,6);
        printf("%d", pop(s));
        display(s);
}
