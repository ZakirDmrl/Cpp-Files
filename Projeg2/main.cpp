//Başlama tarihi 25/05/2023 Saat:   19.32
#include <cstdlib>	//system
#include <iomanip>	//setw
#include <fstream>
	void animation();
	void display();

#include "kitap.h"
#include "kisi.h"
#include "gorevli.h"
#include "musteri.h"

using namespace std;

void enterChoice();
void yaz_dostum(string filename,musteri&m1 ){
    fstream musteri_yazici(filename,ios::binary | ios::app);
    musteri_yazici << m1.getKisiAd() << " " << m1.getKisiSoyAd() << " " << m1.getMail() << " " << m1.getPassword()<<endl;
}
void oku_dostum(string filename){
    musteri m1;
    fstream musteri_okuyucu(filename,ios::binary | ios::in);
    string ad,soyad,mail,password;
    while(musteri_okuyucu >> ad >> soyad >> mail >> password){
        m1.setKisiAd(ad);m1.setKisiSoyAd(soyad);m1.setMail(mail);m1.setPassword(password);
        cout << m1.getKisiAd() << " " << m1.getKisiSoyAd() << " " << m1.getMail() << " " << m1.getPassword()<<endl;
    }
}
int main()
{
	system("cls");
   
	//animation();
	kitap k1{"zakir","demirhand",1,2,3};

	k1.yazdir();
	cout << "SISTEM BASLATILIYOR"<<endl;
    int choice ;
	enterChoice();

	return 0;
}
	void animation(){

    }
void giris(){
    oku_dostum("Musterilerim.bin");
}
void kayitOlustur(){
    system("cls");
    musteri m1;
    string ad;
    string soyad;
    string email;
    string password;
    cout << " Kayit menusuna hosgeldin."<<endl;
    start:

    cout << "Adinizi girin"<<endl<<">";cin >> ad; system("cls"); m1.setKisiAd(ad); m1.yazdirx(1);
    cout << "Soyadinizi girin"<<endl<<">";cin >> soyad; system("cls"); m1.setKisiSoyAd(soyad); m1.yazdirx(2);
    cout << "E-Mail girin"<<endl<<">";cin >> email; system("cls"); m1.setMail(email); m1.yazdirx(3);
    cout << "Parola girin:"<<endl<<">";cin >> password; system("cls"); m1.setPassword(password); m1.yazdirx(4);
    system("cls");
    yaz_dostum("Musterilerim.bin",m1);
}



void enterChoice(){
int menuChoice;
start:
 cout<<"\nSecenekler\n"
 <<"1 - Giris\n"
 <<"2 - Kayit Ol\n"
 <<"0 - Cikis\n\n=> " ;
 menu:
 cin>>menuChoice;
switch(menuChoice){
    case 1:
        giris();
        break;
    case 2:
        kayitOlustur();
        break;
    case 0:
        exit(0);
        break;
    default:
        goto menu;

}
goto start;

}