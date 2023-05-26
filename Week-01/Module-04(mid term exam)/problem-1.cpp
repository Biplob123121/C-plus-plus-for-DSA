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
    char name[100] = "Biplob Kumar";
    Person *p1 = new Person(name, 6.50, 28);
    return 0;
}