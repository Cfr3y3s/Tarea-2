#include <iostream>

using namespace std;

bool esPrimo(int num) {

    if (num <= 1) {
        return false;

    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;

        }
    }
    return true;

}


int main () {
    int num;
    std:: cout << "Ingresa un numero: ";
    std::cin >> num;

    if (esPrimo(num)) {
        std::cout << num << " es un numero primo." << endl;
        }else {
            cout << num << " no es un numero primo." << endl;
        
        }

        std::cin.ignore();
        std::cin.get(); //*Nota

        return 0;

}