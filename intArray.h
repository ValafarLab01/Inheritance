/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   intArray.h
 * Author: homayoun
 *
 * Created on September 16, 2016, 2:31 PM
 */

#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>
#include <cstdlib>
using namespace std;

class intArray {
    friend ostream & operator<<(ostream &, const intArray &);

public:
    intArray();
    intArray(int _size);
    intArray(int _size, int content);
    intArray(const intArray &);
    ~intArray();

    void Print() const;
    void operator+(int);
    bool operator==(const intArray &) const;
    int operator[](int) const;
    void setData(int index, int value);
    void PrintSize() const;
    int getSize();
    void setSize(int);
    void allocData(int);

private:
        int size;
        int *data;

protected:
    //    void setSize(int);
    //    void allocData(int);
};

#endif /* INTARRAY_H */

