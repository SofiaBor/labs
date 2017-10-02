// lab5.cpp : Defines the entry point for the console application.
//

// VS: #include "stdafx.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

const int S = 9;

void printSquareMatrix(int M[S][S]) {
  for (int i = 0; i < S; ++i) {
    for (int j = 0; j < S; ++j) {
      cout << M[i][j] << "\t\t";
    }
    cout << '\n';
  }
  cout << '\n';
}

void putSumExclS(int M[S][S], const int si, const int sj) {
  int rowSum = 0, colSum = 0;
  for (int i = 0; i < S; ++i) {
    if (i == si) {
      continue;
    } else {
      rowSum += M[i][sj];
    }
  }
  for (int j = 0; j < S; ++j) {
    if (j == sj) {
      continue;
    } else {
      colSum += M[si][j];
    }
  }
  M[si][sj] = rowSum + colSum;
}

int main() {
  srand(time(0));
  int A[S][S];

  for (int i = 0; i < S; ++i) {
    for (int j = 0; j < S; ++j) {
      A[i][j] = rand() % 257 - 128;
    }
  }

  cout << "START\n";
  printSquareMatrix(A);

  for (int i = 0, j = S - 1; i < S && j >= 0; ++i, --j) {
    putSumExclS(A, i, j);
  }

  cout << "END\n";
  printSquareMatrix(A);
  return 0;
}
