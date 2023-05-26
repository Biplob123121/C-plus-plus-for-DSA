#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char sec;

    Student(char* nm, int r, int c, char s)
    {
        strcpy(name, nm);
        roll = r;
        cls = c;
        sec = s;
    }
};
int main()
{
    Student s1("Biplob Kumar", 101, 12, 'A');
    cout << s1.name << endl;
    cout << s1.roll << endl;
    cout << s1.cls << endl;
    cout << s1.sec << endl;
    return 0;
}