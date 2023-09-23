#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    double a[3][3]={{1, 2, 3},
                 {3, 4, 5},
                 {5, 6, 6}};
    double b[3][3]={{1, 1, 1},
                 {1, 1, 1},
                 {1, 1, 1}};

    Matrix mat2(a), mat3(b), mat1;
    cout<<mat2.det()<<' '<<mat3.det()<<endl;
    mat1=mat2.inverse();
    mat1.display();

    mat1=mat2+mat3;
    mat1.display();

    mat1=mat2-mat3;
    mat1.display();

    mat1=mat2*mat3;
    mat1.display();
    return 0;
}
