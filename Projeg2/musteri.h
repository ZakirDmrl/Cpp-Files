#ifndef MUSTERI_H
#define MUSTERI_H

#include "kisi.h"

class musteri : public kisi
{
protected:
unsigned int alinanKitapSayisi;
unsigned int alinanKitabinKalanGunu;
unsigned int puan;
unsigned int kitapAlimTarihi;
unsigned int kitapSonTeslimtarihi;
unsigned int uyeOlmaTarihi;
unsigned int uyeKalinanGun;//şimdinin tarihi - uye olma tarihi
public:
	musteri();
	musteri(string,string,unsigned int,string,string,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);

	void setalinanKitapSayisi(unsigned int);
	void setalinanKitabinKalanGunu(unsigned int);
	void setPuan(unsigned int);
	void setkitapAlimTarihi(unsigned int);
	void setkitapSonTeslimtarihi(unsigned int);
	void setuyeOlmaTarihi(unsigned int);
	void setuyeKalinanGun(unsigned int);

	unsigned int getAlinanKitapSayisi();
	unsigned int getAlinanKitabinKalanGunu();
	unsigned int getPuan();
	unsigned int getKitapAlimTarihi();
	unsigned int getKitapSonTeslimtarihi();
	unsigned int getUyeOlmaTarihi();
	unsigned int getUyeKalinanGun();

	virtual void yazdir();

};


#endif