#ifndef MERGULHO_H
#define MERGULHO_H


class Mergulho
{
public:
    Mergulho();
    ~Mergulho();

    //métodos de acesso


    int getOrdem();
    void setOrdem(int value);

    int getProf();
    void setProf(int value);

    int getTf();
    void setTf(int value);

    char getGpAnterior();
    void setGpAnterior(char value);

    int getTnr();
    void setTnr(int value);

    int getLnda();
    void setLnda(int value);

    int getIs();
    void setIs(int value);

    int getTtf();


private:

    //ordem do mergulho
    int ordem;

    //profundidade
    int prof;
    //tempo de fundo em minutos
    int tf;

    //grupo de pressão anterior, nulo se for o primeiro
    char gpAnterior;
    //tempo de nitrogênio residual
    int tnr;
    //limite descompressivo
    int lnda;

    //tempo de superfície em minutos
    int is;

    //próximo grupo de mergulho
    char gpProximo;


};

#endif // MERGULHO_H
