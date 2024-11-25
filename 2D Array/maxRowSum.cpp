#include <iostream>
using namespace std;
int maxRowSum(int matrix[][3], int rows, int column)
{
    int maxSum = 0;
    for (int i = 0; i < column; i++)
    {
        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += matrix[i][j];
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}
int diagnolSum(int matrix[][3], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
            else if (j == n - i - 1)
            {
                sum = sum + matrix[i][j];
            }
        }
    }

    return sum;
}

int main()
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value ";
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The maximum row sum is: " << maxRowSum(matrix, 3, 3) << endl;
    cout << "The diagnol sum is: " << diagnolSum(matrix, 3) << endl;
    return 0;
}