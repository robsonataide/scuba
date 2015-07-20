#ifndef PADI_H
#define PADI_H

#include <QMap>
#include <QString>

class PADI
{
public:
    PADI();
    ~PADI();
    QChar findGp(int prof, int tf);
    QChar findNextGp(QChar gpAnterior, int is);

private:

    QMap<int,QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > > > table;

    void fillTable();
};

#endif // PADI_H
