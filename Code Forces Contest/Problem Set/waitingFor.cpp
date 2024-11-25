#include <iostream>
using namespace std;

int main()
{
    int p_i = 0; // Passenger count
    char str;
    int events, value;

    cin >> events;

    while (events--) // Decrement events in each iteration
    {
        cin >> str;
        if (str == 'P')
        {
            cin >> value;
            p_i = p_i + value; // Add passengers
        }
        else if (str == 'B')
        {
            cin >> value;
            p_i = p_i - value; // Remove passengers

            // Check if passengers are less than 0 or exactly 0 with a valid boarding value
            if (p_i < 0)
            {
                cout << "YES" << endl;
                p_i = 0; // Reset passenger count
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
