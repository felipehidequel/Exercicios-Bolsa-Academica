#include "pessoa.h"

Pessoa::Pessoa()
{
    nome = "Indefinido";
    idade = 0;
    altura = 0.0;
}

Pessoa::Pessoa(string novoNome, int novaIdade, double novaAltura)
{
    nome = novoNome;
    idade = novaIdade;
    altura = novaAltura;
}

void Pessoa::setNome(string novoNome){
    nome = novoNome;
}

void Pessoa::setIdade(int novaIdade){
    idade = novaIdade;
}

void Pessoa::setAltura(double novaAltura){
    altura = novaAltura;
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

double Pessoa::getAltura(){
    return altura;
}

