//
//  main.cpp
//  1menu
//
//  Created by Angel Tucubal on 14/06/22.
//

#include <iostream>
using namespace std;
int main(){
    int numero,op;
    cout<<"Ingrese Opcion"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"1. Cubo de numero"<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"Salir"<<endl;
    cout<<"Opcion: ";
    cin>>op;
    
    switch (op) {
        case 1:
            cout<<"ingrese numero:"; cin>>numero;
            
            numero = (numero*3);
            cout<<"el cubo del numero es:"<<numero<<endl;
            break;
        case 2:
            cout<<"ingrese numero:"; cin>>numero;
            
            if (numero %2==0){
                cout<<"el numero es par"<<endl;
            }else{
                cout<<"el numero es impar"<<endl;
            }
            break;
            
        case 3: break;
            
    }
    return 0;
}


