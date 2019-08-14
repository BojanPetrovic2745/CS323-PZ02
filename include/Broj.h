#ifndef BROJ_H
#define BROJ_H

#include <iostream>
#include "AbstractImenik.h"

using namespace std;

class Broj{
    public:
        Broj();
        virtual ~Broj();
        void setIme(string ime);
        string getIme() const;
        void setPrezime(string prezime);
        string getPrezime() const;
        void setBroj(string broj);
        string getBroj() const;



    protected:
        string ime;
        string prezime;
        string broj;

    private:

};

#endif // BROJ_H
