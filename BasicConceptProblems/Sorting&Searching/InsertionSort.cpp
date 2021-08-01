// C++ program for insertion sort
#include <iostream>
using namespace std;

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, temp, j;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;

        /* Right-shifting the elements of arr[0..i-1], that are
		greater than temp */
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

// A  function to print the sorted array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout <<arr[i] << " ";
    cout << endl;
}

/* Driver code */
int main()
{
    int arr[] = {12, 200, 555, 11, 13, 5, 6, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    cout << "Sorted Array : " ;
    printArray(arr, n);

    return 0;
}

/* TIME COMPLEXITY:
--> Time Complexity: O(n^2) 
--> Auxiliary Space: O(1)
--> Boundary Cases: Insertion sort takes maximum time to sort if elements are sorted in reverse order.
 And it takes minimum time (Order of n) when elements are already sorted.

 --> Sorting In Place: Yes
--> Stable: Yes  */
