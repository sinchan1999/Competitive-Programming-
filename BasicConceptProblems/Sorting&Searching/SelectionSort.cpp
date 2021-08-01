// C++ program for implementation of selection sort
#include <iostream>
using namespace std;

void swap(int *min_element, int *curr_element)
{
    int temp = *min_element;
    *min_element = *curr_element;
    *curr_element = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_index;

    // Finding the minimum element in unsorted array .
    for (i = 0; i < n - 1; i++)
    {
        min_index = i; // Initiall assuming curr_index to be the min_index.

        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_index])
                min_index = j;

        // Swapping the  minimum element with the curr element .
        if (min_index != i)
            swap(&arr[min_index], &arr[i]);
    }
}

/* Function to print the sorted array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver program
int main()
{
    int arr[] = {64, 777, 834, 991, 25, 12, 22, 11, 5, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}

/* TIME COMPLEXITY:
---> Time Complexity: O(n2) as there are two nested loops.
---> Auxiliary Space: O(1) 
---> The good thing about selection sort is it never makes more than O(n) swaps 
     and can be useful when memory write is a costly operation. 
---> In Place : Yes, it does not require extra space.    */