#include <iostream>
using namespace std;
 
int main() {
    int N, licznikParzystych = 0, i = 1;
 
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;
 
    do {
        if (i % 2 == 0) {
            licznikParzystych++;
        }
        i++;
    } while (i <= N);
 
    cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << licznikParzystych << endl;
 
    return 0;
}