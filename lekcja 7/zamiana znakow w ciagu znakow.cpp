#include <iostream>
using namespace std;

int main() {
    char tekst[21];
    
    cout << "Podaj ci�g znak�w (max 20 znak�w): ";
    cin.getline(tekst, 21);
    
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == 'a') {
            tekst[i] = 'o';
        }
    }
    
    cout << "Zmodyfikowany ci�g znak�w: " << tekst << endl;
    
    return 0;
}
