typedef struct node
{
    int data;
    struct node *next;
} node;

void init(node **, int);
void display(node *);
void append(node **, int);
void insert(node **, int, int);
int count(node *);
void delete(node **p, int index);