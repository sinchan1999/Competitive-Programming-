#include <iostream>
#include <vector>
using namespace std;

int MaxSubArray(vector<int> &arr)
{
    int sum = 0;
    int maxTillNow = 0;
    for (auto itr : arr)
    {
        sum = sum + itr;
        maxTillNow = max(sum, maxTillNow);
        if (sum < 0)
            sum = 0;
    }

    return maxTillNow;
}

int main()
{
    vector<int> arr{-2, -3, 4, -1, -2, 10, 5, -3};
    int max = MaxSubArray(arr);
    cout << max;

    return 0;
}
