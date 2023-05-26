#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char sec;

    Student(char *nm, int r, int c, char s)
    {
        strcpy(name, nm);
        roll = r;
        cls = c;
        sec = s;
    }
};

Student func()
{
    char name[100] = "Shithi Sarker";
    Student s1(name, 102, 12, 'B');
    return s1;
}
int main()
{
    Student s1 = func();
    cout << s1.name << endl;
    cout << s1.roll << endl;
    cout << s1.cls << endl;
    cout << s1.sec << endl;
    return 0;
}