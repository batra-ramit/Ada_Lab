#include <stdio.h>
#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
/* Driver code */
int main()
{
    int arr[5] ;
    int n = 5;
 cout<<endl<<endl<<endl;
cout<<"Insertion_Sort\nMade By: Khushi\nCSE-A\nRoll no:21\nenter array:\n";
for(int i=0;i<n;i++)
    cin>>arr[i];
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}