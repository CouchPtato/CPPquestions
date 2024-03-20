#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
        return i;
    return -1;

}

int main()
{
    int arr[20], n, x, loc;
    cout << "Enter no. of elements in array: ";
    cin >> n;
    cout << "Input the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number you want to search: ";
    cin >> x;
    loc = search(arr, n, x);
    if (loc == -1)
        cout << "Element Not Found" << endl;
    else
        cout << "Element found at index " << loc << endl;

    return 0;
}