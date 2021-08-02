// Optimized implementation of Bubble sort
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// An optimized version of Bubble Sort by adding a bool check for swapping
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true; // If atleast one swap happens then swap will be true.
            }
        }

        // IF no two elements were swapped by inner loop, then break.Beacause the array is already sorted!
        if (swapped == false)
            break;
    }
}

/* Function to print the sorted array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}

// Driver program
int main()
{
    int arr[] = {64, 34, 100, 999, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << ("Sorted array: ");
    printArray(arr, n);
    return 0;
}

/*If bubble sort was not optimised with bool then it would always run in O(n^2) time even if the array is sorted. 
So, we optimized it by stopping the algorithm if inner loop didn’t cause any swap. */

/* TIME COMPLEXCITY ANALYSIS & Imp. features:
1: Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
2: Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
3: Auxiliary Space: O(1).
4: Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.
5: Sorting In Place: Yes 
6: Stable: Yes */