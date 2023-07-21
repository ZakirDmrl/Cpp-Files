#ifndef KISI_H
#define KISI_H

#include <iostream>
#include <string>
#include <unistd.h>	
#include <vector>

using namespace std;

class kisi
{
protected:
	string kisiAd;
	string kisiSoyAd;
	unsigned int kisiID;
	string e_mail;
	string password;
public:
	kisi();
	kisi(string,string,unsigned int,string,string);

	void setKisiAd(string);
	void setKisiSoyAd(string);
	void setKisiID(unsigned int);

	string getKisiAd();
	string getKisiSoyAd();
	unsigned int getKisiID();

	void setMail(string);
	void setPassword(string);

	string getMail();
	string getPassword();

	virtual void yazdir();
	void yazdirx(int i){
		if(i>=1)
		cout<<"Adiniz: "<<getKisiAd()<<endl;
		if(i>=2)
		cout<<"Soyadiniz: "<<getKisiSoyAd()<<endl;
		if(i>=3)
		cout<<"E-Mail adresiniz: "<<getMail()<<endl;
		if(i>=4)
		cout<<"Size atanan id: "<<getKisiID()<<endl;
	}
};

#endif