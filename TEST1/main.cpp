#include <iostream>
#include <string>
#include <math.h>

std::string porcentaje_alumnos(int i, int i1);

std::string convertir_cantidades(int i);

int main() {
    std::string respuesta = "";
    respuesta = porcentaje_alumnos(10,10);
    std::string respuesta2 = "";
    respuesta2 = convertir_cantidades(10);
    //std::cout << "Hello, World!" << std::endl;
    std::cout << respuesta << std::endl;
    std::cout << respuesta2 << std::endl;
    return 0;
}

/*
 * Diseñe un algoritmo que determine el porcentaje de varones y de mujeres que hay en un salón de clase.
 */
std::string porcentaje_alumnos(int mujeres, int hombres) {
    int total = mujeres + hombres;
    float porcentajeMujeres = ((float)mujeres / total) * 100;
    float porcentajeHombres = ((float)hombres / total) * 100;
    return "el porcentaje de mujeres es " + std::to_string(roundf(porcentajeMujeres))
    + " el porcentaje de hombres es " + std::to_string(roundf(porcentajeHombres));
}

/*
 * Diseñe un algoritmo para convertir una cantidad dada en pulgadas a pies, yardas y centímetros. Se sabe que:
 * 1 yarda = 3 pies
 * 1 pie = 12 pulgadas
 * 1 pulgada = 2.54 centímetros
 * 1 metro = 100 centímetros
 */
std::string convertir_cantidades(int cantidad) {
    int yarda = 3; //pies
    int pie = 12; //pulgadas
    double pulgada = 2.54; //centimetros
    int metro = 100; //centimetros
    return "Según la cantidad ingresada: " + std::to_string(cantidad) +
           " es: Yardas = " + std::to_string(cantidad * yarda) + "pies Pies = " + std::to_string(cantidad * pie) +
           "pulgadas Pulgadas = " + std::to_string(cantidad * pulgada) + "cm Metros = " +
           std::to_string(cantidad * metro) + "cm";
}