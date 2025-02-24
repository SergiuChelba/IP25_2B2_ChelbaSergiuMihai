#include "Spital.h"

using namespace std;

class Pacienti : public Spital 
{
    protected:
        string nume;
        string diagnostic;
        int varsta;
        char gen;

    public:
        Pacienti(string n);

        virtual void SetDiagnostic(const string& d);

        void SetVarsta(const int& v);
        void SetGen(const char& g);

        void Descriere() const override;
};

class PacientGrav : public Pacienti 
{
    public:
        PacientGrav(string n);
        void SetDiagnostic(const string& d) override;
};
