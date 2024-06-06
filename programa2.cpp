#include <iostream>

using namespace std;

int main () {
    // Pide al usuario que ingrese tres numeros
    double num1, num2, num3;

    std::cout << "Ingresa el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingresa el segundo numero: ";
    std::cin >> num2;

    std::cout << "Ingresa el tercer numero: ";
    std::cin >> num3;

    //Calcula la suma y multiplicacion 
    double suma = num1 + num2 + num3;
    double multiplicacion = num1 * num2 * num3;

    //Muestra los resultados
    std::cout << "La suma de los numeros es: " << suma << endl;
    std::cout << "La multiplicacion de los numeros es: " << multiplicacion << endl;


cin.ignore();

cin.get(); // *Nota

    return 0;

}