// Merging two sorted arrays with O(1) extra space.

/* The idea: We start comparing elements that are far from each other rather than adjacent. 
For every pass, we calculate the gap and compare the elements towards the right of the gap.
 Every pass, the gap reduces to the ceiling value after dividing by 2.  */

#include <iostream>
using namespace std;

// Function to find next gap.
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

void merge(int *arr1, int *arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap);
         gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);

        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);

        if (j < m)
        {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}

// Driver code
int main()
{
    int a1[] = {5, 10, 15, 27, 38, 43, 82};
    int a2[] = {3, 9, 11, 99};
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a2) / sizeof(int);

    // Function Call
    merge(a1, a2, n, m);

    cout << ("First Array: ");
    for (int i = 0; i < n; i++)
        cout << a1[i] << " ";

    cout << ("\nSecond Array: ");
    for (int i = 0; i < m; i++)
        cout << a2[i] << " ";
    cout << ("\n");
    return 0;
}

// Link --> https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/