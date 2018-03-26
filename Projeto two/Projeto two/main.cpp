#include <iostream>
#include "classes.hpp"
#include "sapos.cpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    string sapo1,sapo2,sapo3,corrida;
    cout << "Digite o nome do primeiro sapo: "; //O usuario escolhe os nomes dos tres sapos.
    getline(cin, sapo1);
    cout << "Digite o nome do segundo sapo: ";
    getline(cin, sapo2);
    cout << "Digite o nome do terceiro sapo: ";
    getline(cin, sapo3);

    cout << "" << endl;
    exemplo(); //Exemplifica, mostrando o quanto cada sapo vai percorrer de acordo com a quantidade de pulos e intensidade por pulo.

    cout << "" << endl;
    cout << "Digite corrida para simular uma corrida entre sapos: " << endl; //Simula uma corrida.
    getline(cin, corrida);

    if(corrida == "corrida"){
      int resultado1 = pular1(); //Funcao que faz o sapo pular, ou seja, incrementa quanto o sapo 1 percorreu a cada salto, atribuindo valor a resultado1(o total que o sapo 1 percorreu).
      int resultado2 = pular2(); //Funcao que faz o sapo pular, ou seja, incrementa quanto o sapo 2 percorreu a cada salto, atribuindo valor a resultado2(o total que o sapo 2 percorreu).
      int resultado3 = pular3(); //Funcao que faz o sapo pular, ou seja, incrementa quanto o sapo 3 percorreu a cada salto, atribuindo valor a resultado3(o total que o sapo 3 percorreu).

      cout << "" << endl;

    //Possiveis resultados:

      if(resultado1 > resultado2 && resultado1 > resultado3)
        cout << "Resultado: O Sapo " << sapo1 << " eh o vencedor." << endl;

      else if(resultado2 > resultado1 && resultado2 > resultado3)
        cout << "Resultado: O Sapo " << sapo2 << " eh o vencedor." << endl;

      else if(resultado3 > resultado1 && resultado3 > resultado2)
        cout << "Resultado: O Sapo " << sapo3 << " eh o vencedor." << endl;

      else if(resultado1 == resultado2 && resultado1 > resultado3 && resultado2 > resultado3)
        cout << "Resultado: Empate entre " << sapo1 << " e " << sapo2 << endl;

      else if(resultado1 == resultado3 && resultado1 > resultado2 && resultado3 > resultado2)
        cout << "Resultado: Empate entre " << sapo1 << " e " << sapo3 << endl;

      else if(resultado2 == resultado3 && resultado2 > resultado1 && resultado2 > resultado1)
        cout << "Resultado: Empate entre " << sapo2 << " e " << sapo3 << endl;

      else if(resultado1 == resultado2 && resultado1 == resultado3)
        cout << "Resultado: Empate." << endl;
    }
    return 0;
}

