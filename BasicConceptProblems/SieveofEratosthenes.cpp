/* C++ program to print all prime numbers
 smaller than or equal to n using Sieve of Eratosthenes */

#include <iostream>
#include <cstring>
using namespace std;

void SieveOfEratosthenes(int n)
{
    /* Creating a boolean array
    "prime_arr[0..n]" and initialized
    all entries  as true. 
    Later if the number is not Prime we will change it to false.*/

    bool prime_arr[n + 1];
    memset(prime_arr, true, sizeof(prime_arr));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime_arr[p] == true) // Once marked false those numbers will not be taken into account in further steps.
        {
            /* Numbers which are multiple
            of p and are less than p^2
            are already been marked. */

            for (int i = p * p; i <= n; i += p)
                prime_arr[i] = false; // Making false is same as setting 0 VALUES
        }
    }

    // Printing all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime_arr[p]) // Filtering OR Passing only the non-zero numbers
            cout << p << " ";
}

// Driver Code
int main()
{
    int n = 20;
    cout << "Following are the prime_arr numbers smaller "
         << " than or equal to " << n << endl;
    SieveOfEratosthenes(n);
    return 0;
}
