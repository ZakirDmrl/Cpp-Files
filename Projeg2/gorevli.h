#ifndef GOREVLI_H
#define GOREVLI_H
#include "kisi.h"
class gorevli : kisi
{
protected:
	string unvan;
	unsigned int iseGirisTarihi;
	unsigned int maas;
	unsigned int haftalikIzinGunleri[2];
	int kalanYillikIzinSayisi; //fazladan izin yapana negatif değer!
public:
	gorevli();
	gorevli(string,string,unsigned int,string,string,unsigned int,unsigned int,unsigned int [2],int,string);
	void setUnvan(string);
	void setIseGirisTarihi(unsigned int);
	void setMaas(unsigned int maas1);
	void setHaftalikIzinGunleri(unsigned int haftalikIzinGunleri1[2]);
	void setKalanYillikIzinSayisi(int);

	string getUnvan();
	unsigned int getIseGirisTarihi();
	unsigned int getMaas();
	unsigned int getHaftalikIzinGunleri();
	int getKalanYillikIzinSayisi(); //fazladan izin yapana negatif değer!

	virtual void yazdir();

};

#endif