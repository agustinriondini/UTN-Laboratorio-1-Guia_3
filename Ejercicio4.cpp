#include <iostream>
#include <cstring>

using namespace std;
//=============== CONSIGNA ==============================================
//Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.



int main(){
    //Info prinicipal fuera del ejercicio.

    string dev = "Juan Agustin Riondini", signature = "Laboratorio de computacion", space = " ", exer = "Ejercicio N°", split = "==================================================";
    int exerNum = 4; //Numero de ejercicio, relacionado con el string "excer".
    char rta;

    //Consigna del ejercicio:
    string consigna = "Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.";


    //Alert!:
    cout << split << endl << split << endl << endl << dev << endl << signature << space << exer << exerNum << endl << endl << split << endl << split << endl << endl;
    cout << consigna << endl << endl;
    cout << split << endl;

    //Inicio:
    int i, numero1, numero2, maxnum, minnum;

    //Usuario:
    cout << "Ingrese un numero "; cin >> numero1;
    cout << "Ingrese otro numero"; cin >> numero2;

    //Proceso:
    if (numero1 > numero2){
        maxnum = numero1;
        minnum = numero2;
    }else{
        maxnum = numero2;
        minnum = numero1;
    }

    for (i = minnum; i <= maxnum ; i ++){
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
