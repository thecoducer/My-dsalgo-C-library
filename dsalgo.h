#define stack_size 5
typedef struct stack{
        int stack_arr[stack_size];
        int top;
        int size;
}stack;
stack createstack();
int isempty(stack s);
int isfull(stack s);
int push(stack s, int data);
int pop(stack s);
void display(stack s);
