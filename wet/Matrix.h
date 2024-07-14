//
// Created by Farah Qub on 06/07/2024.
//

#ifndef HW2_MATRIX_H
#define HW2_MATRIX_H

#include <ostream>

class Matrix {
private:
    int *data;
    int rows;
    int cols;

    int at(const int &i, const int &j) const;

    void copyDataFrom(const Matrix &other);

    void ensureMatchSize(const Matrix& other) const;

    void validateIndices(const int&i, const int&j)const;

public:
    Matrix(int row, int col);

    Matrix();

    Matrix(const Matrix &);

    Matrix &operator=(const Matrix &other);     // copy assignment operator

    ~Matrix();

    int &operator()(const int &i, const int &j);

    const int &operator()(const int &i, const int &j) const;


    Matrix &operator*=(const Matrix &other);

    Matrix &operator+=(const Matrix &other);

    Matrix &operator-=(const Matrix &other);

    Matrix &operator*=(int right);


    // requires friend to distinguish between minus and unitary additive inverse.
    friend Matrix operator-(const Matrix &mat);


    friend bool operator==(const Matrix &left, const Matrix &right);


    Matrix rotateClockwise() const;

    Matrix rotateCounterClockwise() const;

    Matrix transpose() const;

    friend std::ostream &operator<<(std::ostream &os, const Matrix &mat) ;
};

//Matrix operator*(Matrix left, const Matrix &right);
//
bool operator!=(const Matrix &left, const Matrix &right);
//
//Matrix operator+(Matrix left, const Matrix &right);
//
//Matrix operator-(Matrix left, const Matrix &right);
//
//Matrix operator*(int left, Matrix right);
//
//Matrix operator*(Matrix left, int right);


Matrix operator*(const Matrix& left, const Matrix &right);

Matrix operator+(const Matrix& left, const Matrix &right);

Matrix operator-(const Matrix& left, const Matrix &right);

Matrix operator*(int left, const Matrix& right);

Matrix operator*(const Matrix& left, int right);

#endif //HW2_MATRIX_H
