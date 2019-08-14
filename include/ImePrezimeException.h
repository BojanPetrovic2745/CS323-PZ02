#ifndef IMEPREZIMEEXCEPTION_H
#define IMEPREZIMEEXCEPTION_H
#include<exception>
#include <iostream>
using namespace std;
class ImePrezimeException : public exception
{
    public:
        ImePrezimeException();
        virtual ~ImePrezimeException();

        virtual const char* what() const throw(){
            return "Jedan od unosa nije validan! ";
        }

    protected:

    private:
};

#endif // IMEPREZIMEEXCEPTION_H
