#include <iostream>
using namespace std;

void tablaMultiplicar(int numero) {
    std::cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 0; i <= 10; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << endl;

    }
    std::cout << endl; 

}

int main() {
    int num;
    //Pide al usuario que ingrese un numero entero
    std::cout << "Ingresa un numero entero: ";
    std::cin >> num;

    // Llama a la funcion para mostrar la tabla de multiplicar del 0 al 10 
    tablaMultiplicar(num);


cin.ignore();

cin.get(); // *Nota 

    return 0;

} 