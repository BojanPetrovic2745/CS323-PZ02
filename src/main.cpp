#include <iostream>
#include "Broj.h"
#include "Imenik.h"
#include <fstream>
#include <string>
using namespace std;


int main()
{
    AbstractImenik* imenik = new Imenik();
    int redniBroj;

    cout << endl;
    cout << "1. Dodaj kontakt u imenik" << endl;

    cout << "2. Vidi kontakte iz imenika" << endl;

    cout << "3. Izmeni kontakt iz imenika" << endl;

    cout << "4. Izbrisi kontakt iz imenika" << endl;

    char izbor = getchar();
    if(izbor == '1'){

       imenik->upisiUFajl("imenik.txt");
    }
    else if(izbor == '2'){

        imenik->ucitajIzFajla("imenik.txt");
    }
    else if(izbor == '3'){

        imenik->izmeniIzFajla();
    }
    else if(izbor == '4'){

        cout << "Unesite redni broj kontakta za brisanje? ";
        cin >> redniBroj;
        imenik->izbrisiIzFajla("imenik.txt", redniBroj);
    }

    delete imenik;
    return 0;
}



