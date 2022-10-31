#include <iostream>
using namespace std;

int main() {
   int a[10][10], trpo[10][10], row, column, i, j;

   cout << "Enter rows and columns of matrix: ";
   cin >> row >> column;

   cout << "\nEnter elements of matrix: " << endl;

   // Storing matrix elements
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }

   // Printing the a matrix
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << a[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
   }

   // Computing trpo of the matrix
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         trpo[j][i] = a[i][j];
      }

   // Printing the trpo
   cout << "\ntranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << trpo[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}
