#ifndef CALISAN_H
#define CALISAN_H
#include <iostream>
#include <vector>
using namespace std;
class Calisan{
public:
Calisan(){}
Calisan(string ad1,string soyad1,string telefonNumarasi1,string eposta1,string kimlikNo1):ad(ad1),soyad(soyad1),telefonNumarasi(telefonNumarasi1),eposta(eposta1),kimlikNo(kimlikNo1){}

string getAd(){return ad;}
string getSoyad(){return soyad;}
string getTelefonNumarasi(){return telefonNumarasi;}
string getEposta(){return eposta;}
string getKimlikNo(){return kimlikNo;}
void virtual yazdir()=0;

protected:
string ad;
string soyad;
string telefonNumarasi;
string eposta;
string kimlikNo;

};




#endif