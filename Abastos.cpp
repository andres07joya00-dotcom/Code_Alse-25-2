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
// ANDRES FELIPE JOYA RUIZ 
#include <iostream>
#include <string>
using namespace std;

void comida(int cantidad[5],string carrito[5],int pre_comida[5]){
    string pr_comida[5]={"arroz","pollo","huevo","leche","pan"};
    int precio[5]={15,30,25,20,10};

    cout << "PRODUCTOS COMIDA" << endl;
    cout << "====================" << endl;
    cout << "puedes llevar maximo 5 productos" << endl;
    for (int i=0;i<5;i++){
        std::cout << pr_comida[i] << " $" << precio[i] << endl;
    }
    int i=0;
    char opc='s';
    while (opc=='s' && i<5){
        cout << "¿que producto desea llevar?(escriba el nombre): ";
        cin >> carrito[i];
        cout << "¿cuantos desea llevar?(numero): ";
        cin >> cantidad[i];
        for (int j=0;j<5;j++){
            if (carrito[i]==pr_comida[j]){
                pre_comida[i]=precio[j]*cantidad[i];
            }
        }
        i++;
        cout << "¿desea llevar otro producto?(s/n): ";
        cin >> opc;
    }
    
}

void liempieza(int cant_limpieza[5],string carrito[5],int pre_limpieza[5]){
    string pr_limpieza[5]={"jabón","cloro","detergente","limpiador","desinfectante"};
    int precio[5]={10,12,15,20,25};

    cout << "PRODUCTOS LIMPIEZA" << endl;
    cout << "====================" << endl;
    cout << "puedes llevar maximo 5 productos" << endl;
    for (int i=0;i<5;i++){
        std::cout << pr_limpieza[i] << " $" << precio[i] << endl;
    }
    int i=0;
    char opc='s';
    while (opc=='s' && i<5){
        cout << "¿que producto desea llevar?(escriba el nombre): ";
        cin >> carrito[i];
        cout << "¿cuantos desea llevar?(numero): ";
        cin >> cant_limpieza[i];
        for (int j=0;j<5;j++){
            if (carrito[i]==pr_limpieza[j]){
                pre_limpieza[i]=precio[j]*cant_limpieza[i];
            }
        }
        i++;
        cout << "¿desea llevar otro producto?(s/n): ";
        cin >> opc;
    }
}

void factura(int cantidad[5],string carrito[5],int pre_comida[5], int pre_limpieza[5],string carrito_limpieza[5], int cant_limpieza[5]){
    cout << "FACTURA" << endl;
    cout << "====================" << endl;
    float subtotal=0,impuesto,costo_total,descuento;
    for (int i=0;i<5;i++){
        cout << "producto: " << carrito[i] << " cantidad: " << cantidad[i] << " precio: $" << pre_comida[i] << std::endl;
        cout << "producto:"  << carrito_limpieza[i] << " cantidad: " << cant_limpieza[i] << " precio: $" << pre_limpieza[i] << std::endl;
        subtotal+=pre_limpieza[i];
        subtotal+=pre_comida[i];
    }

    cout << "subtotal: $" << subtotal << endl;
    impuesto=subtotal*0.08;
    cout << "impuesto(8%): $" << impuesto << endl;
    costo_total=subtotal+impuesto;
    if (costo_total>100){
        descuento=costo_total*0.1;
        costo_total=costo_total-descuento;
        cout << "descuento(10%): $" << descuento << endl; 
    }  

    cout << "costo total: $" << costo_total << endl;
    cout << "====================" << endl;
    cout << "GRACIAS POR SU COMPRA" << endl;
}

int menu(){
    int opcion;
    cout << "=====MENU=====" << endl;
    cout << "(1). productos de comida" << endl;
    cout << "(2). productos de limpieza" << endl;
    cout << "(3). SALIR" << endl;
    cout << "Elige una opcion(numero): ";
    cin >> opcion;
    return opcion;
}

int main(){
    int cant_comida[5]={0};
    string carrito_comida[5]={""};
    int pre_comida[5]={0};
    int pre_limpieza[5]={0};
    string carrito_limpieza[5]={""};
    int cant_limpieza[5]={0};
    char opc='s';
    int a=0;
    cout << "BIENVENIDO A LA TIENDA ECI PA" << endl;
    cout << "============================" << endl;
    cout << "¿deasea llevar algo? (s/n): ";
    cin >> opc;
    while (opc== 's' && a!=3){
        a=menu();
        switch (a){
            case 1:
                comida(cant_comida,carrito_comida,pre_comida);
                break;
            case 2:
                liempieza(cant_limpieza,carrito_limpieza,pre_limpieza);
                break;
            case 3:
                cout << "GRACIAS" << endl;
                break;
            default:
                cout << "opcion no valida" << endl;
                break;
        }
    }
    factura(cant_comida,carrito_comida,pre_comida, pre_limpieza, carrito_limpieza, cant_limpieza);


}