//  ｡☆✼★━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━★✼☆｡


#include "kisi.h"

	kisi::kisi(){}
	kisi::kisi(string kisiad, string kisisoyad,unsigned int id,string mail,string pass)
	{
		setKisiAd(kisiad);
		setKisiSoyAd(kisisoyad);
		setKisiID(id);
		setMail(mail);
		setPassword(pass);
	}
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           SETTER METODLARI    

	void kisi::setKisiAd(string kisiad)
	{
		kisiAd = kisiad;
	}
	void kisi::setKisiSoyAd(string kisisoyad)
	{
		kisiSoyAd = kisisoyad;
	}
	void kisi::setKisiID(unsigned int id)
	{
		kisiID = id;
	}
	void kisi::setMail(string mail)
	{
		e_mail = mail;
	}
	void kisi::setPassword(string pass)
	{
		password = pass;
	}

//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           GETTER METODLARI    
	string kisi::getKisiAd(){return kisiAd;}
	string kisi::getKisiSoyAd(){return kisiSoyAd;}
	
	unsigned int kisi::getKisiID(){return kisiID;}

	string kisi::getMail(){return e_mail;}
	string kisi::getPassword(){return password;}
	
//  ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
//                                           DİĞER METODLAR
		void kisi::yazdir(){}
