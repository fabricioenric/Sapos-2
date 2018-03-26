#ifndef CLASSES_HPP_INCLUDED
#define CLASSES_HPP_INCLUDED

class Sapos{ //Classe Sapos.

private:

      int qtd; //quantidade de pulos.

public:

      //static int total;
      int getQtd();//Metodo getters para qtd.
      void setQtd(int q);//Metodo setters para qtd.
      Sapos(int identificador1);//Construtor Sapos(identificador1).
      int tipo1;//Variavel inteira para tipificar os tres sapos.

};

class Frogs{ //Classe Frogs.

private:

        int intensidade; //intensidade de cada pulo.

public:

        int getIntensidade(); //Metodo getters para intensidade.
        void setIntensidade(int intens); //Metodo setters.
        Frogs(int identificador2); //Construtor Frogs(identificador2).
        int tipo2; //Variavel para tipificar os tres sapos, de acordo a intensidade dos pulos.

};

#endif // CLASSES_HPP_INCLUDED
