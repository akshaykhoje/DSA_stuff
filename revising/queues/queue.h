typedef struct node{
  int data;
  struct node *next;
} node;

typedef node *head;

void init(node **, node **, int);
void enqueue(node **, node **, int);
int dequeue(node **);
void display(node *);
int isQueueEmpty(node *);
int *peek(node *, node *);
int isQueueFull();