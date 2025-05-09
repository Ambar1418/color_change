#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int choise;
    cout << "Enter a integer:\n";
    cin >> a;
    cout << "enter an another integer:\n";
    cin >> b;
    cout << "select an opration\n";
    cout << "1.add\n"
         << "2.sub\n"
         << "3.mult\n"
         << "4.div\n";
    cout << "enter your choise\n";
    cin >> choise;

    switch (choise)
    {
    case 1:
        cout << " sum is "
             << a + b;
        break;

    case 2:
        cout << " diff is"
             << a - b;
        break;
    case 3:
        cout << " mult is "
             << a * b;
        break;
    case 4:
        cout << "div is "
             << a / b;
        break;
    default:
        cout << "worng choise";
        break;
    }
    return 0;
}