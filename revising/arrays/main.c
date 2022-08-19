#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Array
{
    int *A;
    int size;
    int length;
} Array;

static int countOfElements = -1;

void init(Array *array, int size, int len)
{
    array->size = size;
    array->A = (int *)malloc(sizeof(int) * array->size);
    array->length = len;
    printf("array initialized!\n");
    return;
}

void append(Array *array, int data)
{
    countOfElements++;
    int i = countOfElements;
    array->A[i] = data;
    return;
}

void delete (Array *array, int index)
{
    for (int i = index; i < array->length; i++)
        array->A[i] = array->A[i + 1];
    return;
}

void display(Array array)
{
    for (int i = 0; i < array.length; i++)
        printf("%d ", array.A[i]);
    printf("\n");
    return;
}

void insert(Array *array, int index, int data)
{
    if (index < array->length && index >= 0)
    {
        int i = 0;
        while (i < index)
            i++;
        for (int j = i; j < array->length; j++)
            array->A[j + 1] = array->A[j];
        array->A[i] = data;
    }
    else
    {
        printf("Cannot allocate space for the data\n");
        exit(0);
    }

    return;
}

int search(Array array, int key)
{
    int i = 0;
    while (array.A[i] != key)
        i++;
    return i;
}

int get(Array array, int index) // getting value at an index
{
    if (index < array.length && index >= 0)
    {
        int i = 0;
        while (i < index)
            i++;
        return array.A[i];
    }
    else
    {
        printf("Invalid index!\n");
        return INT_MIN;
    }
}

void set(Array *array, int index, int data)
{
    if (index < array->length && index >= 0)
    {
        int i = 0;
        while (i < index)
            i++;
        array->A[i] = data;
        return;
    }
    else
    {
        printf("Invalid index!\n");
        return;
    }
}

int maxElement(Array array)
{
    int max = array.A[0];
    for (int i = 0; i < array.length; i++)
    {
        if (array.A[i] > max)
            max = array.A[i];
    }
    return max;
}

int minElement(Array array)
{
    int min = array.A[0];
    for (int i = 0; i < array.length; i++)
    {
        if (array.A[i] < min)
            min = array.A[i];
    }
    return min;
}

int sumOfElements(Array array)
{
    int sum = 0;
    for (int i = 0; i < array.length; i++)
        sum += array.A[i];
    return sum;
}

void swap(Array *array, int *a, int *b)   //dependency for reverse function
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void reverse(Array *array)
{
    for (int i = 0; i < array->length / 2; i++)
        swap(array, &array->A[i],& array->A[array->length - i - 1]);
    return;
}

int main()
{
    Array arr;
    int size, len;

    printf("Enter size of array : ");
    scanf("%d", &size);
    printf("Enter how many numbers you want to add : ");
    scanf("%d", &len);
    if (len <= size && len > 0)
        init(&arr, size, len);
    else
    {
        printf("Cannot have more than %d elements...👻\n", size);
        exit(0);
    }
    append(&arr, 100);
    append(&arr, 200);
    append(&arr, 300);
    append(&arr, 500);
    display(arr);
    delete (&arr, 2);
    delete (&arr, 1);
    // display(arr);
    insert(&arr, 3, -123);
    insert(&arr, 4, -9999);
    display(arr);
    // printf("The element is found at index %d\n", search(arr, -123));
    printf("Element at given index is %d\n", get(arr, 1));
    printf("Element at given index is %d\n", get(arr, -3));
    set(&arr, 2, 333);
    append(&arr, 10000);
    display(arr);
    printf("MAX element is %d\n", maxElement(arr));
    printf("MIN element is %d\n", minElement(arr));
    display(arr);
    printf("SUM of elements of the array is %d\n", sumOfElements(arr));
    reverse(&arr);
    display(arr);
    return 0;
}