#include <iostream>
#include <string>
#include <math.h>

std::string porcentaje_alumnos(int mujeres, int hombres);

std::string ganar_30_porciento(double precio_producto);

std::string intereses_producto(double precio_producto, int cuotas);

std::string donacion_especial(double dinero);

std::string producto_descuento(double precio_original, int cantidad);

std::string convertir_pulgadas(int cantidad_pulgadas);

std::string convertir_m_k_b(int gigabytes);

std::string par_impar(int numero);

std::string suma_digitos(int numero);

std::string numero_reversa(int numero);

std::string repartir_dinero(double monto_repartir);

std::string convertir_f_k_r(double centigrados);

double repartir(int edad, double monto_repartir, int suma_total_edades);

int main() {

    std::string respuesta = "";
    respuesta = porcentaje_alumnos(10,10);

    std::string respuesta2 = "";
    respuesta2 = ganar_30_porciento(10.50);

    std::string respuesta3 = "";
    respuesta3 = intereses_producto(10.50, 2);

    std::string respuesta4 = "";
    respuesta4 = donacion_especial(100);

    std::string respuesta5 = "";
    respuesta5 = producto_descuento(100, 2);

    std::string respuesta6 = "";
    respuesta6 = convertir_pulgadas(100);

    std::string respuesta7 = "";
    respuesta7 = convertir_m_k_b(100);

    std::string respuesta8 = "";
    respuesta8 = par_impar(100);

    std::string respuesta9 = "";
    respuesta9 = suma_digitos(111);

    std::string respuesta10 = "";
    respuesta10 = numero_reversa(678);

    std::string respuesta11 = "";
    respuesta11 = repartir_dinero(1000);

    std::string respuesta12 = "";
    respuesta12 = convertir_f_k_r(10);

    std::cout << respuesta << std::endl;

    std::cout << respuesta2 << std::endl;

    std::cout << respuesta3 << std::endl;

    std::cout << respuesta4 << std::endl;

    std::cout << respuesta5 << std::endl;

    std::cout << respuesta6 << std::endl;

    std::cout << respuesta7 << std::endl;

    std::cout << respuesta8 << std::endl;

    std::cout << respuesta9 << std::endl;

    std::cout << respuesta10 << std::endl;

    std::cout << respuesta11 << std::endl;

    std::cout << respuesta12 << std::endl;

    return 0;
}

/*
 * Diseñe un algoritmo que determine el porcentaje de varones y de mujeres que hay en un salón de clase.
 */
std::string porcentaje_alumnos(int mujeres, int hombres) {
    int total = mujeres + hombres;
    float porcentajeMujeres = ((float)mujeres / total) * 100;
    float porcentajeHombres = ((float)hombres / total) * 100;
    return "1- El porcentaje de mujeres es " + std::to_string(roundf(porcentajeMujeres))
    + " el porcentaje de hombres es " + std::to_string(roundf(porcentajeHombres));
}

/*
 * El dueño de una tienda compra un artículo a un precio determinado. Obtener el precio en
 * que lo debe vender para obtener una ganancia del 30%.
 */
std::string ganar_30_porciento(double precio_producto) {
    double precio_final = (precio_producto * 0.3) + precio_producto;
    return "2- El precio de venta final es: " + std::to_string(precio_final);
}

/*
 * Construir un algoritmo que calcule el monto mensual que adeuda un cliente que compra una
 * computadora al crédito, sabiendo que el monto de compra recibe un incremento del 19% de
 * impuesto, así como, de 5% de interés mensual por cada letra que fracciona.
 */
std::string intereses_producto(double precio_producto, int cuotas) {
    double precio_final = (precio_producto * 0.19) + precio_producto;
    double pago_mensual = (precio_final / cuotas) * 0.05 + (precio_final / cuotas);
    double pago_final_con_cuotas = pago_mensual * cuotas;
    return "3- Precio Final " + std::to_string(precio_final) + " Precio por " + std::to_string(cuotas) + " cuotas " +
            "es: " + std::to_string(pago_mensual) + " pagara un total de: " + std::to_string(pago_final_con_cuotas);
}

/*
 * Un hospital ha recibido una donación especial que será repartida de la siguiente manera: 45% para Medicina General,
 * 30% para Cardiología, 15% para Pediatría y el resto para Traumatología. Diseñe un algoritmo que determine cuanto
 * recibirá cada área.
 */
std::string donacion_especial(double dinero) {
    std::string medicina_general = "Medicina General recibe " + std::to_string(dinero * 0.45);
    std::string cardiologia = " Cardiología recibe " + std::to_string(dinero * 0.3);
    std::string pediatria = " Pediatría recibe " + std::to_string(dinero * 0.15);
    std::string traumatologia = " Traumatología recibe " + std::to_string(dinero * 0.10);
    return "4- " + medicina_general + cardiologia + pediatria + traumatologia;
}

/*
 * En una tienda se ha puesto en oferta la venta de cierto tipo de producto ofreciendo un descuento fijo del 11%
 * del monto de la compra. Diseñe un algoritmo que determine el monto original de la compra, el monto del
 * descuento y el monto a pagar por la compra de cierta cantidad de unidades del producto.
 */
