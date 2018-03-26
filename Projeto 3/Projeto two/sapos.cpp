#include <iostream>
#include "classes.hpp"
#include <stdlib.h>
#include <time.h>

int total = 1000;

using namespace std;

/*Variavel inteira tipo1 recebe o valor de parametro identificador1 do construtor Sapos da classe Sapos.
Se tipo1 for igual a 1(referente ao sapo 1) o parametro de setQtd(q) recebe um determinado valor inteiro, no caso 50.
Este processo ira ocorrer tambem com os outros dois sapos criados em main.
*/

Sapos::Sapos(int identificador1){

       tipo1 = identificador1;

       if(tipo1 == 1){
         setQtd(50);
       }

       else if(tipo1 == 2){
         setQtd(50);
       }

       else if(tipo1 == 3){
         setQtd(50);
       }
}

//O valor inteiro de q setado antes, sera recebido por qtd.

void Sapos::setQtd(int q){
    qtd = q;
}

//getQtd() entao retorna para main o valor de qtd, este que recebeu de q.

int Sapos::getQtd(){
    return qtd;
}

/*Variavel inteira tipo2 recebe o valor de parametro identificador2 do construtor Frogs da classe Frogs.
Se tipo2 for igual a 1(referente ao sapo 1) o parametro de setIntensidade(intens) recebe um determinado valor inteiro, no caso 10.
Este processo ira ocorrer tambem com os outros dois sapos criados em main.
*/

Frogs::Frogs(int identificador2){

       tipo2 = identificador2;

       if(tipo2 == 1){
         setIntensidade(12);
       }

       else if(tipo2 == 2){
         setIntensidade(9);
       }

       else if(tipo2 == 3){
         setIntensidade(7);
       }
}

//O valor inteiro de intens setado antes, sera recebido por intensidade.

void Frogs::setIntensidade(int intens){
    intensidade = intens;
}

//getIntensidade() entao retorna para main, o valor de intensidade, este que recebeu de intens.

int Frogs::getIntensidade(){
    return intensidade;
}

    Sapos *s1 = new Sapos(1); //Cria s1 a partir da classe Sapos, remete a quantidade de pulos. Sapos eh o construtor Sapos e o valor eh o parametro identificador1.
    Sapos *s2 = new Sapos(2); //Cria s2 a partir da classe Sapos, remete a quantidade de pulos. Sapos eh o construtor Sapos e o valor eh o parametro identificador1.
    Sapos *s3 = new Sapos(3); //Cria s2 a partir da classe Sapos, remete a quantidade de pulos. Sapos eh o construtor Sapos e o valor eh o parametro identificador1.

    Frogs *p1 = new Frogs(1); //Cria p1 a partir da classe Frogs, remete a intensidade de cada pulo. Frogs eh o construtor Frogs e o valor eh o parametro identificador2.
    Frogs *p2 = new Frogs(2); //Cria p2 a partir da classe Frogs, remete a intensidade de cada pulo. Frogs eh o construtor Frogs e o valor eh o parametro identificador2.
    Frogs *p3 = new Frogs(3); //Cria p3 a partir da classe Frogs, remete a intensidade de cada pulo. Frogs eh o construtor Frogs e o valor eh o parametro identificador2.

void exemplo(){
    cout << "O primeiro sapo eh mais forte e mais distraido: exemplo: Com um numero de " <<s1->getQtd() << " pulos sem falhas, e intensidade " << p1->getIntensidade() << " por pulo, o sapo percorre " << s1->getQtd() * p1->getIntensidade() << " unidades de distancia" << endl;
    cout << "O segundo sapo eh forte e distraido: exemplo: Com um numero de " <<s2->getQtd() << " pulos sem falhas, e intensidade " << p2->getIntensidade() << " por pulo, o sapo percorre " << s2->getQtd() * p2->getIntensidade() << " unidades de distancia" << endl;
    cout << "O terceiro sapo eh menos forte e menos distraido: exemplo: Com um numero de " <<s3->getQtd() << " pulos sem falhas, e intensidade " << p3->getIntensidade() << " por pulo, o sapo percorre " << s3->getQtd() * p3->getIntensidade() << " unidades de distancia" << endl;
}

int aleatoriedade1(){
    srand(time(NULL));
    int imprevisto1 = rand() % 10; //O sapo 1 possui mais chances de falhas nos pulos.

    return imprevisto1;
}

int aleatoriedade2(){
    srand(time(NULL));
    int imprevisto2 = rand() % 7; //O sapo 2 possui medias chances de falhas nos pulos.

    return imprevisto2;
}

int aleatoriedade3(){
    srand(time(NULL));
    int imprevisto3 = rand() % 5; //O sapo 3 possui menos chances de falhas nos pulos.

    return imprevisto3;
}

int im1 = aleatoriedade1();
int im2 = aleatoriedade2();
int im3 = aleatoriedade3();

int incremento1 = p1->getIntensidade() - im1; //Distancia percorrida ate o fim do total. A cada ciclo imprevisto1 retira parte do incremento1.
int incremento2 = p2->getIntensidade() - im2; //Distancia percorrida ate o fim do total. A cada ciclo imprevisto2 retira parte do incremento2.
int incremento3 = p3->getIntensidade() - im3; //Distancia percorrida ate o fim do total. A cada ciclo imprevisto3 retira parte do incremento3.

int pular1(){

    int percorre1 = 0;

    for(int i = 0; i <= total; i++){
      percorre1 += incremento1;
    }

    return percorre1;
}

int pular2(){

    int percorre2 = 0;

    for(int i = 0; i <= total; i++){
      percorre2 += incremento2;
    }
       return percorre2;
}

int pular3(){

    int percorre3 = 0;

    for(int i = 0; i <= total; i++){
      percorre3 += incremento3;
    }
       return percorre3;
}

void percorrido(){
    cout << "Distancia total da corrida: " << total << endl; //Distancia total.
    cout << "Distancia percorrida pelo primeiro sapo: " << total + incremento1 << endl; //Distancia percorrida pelo sapo 1.
    cout << "Distancia percorrida pelo segundo sapo: " << total + incremento2 << endl; //Distancia percorrida pelo sapo 2.
    cout << "Distancia percorrida pelo terceiro sapo: " << total + incremento3 << endl; //Distancia percorrida pelo sapo 3.
}


int numero_de_pulos1(){ //Numero de pulos do sapo 1.
    int pulos1 = total/incremento1;

    return pulos1;
}

int numero_de_pulos2(){ //Numero de pulos do sapo 2.
    int pulos2 = total/incremento2;

    return pulos2;
}

int numero_de_pulos3(){ //Numero de pulos do sapo 3.
    int pulos3 = total/incremento3;

    return pulos3;
}
