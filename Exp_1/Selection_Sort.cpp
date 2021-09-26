#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n=5,arr[5],min=0;
    cout<<endl<<endl<<endl;
cout<<"Selection_Sort\nMade By: Akash\nCSE-A\nRoll no:33\nenter array:\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++){
min=i;
for(int j=i;j<n;j++){
if(arr[j]<arr[min])
min=j;
    }
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    }
    
    
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"    ";
cout<<endl<<endl<<endl;
    
    
    
    
    return 0;
}