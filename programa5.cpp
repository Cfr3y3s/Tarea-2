#include <iostream>

#include <cstdlib>

using namespace std;

int lado;

int area;


int main () {

    std::cout << "Ingrese la medida de un lado del cuadrado" << endl;

    std::cin >> lado;

    area = lado*lado; // Hacemos esta la operacion

    std::cout << "El area de su cuadro es: " << area << endl;

    std::cin.ignore();
    std::cin.get(); // *Nota

    return 0;
    

}