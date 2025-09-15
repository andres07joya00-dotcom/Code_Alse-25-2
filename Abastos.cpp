//Ejercicio 1.1: Calculadora del Costo Total en una Tienda de Abastos
/*
Objetivo: Usar operadores aritméticos básicos y precisión en punto flotante.
Descripción: Te han contratado para desarrollar una calculadora de costos sencilla 
para una tienda de abastos. Escribe un programa que calcule el costo total de una 
lista de compras. El programa debe tomar los precios y las cantidades de los productos 
como entrada, luego calcular el subtotal, el impuesto (8%) y el costo total 
(redondeado a dos decimales).Si el costo total es mayor a $100, aplica un descuento del 10%.
 Muestra el costo total, incluyendo el descuento si es aplicable.
*/
#include <iostream>

void comida(){

}

void liempieza(){
}

int menu(){
    int opcion;
    std::cout << "=====MENU=====" << std::endl;
    std::cout << "(1). productos de comida" << std::endl;
    std::cout << "(2). productos de limpieza" << std::endl;
    std::cout << "(3). SALIR" << std::endl;
    std::cout << "Elige una opcion(numero): ";
    std::cin >> opcion;
    return opcion;
}

int main(){

    char opc='s';
    int a;
    std::cout << "BIENVENIDO A LA TIENDA ECI PA" << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "¿deasea llevar algo? (s/n): ";
    std::cin >> opc;
    while (opc== 's' && a!=3){
        a=menu();
        switch (a){
            case 1:
                comida();
                break;
            case 2:
                liempieza();
                break;
            case 3:
                std::cout << "GRACIAS" << std::endl;
                break;
            default:
                std::cout << "opcion no valida" << std::endl;
                break;
        }

    }


}