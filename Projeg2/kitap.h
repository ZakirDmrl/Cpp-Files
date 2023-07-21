#ifndef KITAP_H
#define KITAP_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class kitap
{
protected:
string kitapAd;
string yazar;
unsigned int basimTarihi;
unsigned int baski;//kaçıncı baskı serisi?
unsigned int fiyat;

public:
    kitap();
    kitap(string,string,unsigned int,unsigned int,unsigned int);
    void setKitapAd(string );
    void setYazar(string );
    void setBasimTarihi(unsigned int );
    void setBaski(unsigned int );
    void setFiyat(unsigned int );    
    string getKitapAd();
    string getYazar();
    unsigned int getBasimTarihi();
    unsigned int getBaski();
    unsigned int getFiyat();
    virtual void yazdir();

};


#endif