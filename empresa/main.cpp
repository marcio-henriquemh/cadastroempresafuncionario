#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
#include"Funcionario.h"
#include"Empresa.h"




\\funcão Principal

int main(int argc, char** argv )
{

    Funcionario f1("Marcio henrique",940,"20/10/1994");

    // ================empresa====
    Empresa em1("Computação junior","42.591.651/0001-43");

    cout <<"O nome do funcionário:" <<f1.getNome()<< endl;
    cout << "O salário do Funcionário:"<<f1.getSalario() << endl;
    cout << "Data de Admissão:"<<f1.getAdm()<<endl;
    cout<<"============Empresa====================="<< endl;
    cout<< "O nome da empresa:"<<em1.getNomeem()<< endl;
    cout<<"O CNPJ:"<<em1.getCnpj()<< endl;
    return 0;
}
