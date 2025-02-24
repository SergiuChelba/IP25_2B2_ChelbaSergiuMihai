#include "Spital.h"

using namespace std;

class Angajati : public Spital 
{
    protected:
        string nume;
        string grad;
        float salariu;
        int vechime;
        char gen;

    public:
        Angajati();
        Angajati(string gr); //doar grad
        Angajati(string gr, string n); // grad + nume
        Angajati(string gr, string n, float s); // grad + nume + salariu
        Angajati(string gr, string n, float s, int v); // grad + nume + salariu + vechime
        Angajati(string gr, string n, float s, int v, char g); // grad + nume + salariu + vechime + gen

        void SetName(const string& n);
        void SetName(const string& n, const std::string& p);
        void SetName(const string& n, const std::string& p1, const std::string& p2);

        void SetSalariu(const int& s);
        void SetVechime(const float& v);
        void SetGen(const char& g);
        void SetGrad(const string& gr);

        bool operator==(const Angajati& other) const;

        virtual ~Angajati() {}
};

class Asistent : public Angajati 
{
    public:
        Asistent();
        void Descriere() const override;
};

class Medic : public Angajati 
{
    public:
        Medic();
        void Descriere() const override;
};

class Conducere : public Angajati 
{
    public:
        Conducere();
        void Descriere() const override;
};
