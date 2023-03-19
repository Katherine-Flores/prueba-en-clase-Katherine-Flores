//
// Created by kathe on 18/03/2023.
//
#include <iostream>
using namespace std;
int cuenta1 = 0, cuenta2 = 1, cuentaResultado, num, resultado, factorial = 1, contador = 0;

void ejercicio1(){
    cout << "Ingrese un numero entero" << endl;
    cin >> num;
    for (int i = 1; i <= num; ++i) {
        factorial = factorial * i;
        if (i < num){
            cout << i <<" * " ;
        } else{
            cout << i << " = " << factorial;
        }
    }
    cout << "\nEl valor de " << num << "! = " << factorial;
}

void ejercicio2(){
    if (cuentaResultado <= 10){
    for (int i = 1; i <= 5; ++i) {
        cuentaResultado = cuenta1 + cuenta2;
        cout << cuentaResultado << ", ";
        cuenta1 = cuenta2;
        cuenta2 = cuentaResultado;
    }
    }
}

void ejercicio3(){
    cout << "Ingrese un numero entero" << endl;
    cin >> num;

    for (int i = 1; i <= num ; ++i) {
        if (num % i == 0){
            contador = contador + 1;
        }
    }
    if (contador == 2 || num == 1){
        cout << "El numero es primo" << endl;
    }else{
        cout << "El numero no es primo" << endl;
    }
}

void ejercicio4(){
    cout << "Ingrese un numero entero" << endl;
    cin >> num;

    if(num % 2 == 0){
        cout << "El numero es par" << endl;
    }else{
        cout << "El numero es impar" << endl;
    }
}

void ejercicio5(){
    cout << "Ingrese el numero de la tabla de multiplicar que desee obtener" << endl;
    cin >> num;
    for (int i = 0; i <= 10; ++i) {
        resultado = num * i;
        cout << num << " * " << i << " = " << resultado << endl;
    }
}