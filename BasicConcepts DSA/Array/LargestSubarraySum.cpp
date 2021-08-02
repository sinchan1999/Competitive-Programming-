/*Write an efficient program to find the sum of a contiguous subarray 
within a one-dimensional array of numbers that has the largest sum.*/

// Uaing Kadane’s Algorithm:

#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, curr_max = 0;

    for (int i = 0; i < size; i++)
    {
        curr_max = curr_max + a[i];
        if (curr_max > max_so_far)
            max_so_far = curr_max;

        if (curr_max < 0)
            curr_max = 0;
    }
    return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 2, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
