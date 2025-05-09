#include <iostream>
using namespace std;
int main()
{
    int p, c, m;
    cout << "Enter a numbar of physics:\n";
    cin >> p;
    cout << "Enter a number of chemistry:\n";
    cin >> c;
    cout << "Enter a number of maths:\n";
    cin >> m;

    if (p >= 50)
    {
        if (c >= 60)
        {
            if (m >= 75)
            {
                if (p + c + m >= 220)
                {
                    cout << "admission has given";
                }
                else if (p + m >= 110)
                {
                    cout << "admission has given";
                }
                else
                    cout << "admissoin has not given";
            }
            else
                cout << "ad. not given";
        }
        else
            cout << "ad. not given";
    }
    else
        cout << "ad not given";
    return 0;
}