#ifndef ABSTRACTIMENIK_H
#define ABSTRACTIMENIK_H
using namespace std;
#include<string>

class AbstractImenik
{
    public:
        AbstractImenik();
        virtual ~AbstractImenik() = 0;
        virtual void upisiUFajl(string nazivFajla) = 0;
        virtual void ucitajIzFajla(string nazivFajla) = 0;
        virtual void izmeniIzFajla() = 0;
        virtual void kopirajUfajl(string nazivFajla) = 0;
        virtual void izbrisiIzFajla(char* nazivFajla, int linija) = 0;
        virtual  int countLine(char* sourcefile) = 0;

    protected:

    private:
};

#endif // ABSTRACTIMENIK_H
