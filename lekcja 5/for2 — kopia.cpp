#include <iostream>
using namespace std;
 
int main() {
    int N;
    cout << "Podaj liczbę N: ";
    cin >> N;
 
    cout << "Liczby nieparzyste od 1 do " << N << ": ";
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
 
    return 0;
}