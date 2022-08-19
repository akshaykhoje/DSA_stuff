typedef struct stack
{
    int size;
    int top;
    int *st; // st is pointer to array
} stack;

void init(stack *, int);
void push(stack *, int);
int pop(stack *);
void display(stack);
int isStackFull(stack);
int isStackEmpty(stack);
int stackTop(stack);
int peek(stack, int);