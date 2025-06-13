#include <iostream>
using namespace std;

int main() {
    char tekst[21];
    
    cout << "Podaj ci¹g znaków (max 20 znaków): ";
    cin.getline(tekst, 21);
    
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == 'a') {
            tekst[i] = 'o';
        }
    }
    
    cout << "Zmodyfikowany ci¹g znaków: " << tekst << endl;
    
    return 0;
}
