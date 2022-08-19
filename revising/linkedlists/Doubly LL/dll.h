typedef struct node 
{
    struct node *prev;
    int data;
    struct node *next;
} node;

void init(node **, int);
void append(node **, int);
void display(node *);
void reverseDisplay(node *);
int count(node *);
void insert(node **, int, int);
void delete(node **, int);