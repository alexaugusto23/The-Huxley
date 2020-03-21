#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int horastr = 8;
int horas = 60;
int processos;
int horasxprocessos;

using namespace std;

int main() {

    cin>>processos;
    horasxprocessos = (horastr*horas)/processos;
    cout<<horasxprocessos<<endl;




	return 0;


}

/*
Betina trabalha em um escritório de advocacia e todos os dias
analisa vários processos. Sabendo que ela cumpre um expediente diário de
8h, escreva um programa que receba como entrada quantos minutos ela leva para
analisar cada processo, e exiba o total de processos revisados em um dia de trabalho.
(Dica: Uma hora tem 60 minutos) 4 - 120

Analisando processos
*/
