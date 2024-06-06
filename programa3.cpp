#include <iostream>
using namespace std;

int main () {
    double base, altura, area, perimetro;
    // Pide al usuario que ingrese la base y la altura
    cout << "Ingresa la base del rectangulo: ";
    cin >> base;
    cout << "Ingresa la altura del rectangulo: ";
    cin >> altura;

    //Calcula el area
    area = base * altura;
    
    // Calcula el perimetro
    perimetro = 2 * (base + altura);

    //Muestra los resultados
    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimetro << endl;
    

cin.ignore();

cin.get(); // *Nota 
    

}