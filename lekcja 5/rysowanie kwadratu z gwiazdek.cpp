#include <iostream>
using namespace std;
 
int main() {
    int width, height;
    cout << "Podaj szerokosc: ";
    cin >> width;
    cout << "Podaj wysokosc: ";
    cin >> height;
 
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
 
    return 0;
}
