#include "padi.h"

PADI::PADI()
{
    this->fillTable();
}

PADI::~PADI()
{

}

QChar PADI::findGp(int prof, int tf)
{
    int profInTableSelected;
    foreach (int profInTable, this->table.keys()) {
        if(prof < profInTable){
            break;
        }
        profInTableSelected = profInTable;
    }

    int tfInTableSelected;
    foreach (int tfInTable, this->table[profInTableSelected].keys()) {
        if(tf < tfInTable){
            break;
        }
        tfInTableSelected = tfInTable;
    }

    return this->table[profInTableSelected][tfInTableSelected].keys().at(0);

}

void PADI::fillTable()
{
    this->table.insert(35, QMap<int, QMap<QChar, QMap<int, QMap<QChar, QMap<int, QMap<QString,int> > > > > >());
    this->table[35].insert(10, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(19, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(25, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(29, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(32, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(36, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(40, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(44, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(48, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(52, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(57, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(62, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(67, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(73, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(79, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(85, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(92, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(100, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(108, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(117, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(127, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(139, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(152, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(168, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(188, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());
    this->table[35].insert(205, QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > >());

    this->table[35][10].insert('A', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][19].insert('B', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][25].insert('C', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][29].insert('D', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][32].insert('E', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][36].insert('F', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][40].insert('G', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][44].insert('H', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][48].insert('I', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][52].insert('J', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][57].insert('K', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][62].insert('L', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][67].insert('M', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][73].insert('N', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][79].insert('O', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][85].insert('P', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][92].insert('Q', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][100].insert('R', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][108].insert('S', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][117].insert('T', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][127].insert('U', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][139].insert('V', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][152].insert('W', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][168].insert('X', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][188].insert('Y', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());
    this->table[35][205].insert('Z', QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > >());

    this->table.insert(40, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(50, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(60, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(70, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(80, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(90, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(100, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(110, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(120, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(130, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());
    this->table.insert(140, QMap<int,QMap<QChar,QMap<int,QMap<QChar,QMap<int,QMap<QString,int> > > > > >());



}
