#include <iostream>

using namespace std;

int main() {

    double centimetros, pulgadas;

    std::cout << "Ingresa la mediada en centimetros: ";
    std:: cin >> centimetros;

    pulgadas = centimetros / 2.54;

    std::cout << centimetros << "Centimetros son: " << pulgadas << "pulgadas." << endl;
    
    std::cin.ignore();

    std::cin.get(); //*Nota

    return 0;

}