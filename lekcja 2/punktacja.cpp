#include <iostream>
 
int main() {
    int punkty;
 
    std::cout << "Podaj wynik egzaminu (liczba punktow): ";
    std::cin >> punkty;
 
    if (punkty < 0 || punkty > 100) {
        std::cout << "Wprowadzono niepoprawna liczbe punktow. Liczba punktow powinna byc w zakresie 0-100." << std::endl;
    } else {
        if (punkty <= 45) {
            std::cout << "Ocena: niedostateczna" << std::endl;
        } else if (punkty <= 69) {
            std::cout << "Ocena: dostateczna" << std::endl;
        } else if (punkty <= 84) {
            std::cout << "Ocena: dobra" << std::endl;
        } else if (punkty <= 99) {
            std::cout << "Ocena: bardzo dobra" << std::endl;
        } else {
            std::cout << "Ocena: celujaca" << std::endl;
        }
    }
 
    return 0;
}
