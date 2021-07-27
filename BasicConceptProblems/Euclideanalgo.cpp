// TO find the GCD of two numbers. ( largest number that divides both of them)
// HCF is also known as Greatest Common Divisor (GCD)
// Basic Euclidean Algorithm
#include <iostream>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Driver Code
int main()
{
    int a = 10, b = 15;
    cout << "GCD(" << a << ", "
         << b << ") = " << gcd(a, b)
         << endl;
    a = 7, b = 5;
    cout << "GCD(" << a << ", "
         << b << ") = " << gcd(a, b)
         << endl;
    a = 40, b = 20;
    cout << "GCD(" << a << ", "
         << b << ") = " << gcd(a, b)
         << endl;
    return 0;
}
