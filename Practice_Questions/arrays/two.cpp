// /*
// 2. Maximum and minimum of an array using minimum number of comparisons
// */

#include<iostream>
#include<limits.h>
using namespace std;

typedef struct container
{
    int min;
    int max;
} container;

container check(int A[], int n)
{
    container C;
    int low = INT_MAX, high=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i]<low)
            low = A[i];
        if (A[i]>high)
            high = A[i];
    }
    C.min = low;
    C.max = high;
    return C;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];   

    container pair = check(arr, n);
    cout<<"Min element: "<<pair.min<<endl;
    cout<<"Max element: "<<pair.max<<endl;
    return 0;
}
