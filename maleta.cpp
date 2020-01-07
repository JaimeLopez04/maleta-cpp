#include "maleta.h"
#include <iostream>

using namespace std;

void menu(maletin &m) {

    
    bool salir = false;
    do {

        int opcion = 0;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
        cout << "\n\tBienvenido a nuestra maleta \n\n";
        cout << "1. Verificar el estado actual de la maleta \n";
        cout << "2. Abrir la mateta \n";
        cout << "3. Cerrar la matela \n";
        cout << "4. Sacar elementos de la maleta \n";
        cout << "5. Guardar elementos en la maleta \n";
        cout << "6. Salir de la maleta \n\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";

        cout << "Digite una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: { // Consultar
                m.consutar();
                break;
            }

            case 2: { // Abrir
                m.abrir();
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
                cout << "\n\tLa maleta se ha abierto exitosamente \n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
                break;
            }

            case 3: { // Cerrar
                m.cerrar();
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
                cout << "\n\tLa maleta se ha cerrado exitosamente \n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
                break;
            }

            case 4: { // Sacar
                short temp = 0;
                cout << "Digite la cantidad de elementos a sacar: ";
                cin >> temp;
                short n = m.sacar(temp);
                cout << "Le quedan " << n << " elementos \n";
                break;
            }

            case 5: { // Guardar
                short elementos;
                cout << "Digite la cantidad de elementos a guardar: ";
                cin >> elementos;
                m.guardar(elementos);
                break;
            }

            case 6: { // Salir
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
                cout << "\n\tGracias por usar esta maleta \n\n";
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
                salir = true;
                break;
            }

            default: { // Opcion Incorrecta
                cout << "\nOpcion Incorrecta \n\n";
                break;
            }
        }

    }while(!salir);
}

int main() {

    short cap = 0;
    cout << "Por favor digite el tamaño que desea que tenga la maleta: ";
    cin >> cap;
    maletin  m(cap);

    menu(m);

    return 0;
}