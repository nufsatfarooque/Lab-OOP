#include <iostream>
#include<string>
#include "StudentCollection.h"

using namespace std;

int main()
{
    StudentCollection s1, s2;
    s1.addStudent("A", 80.0);
    s1.addStudent("B", 50.1);
    s1.addStudent("C", 99);

    cout<< s1["A"];

    return 0;
}
