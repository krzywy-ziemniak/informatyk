#include <iostream>
#include <iomanip>
 
int main() {
    double waga, wzrost, bmi;
 
    std::cout << "Podaj wage (kg): ";
    std::cin >> waga;
    
    std::cout << "Podaj wzrost (w metrach): ";
    std::cin >> wzrost;
 
    if (waga <= 0 || wzrost <= 0) {
        std::cout << "Wprowadzono niepoprawne dane. Waga i wzrost musza byc wieksze od zera." << std::endl;
    } else {
        bmi = waga / (wzrost * wzrost);
        
        std::cout << "Twoje BMI wynosi: " << std::fixed << std::setprecision(4) << bmi << std::endl;
 
        if (bmi < 18.5) {
            std::cout << "Twoj stan wagowy: Niedowaga" << std::endl;
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            std::cout << "Twoj stan wagowy: W normie" << std::endl;
        } else if (bmi >= 25 && bmi <= 29.9) {
            std::cout << "Twoj stan wagowy: Nadwaga" << std::endl;
        } else {
            std::cout << "Twoj stan wagowy: Otylosc" << std::endl;
        }
    }
 
    return 0;
}
