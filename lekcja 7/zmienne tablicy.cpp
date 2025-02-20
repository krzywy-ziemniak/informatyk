#include <iostream>
using namespace std;
 
int main() {
    const int rozmiar = 5; 
    int liczby[rozmiar];   
    int suma = 0;          
 
    for (int i = 0; i < rozmiar; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
        suma += liczby[i]; 
    }
 
    double srednia = static_cast<double>(suma) / rozmiar;
 
    cout << "Srednia liczb: " << srednia << endl;
 
    return 0;
}