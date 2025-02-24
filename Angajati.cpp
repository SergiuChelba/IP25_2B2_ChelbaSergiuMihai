#include "Angajati.h"

using namespace std;

Angajati::Angajati()
{
    grad = "Debutant";
}

Angajati::Angajati(string gr) : grad(gr) {}
Angajati::Angajati(string gr, string n) : grad(gr), nume(n) {}
Angajati::Angajati(string gr, string n, float s) : grad(gr), nume(n), salariu(s){}
Angajati::Angajati(string gr, string n, float s, int v) : grad(gr), nume(n), salariu(s), vechime(v) {}
Angajati::Angajati(string gr, string n, float s, int v, char g) : grad(gr), nume(n), salariu(s), vechime(v), gen(g) {}

void Angajati::SetName(const string& n) 
{
    nume = n;
}

void Angajati::SetName(const string& n, const string& p) 
{
    nume = n + " " + p;
}

void Angajati::SetName(const string& n, const string& p1, const string& p2) 
{
    nume = n + " " + p1 + "-" + p2;
}

void Angajati::SetSalariu(const int& s)
{
    salariu = s;
}

void Angajati::SetVechime(const float& v)
{
    vechime = v;
}

void Angajati::SetGen(const char& g)
{
    gen = g;
}

void Angajati::SetGrad(const string& gr)
{
    this->grad = gr;
}

bool Angajati::operator==(const Angajati& celalalt) const 
{
    return this->grad == celalalt.grad;
}

Asistent::Asistent() : Angajati("Asistent") {}
Medic::Medic() : Angajati("Medic") {}
Conducere::Conducere() : Angajati("Director") {}

void Asistent::Descriere() const 
{
    cout << "Asistent: " << nume << ", Grad: " << grad << ", Salariu: " << salariu << ", Vechime: "<< vechime << ", Gen: "<< gen << " ." << "\n";
}

void Medic::Descriere() const 
{
    cout << "Medic: " << nume << ", Grad: " << grad << ", Salariu: " << salariu << ", Vechime: " << vechime << ", Gen: " << gen << " ." << "\n";
}

void Conducere::Descriere() const 
{
    cout << "Conducere: " << nume << ", Grad: " << grad << ", Salariu: " << salariu << ", Vechime: " << vechime << ", Gen: " << gen << " ." << "\n";
}
