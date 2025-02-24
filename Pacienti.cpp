#include "Pacienti.h"

using namespace std;

Pacienti::Pacienti(std::string n) : nume(n), diagnostic("Necunoscut"), gen('N'), varsta(0) {}

void Pacienti::SetDiagnostic(const string& d) 
{
    diagnostic = d;
}

void Pacienti::SetVarsta(const int& v)
{
    varsta = v;
}

void Pacienti::SetGen(const char& g)
{
    gen = g;
}

void Pacienti::Descriere() const 
{
    cout << "Pacient: " << nume << ", Diagnostic: " << diagnostic << "\n";
}

PacientGrav::PacientGrav(string n) : Pacienti(n) {}

void PacientGrav::SetDiagnostic(const string& d) 
{
    diagnostic = d;
    cout << "Pacient cu caz grav! Diagnostic setat: " << d << "\n";
}
