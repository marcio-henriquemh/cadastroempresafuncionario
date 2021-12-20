#include "Empresa.h"
#include<string>
 using namespace std;


//===================== metodos de acesso========
 
 // get e set onde ambos irão extrair valores passados por parametro.

    void Empresa::setCnpj( string cnpj){

        this->cnpj=cnpj;



    }


    string Empresa::getCnpj(){
        return cnpj;




    }


    void Empresa::setNomeem( string nomees){

        this->nomees=nomees;

    }

    string Empresa:: getNomeem(){

    return nomees;



    }

    Empresa::Empresa(string nomees,string cnpj){

        this->nomees=nomees;
        this->cnpj=cnpj;


    }
