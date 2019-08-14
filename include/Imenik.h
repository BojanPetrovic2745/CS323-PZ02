#ifndef IMENIK_H
#define IMENIK_H

#include<iostream>
#include<fstream>
#include <string>
#include<exception>

#include "Broj.h"
#include "ImePrezimeException.h"
#include "AbstractImenik.h"
using namespace std;

class Imenik :  public Broj, public AbstractImenik
{
    public:
        Imenik();
        virtual ~Imenik();
        bool isNumber(string& provera);

        void upisiUFajl(string nazivFajla){


            cout << "Unesite ime: ";
            cin >> ime;


            cout<< "Unesite prezime: ";
            cin >> prezime;

            cout << endl << "Unesite broj: ";
            cin >> broj;

            if(isNumber(ime) || isNumber(prezime) || !isNumber(broj)){
                throw ImePrezimeException();
            }else{


                Broj::setIme(ime);
                Broj::setPrezime(prezime);
                Broj::setBroj(broj);

                ofstream fajl("imenik.txt", ios::app);

                if(fajl.is_open()){
                    fajl << Broj::getIme() << " " << Broj::getPrezime() << " " << Broj::getBroj() << endl;
                    fajl.close();

                }

            }
    }
    void ucitajIzFajla(string nazivFajla){
            string readLine;

            ifstream fajl(nazivFajla);


                while(!fajl.eof()){
                    getline(fajl, readLine);
                    cout << readLine << endl;
                }

            fajl.close();

        }


        void izmeniIzFajla(){

            string pretraga;
            int offset;
            string line;

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
                        cin >> broj;
                    }

                }

            if(isNumber(ime) || isNumber(prezime) || !isNumber(broj)){
                throw ImePrezimeException();
            }

                Broj::setIme(ime);
                Broj::setPrezime(prezime);
                Broj::setBroj(broj);
                fajlTemp << "Izmena u fajlu: " << Broj::getIme() << " " << Broj::getPrezime() << " " << Broj::getBroj() << endl;
                kopirajUfajl("imenik.txt");
				upisiUFajl("imenik.txt");




                fajl.close();
                fajlTemp.close();
            }


        }
        void kopirajUfajl(string nazivFajla){

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
        void izbrisiIzFajla(char* nazivFajla, int linija){

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
        int countLine(char* sourcefile){

              ifstream infile;

              infile.open(sourcefile,ios::in);

              char data[500];

              int line=0;

              while(infile.getline(data,500)) line++;

              return line;

           }

            protected:

            private:



        };

#endif // IMENIK_H
