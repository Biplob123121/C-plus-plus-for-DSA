#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char sec;
};
int main()
{
    Student s1;
    s1.roll = 101;
    s1.cls = 12;
    s1.sec = 'A';
    char nm1[100] = "Biplob Kumar";
    strcpy(s1.name, nm1);

    Student s2;
    s2.roll = 102;
    s2.cls = 11;
    s2.sec = 'B';
    char nm2[100] = "Shithi Sarker";
    strcpy(s2.name, nm2);

    cout << s1.name;
    return 0;
}