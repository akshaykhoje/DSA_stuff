/*
1. Reverse the elements of an array
*/

// #include<iostream>
// using namespace std;

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     return;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin>>arr[i];
//     for (int i = 0; i < n/2; i++)
//         swap(arr[i], arr[n-i-1]);
//     for (int i = 0; i < n; i++)
//         cout<<arr[i]<<" ";
    
//     return 0;
// }

//                                  Using STL

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    reverse(arr, arr+n);
    cout<<"Reversed array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}