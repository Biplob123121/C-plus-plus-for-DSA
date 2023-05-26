#include <bits/stdc++.h>
using namespace std;

void func2()
{
    int n = 30;
    cout << "I am from function 2\n";
}

void func1()
{
    int n = 20;
    func2();
    cout << "I am from function 1\n";
}
int main()
{
    int n = 10;
    func1();
    cout << "I am form main function\n";
    return 0;
}

// about stack
//     1. compiler 
//     2. sequential
//     3. activation record
//     4. Drawback
//     5. 