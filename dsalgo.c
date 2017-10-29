#include<stdio.h>
#include "dsalgo.h"

stack createstack()
{
        stack s;

        s.top=-1;

        return s;
}
int isempty(stack s)
{
        return(s.top==-1);
}
int isfull(stack s)
{
        return(s.top==stack_size-1);
}
int push(stack s, int data)
{
        s.top=s.top+1;
        s.stack_arr[s.top]=data;
}
int pop(stack s)
{
        s.top=s.top-1;
        return(s.stack_arr[s.top+1]);
}
void display(stack s)
{
        int i;

        for(i=s.top;i>=0;i--)
                printf("%d\n", s.stack_arr[i]);
}
