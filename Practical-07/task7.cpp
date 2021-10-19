//task 7

#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 3; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
