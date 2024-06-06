#include <iostream>

int main () {

    int hoursWorked; // Variable para almacenar las horas trabajas 
    double hourlyWage; // Variable para almacenar el valor por hora 
    double salary; // Variable para almacenar el salario

    // Entrada de datos
    std::cout << "Introduce el numero de horas trabajas: ";
    std::cin >> hoursWorked;
    std::cout << "Introduce el valor por hora: ";
    std::cin >> hourlyWage;

    // Calculo del salario
    salary = hoursWorked * hourlyWage;

    // Mostrar los resultados
    std::cout << "El salario es: $" << salary << std::endl;

    std::cin.ignore();
    std::cin.get(); // *Nota

    return 0;
}