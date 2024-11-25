#include <iostream>
using namespace std;
pair<int, int> linearSearch(int matrix[][3], int col, int rows, int key)
{
    pair<int, int> result;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (matrix[i][j] == key)
            {
                result.first = i;
                result.second = j;
                return result;
            }
        }
    }
    result.first = -1;
    result.second = -1;

    return {result};
}
int main()
{
    // int arr[5]={ 0, 1, 2, 3, 4, 5};
    int matrix[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    // row=4
    // column=3
    // cout << matrix[2][1];


    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    // }


    pair<int, int> result = linearSearch(matrix, 3, 3, 8);
    cout << result.first<<" " <<result.second;
    return 0;
}