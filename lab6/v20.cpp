#include <algorithm>
#include <ctime>
#include <iostream>
using namespace std;

int nMax(int* a, int s, int n) {
  int cmax, lim;
  for (int t = 0; t < n; ++t) {
    cmax = 0;
    for (int i = 0; i < s; ++i) {
      if (a[i] > cmax && a[i] < lim) {
        cmax = a[i];
      }
    }
    lim = cmax;
  }
  return lim;
}

int main() {
  srand(time(0));

  unsigned short int S;
  cout << "Size: ";
  cin >> S;

  int* A = new int[S];
  int maxs[3] = {0, 0, 0};
  cout << "Array: ";
  for (int i = 0; i < S; ++i) {
    A[i] = rand() % 101;
    cout << A[i] << ' ';
  }
  cout << '\n';

  int x = nMax(A, S, 3);
  cout << "x = " << x << '\n';

  cout << "Result: ";
  for (int i = 0; i < S; ++i) {
    if (A[i] > x) {
      A[i] = x;
    }
    cout << A[i] << ' ';
  }
  cout << '\n';

  delete[] A;
  return 0;
}