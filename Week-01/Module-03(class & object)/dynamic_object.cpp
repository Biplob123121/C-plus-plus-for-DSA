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

int main()
{
    char name[100] = "Biplob Kumar";
    Student *s1 = new Student(name, 101, 12, 'A');
    cout << (*s1).name << endl;
    // (*s1).= s1->
    cout << s1->roll << endl;
    return 0;
}