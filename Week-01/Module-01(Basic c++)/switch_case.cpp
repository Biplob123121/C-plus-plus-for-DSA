#include <iostream>
using namespace std;
int main()
{
    int mark;
    cin >> mark;
    switch (mark)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;

    default:
        cout << "Didn't match..";
        break;
    }
    return 0;
}