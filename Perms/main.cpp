//
//  main.cpp
//  Perms
//
//  Created by Pau Escalante - A01191962
//             Luis Lamadrid - A01191158
//  Copyright (c) 2014 Paulina Escalante. All rights reserved.
//

#include <iostream>
using namespace std;

#define ROWS 19
#define COLUMNS 201

// global matrix declaration
long long int mat[ROWS][COLUMNS];

/*
 * (long long int) sumMatrix
 *
 * Method to to return the sum of the previous row
 * and column of the globally declared matrix
 *
 */
long long int sumMatrix(int a, int b){
    long long int sum = 0, aux = a;
    for (int col = b; col >= 0 && a >= 1; col--) {
        sum += mat[aux-1][col];
        a--;
    }
    return sum;
}

/*
 * (void) writeMatrix
 *
 * Method to write the matrix with its inversion values.
 * The row represents the "n" in the (1..n) array and the 
 * column represents the number of exact k inversions.
 *
 */
void writeMatrix(){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            mat[i][j] = 0;
        }
    }
    mat[1][0] = 1;
    mat[2][0] = 1;
    mat[2][1] = 1;
    for (int i = 3; i < ROWS; i++) {
        for (int j = 0; j <= COLUMNS; j++) {
            mat[i][j] = sumMatrix(i,j);
            if (mat[i][j] == 0) break;
        }
    }
}

/* -----------------------------  MAIN FUNCTION ----------------------------- */

int main() {
    // variable declaration
    int n, inversions;
    
    // fills matrix
    writeMatrix();
    
    // user input
    cin >> n >> inversions;
    
    // case loop
    while (n || inversions) {
        
        // accessing the number of inversions from 1 to n
        cout << mat[n][inversions] << endl;
        
        cin >> n >> inversions;
    } // end case loop
    
    return 0;
}
