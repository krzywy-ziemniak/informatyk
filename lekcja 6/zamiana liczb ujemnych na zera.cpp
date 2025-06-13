#include <iostream>
 
using namespace std;
 
int main() {
    const int ROZMIAR = 5;
    int tablica[ROZMIAR];
 
    cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < ROZMIAR; i++) {
        cin >> tablica[i];
        if (tablica[i] < 0) {
            tablica[i] = 0;
        }
    }
 
    cout << "Tablica po zamianie liczb ujemnych na zera:\n";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
 
    return 0;
}
