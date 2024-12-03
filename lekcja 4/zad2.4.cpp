#include <iostream>
using namespace std;
 
int main() {
    int N;
    cout << "Podaj liczbę N: ";
    cin >> N;
 
    int suma = 0;
    int i = 1;
    
    while (i <= N) {
        suma += i;
        i++;
    }
 
    cout << "Suma liczb naturalnych do " << N << ": " << suma << endl;
    return 0;
}