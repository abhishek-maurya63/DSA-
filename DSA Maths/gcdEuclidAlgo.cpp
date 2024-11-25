#include <iostream>

using namespace std;
int gcd(int a, int b) // Euclid's optimized implementation
{
    if (b == 0)
        return a;
    return (b,a%b);
}

int gcd1(int a, int b) // not optimized
{
    if (a == 0 || b == 0)
        return 1;
    if (a > b)
    {
        return gcd(a - b, b);
    }
    else if (b > a)
        return gcd(b - a, a);
}
int main()
{

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int gcd_val = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << gcd_val << endl;

    return 0;
}