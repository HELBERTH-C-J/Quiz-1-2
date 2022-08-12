// Quiz_1_y_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Elaborado por Helberth Fabricio Cubillo Jarquin - 2021110838 / Segundo semestre 2022

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

#define VAGONES 8
#define ASIENTOS 20

using namespace std;


// Funcion que se encarga de mostrar los primeros y ultimos asientos disponibles.
void asientos_disponibles(int array_tren[VAGONES][ASIENTOS]) {

    int contador_disponibles = 0;

    cout << "\nPrimeros disponibles\n";

    for (int vagon = 0; vagon < VAGONES; vagon++) {
        for (int asiento = 0; asiento < ASIENTOS; asiento++)
        {
            if (array_tren[vagon][asiento] == 0) {
                cout << "Estado: " << array_tren[vagon][asiento] << "\t" << "Asiento: " << asiento + 1 << " y vagon: " << vagon + 1 << "\n ";
                contador_disponibles += 1;
                if (contador_disponibles == 10)
                    break;

            }

        }
        if (contador_disponibles == 10)
            break;
    }

    contador_disponibles = 0;

    cout << "\nUltimos disponibles\n";

    for (int vagon = VAGONES-1; vagon >= 0; vagon--) {
        for (int asiento = ASIENTOS-1; asiento >= 0; asiento--)
        {
            if (array_tren[vagon][asiento] == 0) {
                cout << "Estado: " << array_tren[vagon][asiento] << "\t" << "Asiento: " << asiento + 1 << " y vagon: " << vagon + 1 << "\n ";
                contador_disponibles += 1;
                if (contador_disponibles == 10)
                    break;

            }
        }
        if (contador_disponibles == 10)
            break;
    }
}
    

int main()
{
    //Se genera el tren de tamanno mxn
    int array_tren[VAGONES][ASIENTOS];

    cout << "GENERANDO TREN ...\n ";
    for (int vagon = 0; vagon < VAGONES; vagon++) {
        for (int asiento = 0; asiento < ASIENTOS; asiento++)
        {
            array_tren[vagon][asiento] = rand() % (1 - 0 + 1) + 0;
        }
        
    }
    cout << "TREN GENERADO EXITOSAMENTE...\n ";
    system("PAUSE");
        

   
    //***Con este ciclo for se puede ver la lista completa de asientos y vagones y la ocupacion de estos mismos. 
    /*
    for (int vagon = 0; vagon < VAGONES; vagon++)
        for (int asiento = 0; asiento < ASIENTOS; asiento++)
        {
            cout <<"Estado: " << array_tren[vagon][asiento] << "\t" << "Asiento: " << asiento + 1<< " y vagon: " << vagon + 1 << "\n ";
        }
    */

    //Llamada a la funcion que se encarga de mostrar los asientos disponibles
    asientos_disponibles(array_tren);

}


