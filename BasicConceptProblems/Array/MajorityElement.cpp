// C++ Program for finding out majority element in an array
// Using Moore’s Voting Algorithm [Time Complexity: O(n). Auxiliary Space: O(1). ]

#include <iostream>
using namespace std;

/* Function to vote for Majority element*/
int voteMajority(int a[], int size)
{
    int maj_index = 0, vote = 1;
    for (int i = 1; i < size; i++)
    {
        if (a[maj_index] == a[i])
            vote++;
        else
            vote--;

        if (vote == 0)
        {
            maj_index = i;
            vote = 1;
        }
    }
    return a[maj_index];
}

/* Driver code */
int main()
{
    int a[] = {2,4,5,2,4,2,2};
    int size = (sizeof(a)) / sizeof(a[0]);

    // Calling the voting function and getting the most voted element.
    int maxNum = voteMajority(a, size);

 // Checking if the most voted element is really Major element or not.
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        if (maxNum == a[i])
            count++;
    }        

    if (count > (size / 2))
        cout << "Majority Element: " << maxNum << endl;

    else
        cout << "There is no max element" << endl;

    return 0;
}

/* Complexity Analysis: 
Time Complexity: O(n). 
As two traversal of the array is needed, so the time complexity is linear.

Auxiliary Space: O(1). 
As no extra space is required.*/