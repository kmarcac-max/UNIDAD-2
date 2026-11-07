#include <iostream>
#include <string>
using namespace std;
class Boligrafo {
private:

    int tinta;
    string color;
public:
    Boligrafo() {
        tinta = 100;
        color = "azul";
    }

    int getTinta() {
        return tinta;
    }
    string getColor() {
        return color;
    }
    bool setColor(string nuevoColor) {

        if (nuevoColor == "azul" ||nuevoColor == "rojo" || nuevoColor == "verde" || nuevoColor == "negro") {
            color = nuevoColor;
            return true;
        }
        return false;
    }
    bool escribir(int unidades) {

        if (unidades > 0 && unidades <= tinta) {

            tinta = tinta - unidades;
            return true;
        }

        return false;
    }

    bool recargar(int unidades) {
    	
        if (unidades > 0 && tinta + unidades <= 100) {

            tinta = tinta + unidades;
            return true;
        }

        return false;
    }

    void mostrarEstado() {

        cout << "    ESTADO DEL BOLIGRAFO    " << endl;
        cout << "color: " << color << endl;
        cout << "tinta disponible: " << tinta << endl;
    }

};

int main() {

    Boligrafo lapicero;
    int opcion;
    int unidades;
    string nuevoColor;

    do {
        cout << "            MENU BOLIGRAFO          "<<endl;
        cout << "1. escribir" << endl;
        cout << "2. recargar tinta" << endl;
        cout << "3. cambiar color" << endl;
        cout << "4. consultar estado" << endl;
        cout << "5. salir" << endl;

        cout << "seleccione una opcion: ";
        cin >> opcion;
        
        switch (opcion) {

            case 1:

                cout << "Cuantas unidades desea escribir: ";
                cin >> unidades;

                if (lapicero.escribir(unidades)) {

                    cout << "escritura realizada correctamente." << endl;
                    cout << "tinta consumida: " << unidades << endl;
                }
                else {
                    cout << "no se pudo escribir." << endl;
                    cout << "la cantidad no es valida o no hay tinta suficiente." << endl;

                    cout << "tinta consumida: 0" << endl;
                }
                cout << "tinta restante: "
                     << lapicero.getTinta() << endl;
                break;
            case 2:
                cout << "cuantas unidades desea recargar: ";
                cin >> unidades;

                if (lapicero.recargar(unidades)) {
                    cout << "recarga realizada correctamente." << endl;
                }
                else {
                    cout << "recarga rechazada." << endl;
                    cout << "verifique la cantidad y la capacidad disponible." << endl;
                }
                break;
            case 3:
                cout << "ingrese el nuevo color: ";
                cin >> nuevoColor;
                if (lapicero.setColor(nuevoColor)) {
                  cout << "color cambiado correctamente." << endl;
                }
                else {
                cout << "color no permitido." << endl;
                }
                break;
            case 4:
                lapicero.mostrarEstado();
                break;
            case 5:
                cout << "saliendo" << endl;
                break;
            default:
                cout << "opcion no valida." << endl;
        }

    } while (opcion != 5);

    return 0;
}

