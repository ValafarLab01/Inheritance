/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on November 1, 2017, 11:21 AM
 */

#include <cstdlib>
#include "./intArray.h"
#include "./nnArray.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//    intArray A1;
//    intArray A2(5);
//    intArray A3(5, -5);
//    intArray A4(A3);
//
//    cout << A1 << endl;
//    cout << A2 << endl;
//    cout << A3 << endl;
//    cout << A4 << endl;
//    
//    nnArray nnA1;
//    cout << "nnA1 =" << nnA1 << endl;
    
    nnArray nnA2(5, -5);
    cout << nnA2 << endl;

    return 0;
}

