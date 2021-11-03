#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

#include <string>
using namespace std;

class Pessoa
{
    public:
           Pessoa();
           Pessoa(string, int, double);
           ~Pessoa();
           void setNome(string);
           void setIdade(int);
           void setAltura(double);
           string getNome();
           int getIdade();
           double getAltura();
    private:
            string nome;
            int idade;
            double altura;

};

#endif 



