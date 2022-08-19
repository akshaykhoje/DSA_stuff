typedef struct node 
{
    int data;
    struct node *next;
} node;

void init(node **, node **, int);
void push(node **, int);
void display(node *);
int pop(node **, node **);
int isStackFull();
int peek(node *);