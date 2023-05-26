#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;
    Person(char *nm, float ht, int ag)
    {
        strcpy(name, nm);
        height = ht;
        age = ag;
    }
};

int main()
{
    char name1[100] = "Nirob";
    char name2[100] = "Sagor";
    Person *p1 = new Person(name1, 5.50, 14);
    Person *p2 = new Person(name2, 6.50, 24);
    if (p1->age == p2->age)
    {
        cout << "Same Age\n";
    }
    else if (p1->age > p2->age)
    {
        cout << p1->name << endl;
    }
    else
    {
        cout << p2->name << endl;
    }
    return 0;
}