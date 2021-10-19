//task 8

#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j >= i; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}
