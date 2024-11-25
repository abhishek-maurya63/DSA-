#include <iostream>
#include <vector>
using namespace std;

void findNode(vector<vector<char>> &matrix, int n)
{
    // Process rows from bottom to top
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 4; j++) // Check each column in the row
        {
            if (matrix[i][j] == '#')
            {
                cout << j + 1 << " "; // Print the 1-based column index
                break; // Stop checking further columns in this row
            }
        }
    }
    cout << endl; // Print a newline after processing all rows
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Create a 2D matrix to store the beatmap
    vector<vector<char>> matrix(n, vector<char>(4));

    // Input the beatmap
    cout << "Enter the beatmap (each row contains exactly 4 characters):" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Process and output the result
    findNode(matrix, n);

    return 0;
}