std::string producto_descuento(double precio_original, int cantidad) {
    double descuento = 0.11;
    double precio_original_descuento = precio_original - (precio_original * descuento);
    double total = precio_original_descuento * cantidad;
    std::string respuesta = "5- Monto original " + std::to_string(precio_original) + " Precio con descuento "
                            + std::to_string(precio_original_descuento) + " Total a pagar " + std::to_string(total);
    return respuesta;
}

/*
 * Diseñe un algoritmo para convertir una cantidad dada en pulgadas a pies, yardas y centímetros. Se sabe que:
 * 1 yarda = 3 pies
 * 1 pie = 12 pulgadas
 * 1 pulgada = 2.54 centímetros
 * 1 metro = 100 centímetros
 */
std::string convertir_pulgadas(int cantidad_pulgadas) {
    double pulgadas_pies = 0.0833333;
    double pulgadas_yardas = 0.0277778;
    double pulgadas_centimetros = 0.393701;
    std::string pies = " Pies: " + std::to_string(cantidad_pulgadas * pulgadas_pies);
    std::string yardas = " Yardas: " + std::to_string(cantidad_pulgadas * pulgadas_yardas);
    std::string centimetros = " Centimetros: " + std::to_string(cantidad_pulgadas * pulgadas_centimetros);
    return "6- Pulgadas: " + std::to_string(cantidad_pulgadas) + pies + yardas + centimetros;
}

/*
 * Diseñe un algoritmo que lea la capacidad de un disco duro en gigabytes y lo convierta a megabytes, kilobytes y bytes.
 * 1 kilobytes = 1024 bytes
 * 1 megabytes = 1024 kilobytes
 * 1 gigabytes = 1024 megabytes
 */
std::string convertir_m_k_b(int gigabytes) {
    std::string megabytes = std::to_string(gigabytes * 1024) + " MB";
    std::string kilobytes = std::to_string((gigabytes * 1024) * 1024) + " KB";
    return "7- Resultado: " + std::to_string(gigabytes) + " GB a " + megabytes + " " + kilobytes;
}

/*
 * Diseño un algoritmo para determinar si un numero ingresado es par o impar.
 */
std::string par_impar(int numero) {
    if(numero % 2 == 0) {
        return "8- " + std::to_string(numero) + " Es Par";
    } else {
        return "8- " + std::to_string(numero) + " Es Impar";
    }
}

/*
 * Dado un número natural de 3 cifras diseñe un algoritmo que permita obtener la suma de sus dígitos. Así,
 * si se lee el número 358, el algoritmo deberá mostrar 18 (3+5+8 = 16).
 */
std::string suma_digitos(int numero) {
    std::string digitos = std::to_string(numero);
    int sumatoria = 0;
    for(char& c : digitos) {
        sumatoria += c - '0'; //trick
    }
    return "9- Sumatoria: " + std::to_string(sumatoria);
}

/*
 * Dado un número natural de 3 cifras diseñe un algoritmo que permita obtener el revés del número. Así,
 * si se lee el número 358, el algoritmo deberá mostrar el número 853.
 */
std::string numero_reversa(int numero) {
    int numero_reversa = 0, recordatorio;
    while(numero != 0) {
        recordatorio = numero % 10;
        numero_reversa = numero_reversa * 10 + recordatorio;
        numero /= 10;
    }
    return "10- Reversa: " + std::to_string(numero_reversa);
}

/*
 * Diseñe un algoritmo para repartir una cantidad de dinero a tres personas en forma proporcional a sus edades.
 * El monto que le corresponde a cada persona se calcula con la siguiente formula:
 * Monto de la persona = (edad de la persona * monto a repartir) / Suma total de edades
 */
std::string repartir_dinero(double monto_repartir) {
    int hermano1_edad = 15;
    int hermano2_edad = 18;
    int hermano3_edad = 20;
    int total_edades = hermano1_edad + hermano2_edad + hermano2_edad;
    double total_hermano1 = repartir(hermano1_edad, monto_repartir, total_edades);
    double total_hermano2 = repartir(hermano2_edad, monto_repartir, total_edades);
    double total_hermano3 = repartir(hermano3_edad, monto_repartir, total_edades);
    return "11- Hermano 1: " + std::to_string(total_hermano1) + " Hermano 2: " + std::to_string(total_hermano2)
            + " Hermano 3: " + std::to_string(total_hermano3);
}

double repartir(int edad, double monto_repartir, int suma_total_edades) {
    return (edad * monto_repartir) / suma_total_edades;
}

/*
 * Construir un algoritmo que lea una temperatura en grados Centígrados y calcule su equivalente
 * en grados Fahrenheit, Kelvin y Rankine.
 */
std::string convertir_f_k_r(double centigrados) {
    std::string fahrenheit = " Fahrenheit: " + std::to_string((centigrados * 9/5) + 32);
    std::string kelvin = " Kelvin: " + std::to_string(centigrados + 273);
    std::string rankine =  " Rankine: " + std::to_string(((centigrados * 9) / 5) + 491.67);
    return "12-" + fahrenheit + kelvin + rankine;
}
