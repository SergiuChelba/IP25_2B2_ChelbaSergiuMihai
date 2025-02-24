#include <iostream>
#include <vector>
#include "Angajati.h"
#include "Pacienti.h"

using namespace std;

int main() {

    Asistent asistent1;
    Medic medic1;
    Conducere director1;

    asistent1.SetName("Popescu");
    medic1.SetName("Ionescu", "Mihai");
    director1.SetName("Georgescu", "Andrei", "Cristian");

    asistent1.SetSalariu(3500);
    medic1.SetSalariu(7000);
    director1.SetSalariu(10000);

    asistent1.SetVechime(5);
    medic1.SetVechime(10);
    director1.SetVechime(20);

    asistent1.SetGen('F');
    medic1.SetGen('M');
    director1.SetGen('M');

    asistent1.Descriere();
    medic1.Descriere();
    director1.Descriere();

    Medic medic2;
    medic2.SetName("Dumitrescu", "Ana");

    if (medic1 == medic2)
        cout << "medic1 si medic2 au acelasi grad.\n";
    else
        cout << "medic1 si medic2 au grade diferite.\n";

    if (asistent1 == medic1)
        cout << "asistent1 si medic1 au acelasi grad.\n";
    else
        cout << "asistent1 si medic1 au grade diferite.\n";

    Pacienti pacient1("Marinescu");
    PacientGrav pacientGrav1("Popa");

    pacient1.SetDiagnostic("Gripa");
    pacientGrav1.SetDiagnostic("Infarct");

    pacient1.SetVarsta(45);
    pacientGrav1.SetVarsta(60);

    pacient1.SetGen('M');
    pacientGrav1.SetGen('F');

    pacient1.Descriere();
    pacientGrav1.Descriere();

    return 0;
}
