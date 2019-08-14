#include "Imenik.h"
#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

Imenik::Imenik()
{
    //ctor
}

Imenik::~Imenik()
{
    //dtor
}

bool Imenik::isNumber(string& provera){

    for(int i = 0; i < provera.length(); i++){
        if(isdigit(provera[i]) == false){
            return false;
        }
    }
    return true;

}





/*void Imenik::izmeniIzFajla(){
    string pretraga;
    string izmena;
    int offset;
    string line;
    string ime;
    string prezime;

    ifstream fajl("imenik.txt");
    ofstream fajlTemp("temp.txt", ios::app);

    cout << "Unesite broj koji zelite da izmenite: " << endl;
    cin >> pretraga;

    if(fajl.is_open()){
        while(!fajl.eof()){
            getline(fajl, line);
            if((offset = line.find(pretraga, 0)) != string::npos ){
                cout << "Broj za izmenu je: " << pretraga << endl;
                 cout<< endl << "Unesite novo ime: ";
                cin >> ime;
                cout << endl << "Unesite novo prezime: ";
                cin >> prezime;
                cout << "Unesite novi broj: ";
                cin >> izmena;

            }


        }

                 br->setIme(ime);
                 br->setPrezime(prezime);
                 br->setBroj(izmena);
         fajlTemp << "Izmena u fajlu: " << br->getIme() << " " << br->getPrezime() << " " << br->getBroj() << endl;
         kopirajUfajl("imenik.txt");





    }

    fajl.close();
    fajlTemp.close();




}

void Imenik::kopirajUfajl(string nazivFajla){

    ifstream in(nazivFajla);
    ofstream out("temp.txt", ios::app);
     string line;
    if(in.is_open()){
        while(!in.eof()){
            getline(in, line);
            out << line << endl;



        }
    }
    in.close();
    out.close();
}


void Imenik::izbrisiIzFajla(char* nazivFajla, int linija){

    ifstream infile;

      char tempPath[100]="temp.txt";

      infile.open(nazivFajla,ios::in);

      if(infile){

        int numLine=countLine(nazivFajla);

        if(numLine<linija){

           cout<<"\nNo line to delete\n.";

           return;

        }

        ofstream outfile;

        outfile.open(tempPath,ios::out);

        char data[100];

        int i=0;

        while(infile.getline(data,100)){

           i++;

           if(i==linija) continue;

           outfile<<data<<"\n";

        }

        outfile.close();

      }

      infile.close();

     remove(nazivFajla);

     rename(tempPath,nazivFajla);

}
int Imenik::countLine(char* sourcefile){

      ifstream infile;

      infile.open(sourcefile,ios::in);

      char data[500];

      int line=0;

      while(infile.getline(data,500)) line++;

      return line;

   }
   */

