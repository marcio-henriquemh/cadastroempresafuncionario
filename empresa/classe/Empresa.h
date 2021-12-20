

#ifndef EMPRESA_H
#define EMPRESA_H

#include<string>

using namespace std;
class Empresa
{
    public:

    //construtor de classe da empresa

    Empresa(string nomees,string cnpj);


    // chamada da classe empresa e seus atributos nome da empresa
       void setNomeem(string nomees);
       string getNomeem();
    // chamada da classe empresa e seus atributos  cnpj da empresa
        void setCnpj(string cnpj);
        string getCnpj();


    private:
    string cnpj;
    string nomees;
};

#endif // EMPRESA_H
