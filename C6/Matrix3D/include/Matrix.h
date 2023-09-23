#ifndef MATRIX_H
#define MATRIX_H


class Matrix
{
    public:
        Matrix();
        Matrix(const double a[3][3]);
        ~Matrix();

        double det();
        Matrix inverse();
        void display();
        Matrix operator + (const Matrix& m) const;
        Matrix operator - (const Matrix& m) const;
        Matrix operator * (const Matrix& m) const;

    protected:

    private:
        double mat[3][3];
};

#endif // MATRIX_H
