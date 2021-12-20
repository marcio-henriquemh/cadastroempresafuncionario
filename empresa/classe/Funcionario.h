

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include<string>
using namespace std;

class Funcionario
{
    public:

    //construtor de classe Funcionario
    Funcionario(string nome,double salario, string admissao );

    // chamada da classe funcionario e seus atributos nome
       void setNome(string nome);
       string getNome();

    // chamada da classe funcionario e seus atributos salario
        void setSalario(double salario);
        double getSalario();
    //chamada da classe funcionnario e seus atributos admissao
        void setAdm(string admissao);
        string getAdm();


    private:

    string nome;
    string admissao;
    double salario;
};

#endif // FUNCIONARIO_H
