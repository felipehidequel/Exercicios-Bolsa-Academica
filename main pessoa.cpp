#include <iostream>
#include "pessoa.h"

using namespace std;

int main()
{
    //Utilizar o construtor padrão
    Pessoa p1;
    cout<<p1.getNome()<<"tem"<<p1.getIdade()<<"anos"<<"e mede"<<p1.getAltura()<<endl;

    //Utilizar um construtor que define os dados iniciais
    Pessoa p2("Mario", 35, 1.80);
    cout<<p2.getNome()<<"tem"<<p2.getIdade()<<"anos"<<"e mede"<<p2.getAltura()<<endl;

    p1.setNome("Adalberto");
    p1.setIdade(40);
    p1.setAltura(1.70);
    cout<<p1.getNome()<<"tem"<<p1.getIdade()<<"anos"<<"e mede"<<p1.getAltura()<<endl;
}