#include <iostream>
#include <cstring>

using namespace std;
//=============== CONSIGNA ==============================================
//Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos


int main(){
    //Info prinicipal fuera del ejercicio.

    string dev = "Juan Agustin Riondini", signature = "Laboratorio de computacion", space = " ", exer = "Ejercicio N°", split = "==================================================";
    int exerNum = 5; //Numero de ejercicio, relacionado con el string "excer".
    char rta;

    //Consigna del ejercicio:
    string consigna = "Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos";


    //Alert!:
    cout << split << endl << split << endl << endl << dev << endl << signature << space << exer << exerNum << endl << endl << split << endl << split << endl << endl;
    cout << consigna << endl << endl;
    cout << split << endl;

    //Inicio:
    int n, i, contador = 0, numero;


    //Usuario:
    cout << "Crearemos una lista, primero brindar la cantidad de numeros que la componen, luego debera ingresarlos: "; cin >> n;



    for (i = 0; i < n; i++){
        cout << "Ingrese esos numeros:"; cin >> numero;
        if (numero > 0){
            contador++;
        }
    }
    cout << "La cantidad de positivos es: " << contador << endl;


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
