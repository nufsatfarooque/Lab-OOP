#include <iostream>
#include <iomanip>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(const double a[3][3])
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
    {
        mat[i][j]=a[i][j];
    }
    //ctor
}

Matrix::Matrix()
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
    {
        mat[i][j]=0;
    }
    //dtor
}

Matrix::~Matrix()
{
    //dtor
}

double Matrix::det()
{
    double det=0;
    det=mat[0][0]*((mat[1][1]*mat[2][2])-(mat[2][1]*mat[1][2]))
        -mat[0][1]*((mat[1][0]*mat[2][2])-(mat[2][0]*mat[1][2]))
        +mat[0][2]*((mat[1][0]*mat[2][1])-(mat[2][0]*mat[1][1]));

    return det;
}

Matrix Matrix::inverse()
{
    double deter=det();
    if(deter==0)
    {
        cout<<"Inverse doesn't exist"<<endl;
        return NULL;
    }
    double result[3][3];
    result[0][0]=((mat[1][1]*mat[2][2])-(mat[2][1]*mat[1][2]))/deter;
    result[1][0]=-((mat[1][0]*mat[2][2])-(mat[2][0]*mat[1][2]))/deter;
    result[2][0]=((mat[1][0]*mat[2][1])-(mat[2][0]*mat[1][1]))/deter;
    result[0][1]=-((mat[0][1]*mat[2][2])-(mat[0][2]*mat[2][1]))/deter;
    result[1][1]=((mat[0][0]*mat[2][2])-(mat[2][0]*mat[0][2]))/deter;
    result[2][1]=-((mat[0][0]*mat[2][1])-(mat[2][0]*mat[0][1]))/deter;
    result[0][2]=((mat[0][1]*mat[1][2])-(mat[1][1]*mat[0][2]))/deter;
    result[1][2]=-((mat[0][0]*mat[1][2])-(mat[0][2]*mat[1][0]))/deter;
    result[2][2]=((mat[0][0]*mat[1][1])-(mat[1][0]*mat[0][1]))/deter;

    return Matrix(result);

}

void Matrix::display()
{
    for(int i=0; i<3; i++)
    {
        cout<<" |";
        for(int j=0; j<3; j++)
        {
            cout<<setw(6)<<mat[i][j]<<' ';
        }
        cout<<" |"<<endl;
    }
    cout<<"------------------------------------------"<<endl<<endl;
}
Matrix Matrix::operator+(const Matrix& m) const
{
    double res[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
    {
        res[i][j]=mat[i][j]+m.mat[i][j];
    }
    return Matrix(res);
}

Matrix Matrix::operator-(const Matrix& m) const
{
    double res[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
    {
        res[i][j]=mat[i][j]-m.mat[i][j];
    }
    return Matrix(res);
}

Matrix Matrix::operator*(const Matrix& m) const
{
    double res[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
    {
        res[i][j]=mat[i][j]*m.mat[i][j];
    }
    return Matrix(res);
}

