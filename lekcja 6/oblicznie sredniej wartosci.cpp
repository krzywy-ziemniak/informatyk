#include <iostream>
 
using namespace std;
 
int main() {
    const int ROZMIAR = 5;
    int tablica[ROZMIAR];
    int suma = 0;
 
    cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < ROZMIAR; i++) {
        cin >> tablica[i];
        suma += tablica[i];
    }
 
    double srednia = static_cast<double>(suma) / ROZMIAR;
    cout << "Srednia wynosi: " << srednia << endl;
 
    return 0;
}
