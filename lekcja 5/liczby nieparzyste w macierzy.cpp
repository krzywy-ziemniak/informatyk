#include <iostream>
using namespace std;
 
int main() {
    int rows, cols;
    cout << "Podaj liczbe wierszy: ";
    cin >> rows;
    cout << "Podaj liczbe kolumn: ";
    cin >> cols;
 
    int matrix[rows][cols];
    int odd_number = 1;
 
   for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = odd_number;
            odd_number += 2;
        }
    }
 
    cout << "Macierz wypelniona liczbami nieparzystymi:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
 
    return 0;
}
