#include <iostream>
#include "utilitarios.h"
#include "candidatos.h"
#include "mesas.h"
#include "votacion.h"
#include "escutrinio.h"
#include "estadisticas.h"

int menu();

int main()
{
    while(true) //bucle infinito
    {
        int op = menu();
        switch(op){
        case 1:
            cout<<"// llamar funcion para registrar candidatos"<<endl;
            break;
        case 2:
            cout<<"// llamar funcion para registrar mesa de votacion"<<endl;
            break;
        case 3:
            cout<<"// llamar funcion que inicia el simulador de cola de votacion"<<endl;
             break;
        case 4:
            cout<<"// llamar funcion que cuenta los votos y reportar ganador"<<endl;
             break;
        case 5:
            cout<<"// llamar funcion que muestra estadisticas adicionales"<<endl;
            break;
        case 6:
            /* termina el programa */
            exit(0);
            break;
        }
        system("pause");
    }
    return 0;
}

int menu(){
    int op;
    system("COLOR 4F");//dar color a la ventana y texto
    do{
        system("cls"); // limpiar pantalla
        printXY(20, 2, "%s", "*********************************************");
        printXY(20, 3, "%s", "*           ELECCIONES MUNICIPALES          *");
        printXY(20, 4, "%s", "*********************************************");
        printXY(20, 5, "%s", "*  1) Registrar candidatos                  *");
        printXY(20, 6, "%s", "*  2) Registrar mesas de sufragio           *");
        printXY(20, 7, "%s", "*  3) Simular votacion                      *");
        printXY(20, 8, "%s", "*  4) Escrutinio de votos                   *");
        printXY(20, 9, "%s", "*  5) Estadisticas                          *");
        printXY(20, 9, "%s", "*  6) Salir                                 *");
        printXY(20,10, "%s", "*                                           *");
        printXY(20,11, "%s", "*  Ingrese opcion ( )                       *");
        printXY(20,12, "%s", "*********************************************");

        cursorXY(39, 11);
        cin>>op;
    }while(op>6 || op<1);
    printXY(20,13,"%s","       --------------------------           \n");
    return op;
}
