#include <iostream>

#include <cmath>

using namespace std;

int main () {
    //Declaracion de variables
    double num1, num2;

    // Entrada de los numeros
    
    std::cout <<"Introduce el primer numero: ";
    std::cin >> num1;
    std::cout <<"Introduce el segundo numero: ";
    std::cin >> num2;

    // Operaciones
    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicacion = num1 * num2;
    double division = num1 / num2;
    double resto = fmod(num1, num2);

    // Impresion de los resultados

      std::cout << "La suma es: " << suma << endl;
      std::cout << "La resta es: " << resta << endl;
      std::cout << "La multiplicacion es: " << multiplicacion << endl;
      std::cout << "La division es: " << division << endl;
      std::cout << "El resto modulo de la division es: " << resto << std::endl;


    std::cin.ignore();

    std::cin.get(); // *Nota

    return 0;
   
}