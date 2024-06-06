#include <iostream>

int main () {

    int totalSeconds; // Variable para almacenar los segundos totales
    int hours; // Variable para almacenar las horas
    int minutes; // Variable para almacenar los minutos
    int seconds; // Variable para almacenar los segundos 

    // Entrada de segundos
    std::cout << "Introduce el numero de segundo: ";
    std::cin >> totalSeconds;

    // Coversion de segundos a horas, minutos y segundos
    hours = totalSeconds / 3600; // 3600 segundos en una hora
    minutes = (totalSeconds % 3600) / 60; // 60 segundos en un minuto
    seconds = totalSeconds % 60 ; // Resto de segundos

    // Mostrar los resultados
    std::cout << "Tiempo en horas, minutos y segundo: " << hours << "horas, " << minutes << "minutos, " << seconds << "segundos." << std:: endl;

    std::cin.ignore();
        std::cin.get(); //*Nota

    return 0;

}