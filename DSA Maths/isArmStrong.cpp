#include <iostream>
#include <math.h>
using namespace std;
bool isArmstrong(int n)
{
    int copyN = n;
    int armstrong = 0;
    while (n != 0)
    {
        int digit = n % 10;
        armstrong += (digit * digit * digit);
        n = n / 10;
    }
    return (armstrong == copyN);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isArmstrong(n))
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;
    return 0;
}