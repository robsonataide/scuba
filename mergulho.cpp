#include "mergulho.h"

Mergulho::Mergulho()
{

}

Mergulho::~Mergulho()
{

}
int Mergulho::getOrdem()
{
    return ordem;
}

void Mergulho::setOrdem(int value)
{
    ordem = value;
}
int Mergulho::getProf()
{
    return prof;
}

void Mergulho::setProf(int value)
{
    prof = value;
}
int Mergulho::getTf()
{
    return tf;
}

void Mergulho::setTf(int value)
{
    tf = value;
}
char Mergulho::getGpAnterior()
{
    return gpAnterior;
}

void Mergulho::setGpAnterior(char value)
{
    gpAnterior = value;
}
int Mergulho::getTnr()
{
    return tnr;
}

void Mergulho::setTnr(int value)
{
    tnr = value;
}
int Mergulho::getLnda()
{
    return lnda;
}

void Mergulho::setLnda(int value)
{
    lnda = value;
}
int Mergulho::getIs()
{
    return is;
}

void Mergulho::setIs(int value)
{
    is = value;
}

int Mergulho::getTtf(){
    return (this->getTnr() + this->getLnda());
}






