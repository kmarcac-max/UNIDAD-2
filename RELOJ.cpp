#include <iostream>
#include <string>
using namespace std;

class Display {
private:
    string tipo;

public:
    Display(string t) {
        tipo = t;
    }

    string getTipo() {
        return tipo;
    }
};

class Hora {
private:
    int hora, minutos, segundos;

public:
    Hora(int h, int m, int s) {
        hora = h;
        minutos = m;
        segundos = s;
    }

    int getHora() {
        return hora;
    }

    int getMinutos() {
        return minutos;
    }

    int getSegundos() {
        return segundos;
    }
};

class Reloj {
private:
    Display display;
    Hora hora;

public:
    Reloj(int h, int m, int s, string tipo)
        : display(tipo), hora(h, m, s) {
    }

    void mostrarReloj() {
        if (display.getTipo() == "digital") {
            cout << "["
                 << hora.getHora() << ":"
                 << hora.getMinutos() << ":"
                 << hora.getSegundos() << "]" << endl;
        }
        else {
            cout << "-->"
                 << hora.getHora() << ":"
                 << hora.getMinutos() << ":"
                 << hora.getSegundos() << "<--" << endl;
        }
    }
};

int main() {

    Reloj reloj1(10, 15, 55, "digital");

    Reloj reloj2(10, 15, 55, "analogico");

    reloj1.mostrarReloj();
    reloj2.mostrarReloj();

    return 0;
}

