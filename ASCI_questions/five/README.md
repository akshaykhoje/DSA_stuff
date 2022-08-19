### typedef struct node : 
    any variable of data type struct node can now be referred to as something else, that something else is the "node" that comes following the declaration of struct node.
    So struct node is now referred as node.

### typedef node* head :
    every pointer to a data type of node is now of type head.
    So to declare a pointer ptr to a node data type, write 'head ptr'. 

### void init(head *p, int x) :
    initializes the list with first node containing data = x.
    head *p is equivalent of writing node **p. 
    head is a pointer to node. p is a pointer pointing to a pointer say "ask", which points to the first node of the list.
    NOTE : Don't freak out, double pointers aren't tough.

    *p : value stored in ask, in other words, the address of the first node
    (node *)malloc(sizeof(node)) : node* here means the pointer returned by malloc function is typecasted to a pointer pointing to a node OR *p now knows where the node is allocated memory inside heap.

### void display(head p) :
    Since we don't have to make any permanent changes to the linked list, we don't pass by address. 
    We only pass the pointer to node, and parse through the list

### void reverse(head *p) : 
    In order to change the data values inside the nodes, we pass by address.
    int *arr : arr is pointer to integer data type.
    head temp :
        temp is pointer to node. 
    temp = *p :
        *p is the address of the first node.
        temp points where *p points i.e. to the first node
    arr = (int *)malloc(sizeof(int) * count(*p)):
        mallocating memory to array to store the elements of the list
        count(*p) : 
            count function only needs call by value since we don't have to make changes there. But here we passed *p since p is a double pointer here. 

        
    


