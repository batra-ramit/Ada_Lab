#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5];
    cout << endl
         << endl
         << endl;
    cout << "Bubble_Sort\nMade By: Akash\nCSE-A\nRoll no:21\nenter array:\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int j = n - 1; j >= 0; j--)
    {
        for (int k = 0; k < j; k++)
        {
            if (arr[k] > arr[k + 1])
            {

                int temp = arr[k];
                arr[k] = arr[k + 1];

                arr[k + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << "    ";
    cout << endl
         << endl
         << endl;

    return 0;
}