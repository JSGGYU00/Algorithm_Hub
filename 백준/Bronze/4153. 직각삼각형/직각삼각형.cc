#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int number[3];

    while (true)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> number[i];
        }

        sort(number, number + 3);


        if(number[0] == 0 && number[1] == 0 && number[2] == 0)
        {
            break;
        }

        else if(number[0] * number[0] + number[1] * number[1] == number[2] * number[2])
        {
            cout << "right" << endl;
        }

        else
        {
            cout << "wrong" << endl;
        }        

        if (number[0] == 0 && number[1] == 0 && number[2] == 0)
        {
             break;
        }
    }

    return 0;
}