#include "Broj.h"
Broj::Broj()
{
    //ctor
}

Broj::~Broj()
{
    //dtor
}

void Broj::setIme(string ime){
    this->ime = ime;
}

string Broj::getIme() const{
    return ime;

}

void Broj::setPrezime(string prezime){
    this->prezime = prezime;
}

string Broj::getPrezime() const{
    return prezime;
}


 void Broj::setBroj(string broj){
    this->broj = broj;
}

string Broj::getBroj() const{
    return broj;
}
