// C++ program to implement recursive Binary Search
#include <iostream>
#include <algorithm>
using namespace std;

// A recursive binary search function.

int binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle        
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        // Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, high, x);
    }

    // We reach here when element is not present in array
    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 66, 77, 234, 44, 24, 10, 40};   
    int x = 24;
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n); //Sorting the array
    cout << "Sorted Array : "; // Printing the array is not necessary

    for (int i = 0; i < n;i++)
    {
        cout << arr[i]<<" ";
    }

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "\nElement is not present in array"
                   : cout << "\nElement is present at index : " << result;
    return 0;
}
