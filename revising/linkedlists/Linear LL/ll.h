typedef struct node {
    int data;
    struct node *next;
} node;     //struct node can now  be called node

// typedef node* list;   //list is a pointer-type to node data type

void init(node **, int);   //taking address of node* here. node** points to the first node of the list
void append(node **, int );
void display(node *);      //node * points to the first node of the list
int count(node *);
int delete(node **, int);
int maxElement(node *);
int *search(node *p, int key, int *indices);    //returns an array of indices where key is found
void insert(node **p, int index, int x);       //inserts anywhere in the list
void reverse(node **p);
int isLinkSorted(node *);
void concatenate(node **, node **);   //joins two linkedlists E2E
void *merge(node **, node **);
int isLoopPresent(node **);