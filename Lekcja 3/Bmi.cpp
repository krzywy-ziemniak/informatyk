
#include <iostream>
using namespace std;
 
int main() {
    float waga, wzrost, bmi;
 
    cout << "Podaj wage (w kg): ";
    cin >> waga;
    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;
    bmi = waga / (wzrost * wzrost);
 
    cout << "Twoje BMI wynosi: " << bmi << endl;
 
    if (bmi < 18.5) {
        cout << "Twoj stan wagowy: Niedowaga" << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "Twoj stan wagowy: W normie" << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "Twoj stan wagowy: Nadwaga" << endl;
    } else {
        cout << "Twoj stan wagowy: Otylosc" << endl;
    }
 
    return 0;
}
 