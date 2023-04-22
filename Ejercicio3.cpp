#include <iostream>
#include <cstring>

using namespace std;
//=============== CONSIGNA ==============================================
//Hacer un programa para que el usuario ingrese un número positivo y que luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario. Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.


int main(){
    //Info prinicipal fuera del ejercicio.

    string dev = "Juan Agustin Riondini", signature = "Laboratorio de computacion", space = " ", exer = "Ejercicio N°", split = "==================================================";
    int exerNum = 3; //Numero de ejercicio, relacionado con el string "excer".
    char rta;

    //Consigna del ejercicio:
    string consigna = "Hacer un programa para que el usuario ingrese un número positivo y que luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario. Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15";


    //Alert!:
    cout << split << endl << split << endl << endl << dev << endl << signature << space << exer << exerNum << endl << endl << split << endl << split << endl << endl;
    cout << consigna << endl << endl;
    cout << split << endl;

    //Inicio:
    int i, numero;

    //Usuario:
    cout << "Ingrese un numero "; cin >> numero;

    //Proceso:
    if (numero <= 0){
        cout << "El numero ingresado es menor o igual a cero, recuerde que debe ser un numero positivo" << endl;
    }
    for (i = numero; i > 0; i --){
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
