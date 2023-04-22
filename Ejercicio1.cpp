#include <iostream>
#include <cstring>

using namespace std;
//=============== CONSIGNA ==============================================
//Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3 elementos. Es decir: 1, 4, 7, 10, 13, 16, 19 Importante: El programa no tiene ningún ingreso de datos

int main(){
    //Info prinicipal fuera del ejercicio.

    string dev = "Juan Agustin Riondini", signature = "Laboratorio de computacion", space = " ", exer = "Ejercicio N°", split = "==================================================";
    int exerNum = 1; //Numero de ejercicio, relacionado con el string "excer".
    char rta;

    //Consigna del ejercicio:
    string consigna = "Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3 elementos. Es decir: 1, 4, 7, 10, 13, 16, 19. Importante: El programa no tiene ningún ingreso de datos";

    //Alert!:
    cout << split << endl << split << endl << endl << dev << endl << signature << space << exer << exerNum << endl << endl << split << endl << split << endl << endl;
    cout << consigna << endl << endl;
    cout << split << endl;

    //Inicio:
    int i;


    //Proceso:
    for (i = 1; i <= 20; i += 3){
        //Resultado en pantalla:
        cout << i << " " << endl;
    }



    //Reinicio de programa:
    cout << split << endl << endl << "Reiniciar? Y para SI o N para NO..."; cin >> rta;

    switch (rta){
    case 'Y':
    case 'y':
        return main();
        break;
    case 'N':
    case 'n':
        return 0;
        break;
    }


    return 0;
}
