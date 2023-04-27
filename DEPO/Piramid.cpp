#include<iostream>
#include <cmath>
using namespace std;

class Piramit{
public:
    Piramit(int = 0, int = 0){} // default constractor

void setUzunluk(int yu,int tu){
    setyuzeyUzunluk(yu);
    settabanUzunluk(tu);
    setyukseklik();
    }
void setyuzeyUzunluk(int yu){
    yuzeyUzunluk = yu;
    }
void settabanUzunluk(int tu){
    tabanUzunluk = tu;
}
void setyukseklik(){
    yukseklik = sqrt((yuzeyUzunluk*yuzeyUzunluk)-(tabanUzunluk*tabanUzunluk));
}
float Alan(){
    float yanalalan = (4*tabanUzunluk)*yukseklik/2;
    float tabanalan = (tabanUzunluk * tabanUzunluk);
    float result;
    result = yanalalan + tabanalan;
    return result;
}
float Hacim(){
    float tabanalan = (tabanUzunluk * tabanUzunluk);
    float result;
    result = (tabanalan*yukseklik)/3;
    return result;
}

private:
    int yuzeyUzunluk;
    int tabanUzunluk;
    float yukseklik;

};

int main(){
Piramit P1;
int yu,tu;
cout<<"Yuzey uzunlugu: ";
cin>>yu;
cout<<endl;
cout<<"Taban Uzunlugu: ";
cin>>tu;
cout<<endl;
P1.setUzunluk(yu,tu);
cout<<"Alan: "<<P1.Alan()<<endl;
cout<<"Hacim: "<<P1.Hacim()<<endl;
    return 0;
}
