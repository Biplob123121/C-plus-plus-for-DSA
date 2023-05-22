#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *ar = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
    }
    int *br = new int[7];
    for (int i = 0; i < 5; i++)
    {
        br[i] = ar[i];
    }
    br[5] = 100;
    br[6] = 200;
    for (int i = 0; i < 7; i++)
    {
        cout << br[i] << " ";
    }
    cout << endl;
    delete[] ar;
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}