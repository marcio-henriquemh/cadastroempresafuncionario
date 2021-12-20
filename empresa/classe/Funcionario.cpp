

#include "Funcionario.h"
#include<string>
using namespace std;




 // metodos para acesso aos private
        void Funcionario:: setNome(string nome){

        this->nome= nome;

        }

        string Funcionario::getNome(){
            return nome;

        }

//================ metodos para acessar o private salario
        void Funcionario::setSalario(double salario){

                if(salario<1500){

                    this->salario=salario;

                }else{

                    salario=1500;

                    }
                    }

        double Funcionario::getSalario(){
            return salario;


            }


//===============================================================================================

        void Funcionario::setAdm(string admissao){

            this->admissao=admissao;
            }

        string Funcionario:: getAdm(){

            return admissao;


            }


            //construtor de classe de objetos

      Funcionario::Funcionario(string nome, double salario,string admissao){

        this->nome=nome;
        this->salario=salario;
        this->admissao=admissao;





      }

