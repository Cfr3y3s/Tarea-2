#include <iostream>

int sumaDigitos (int numero) {
    int suma = 0;

    while (numero != 0) {
        suma += numero % 10; // Agrega el ultimo digito a la suma
        numero /= 10; // Elimina el ultimo digito del numero

    }

    
    return suma;

}

int main() {
    int numero;
    std::cout << "Introduce un numero: ";
    std::cin >> numero;

    int resultado = sumaDigitos(numero);

    std::cout << "La suma de los digitos de " << numero << " es: " << resultado << std::endl;

    std::cin.ignore();
    std::cin.get(); //*Nota

    return 0;

}