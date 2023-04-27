//============================================================================
// Name        : My Notes
// Author      : Muhammed Zakir DEMİREL
// Version     : 1.0v
// Copyright   : Your copyright notice
// Description : Everything in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <set>
#include <string>
using namespace std;
/*
int main() {

// swap
int a=4,b=3;
swap(a,b);
cout<<"a is "<< a << endl;
cout<<"b is "<< b << endl;
// Diynamic Memory Usage
int *p,*q;
p= new int[2];
q= new int(9); //wrong usage:
cout<< *p;
cout<< *q;
// Matrix
int array[3][4];
for(int i=0;i<3;i++){
	for(int k=0;k<4;k++){
		cin>>array[i][k];
		cout<<array[i][k]<<endl;
	}
}

// empty -> #include <string>
string test;
while(test.empty()|| size() <= 5){
	cout<<"Type a string longer string."<< endl;
	cin>>test;

}

// Creating Class
class ComplexT{
	float real,img;
public:
	ComplexT(){    //Constructor Fonk.
		real=0;
		img=0;
	}
	ComplexT(float r){real=r;img=0;};
	ComplexT(float r,float i){real=r;img=i;};

};
void main(){
	ComplexT z1(0.3);
	ComplexT z2(0.5,1.2);



}

//Faktoriyel Örneği:
int main(){
	int a,i;
	int toplam=1;
	cout<<"FAKTORIYEL PROGRAMINA HOSGELDINIZ..."<<endl;
	baslat:
	cout<<"Bir sayi giriniz: ";
	cin>>a;
if(a>=0){
	for(i=1;i<=a;i++){
		toplam *= i;
	}
}
else{
	cout<<"Negitif sayi girmeyiniz."<<endl;
	cout<<endl;
	cout<<endl;
	goto baslat;
}
	cout<<toplam;



	return 0;
}


//HESAP MAKİNESİ
int main(){
cout<<"**************************************"<<endl;
cout<<"* *"<<endl;
cout<<"* HESAP MAKİNESİ *"<<endl;
cout<<"* *"<<endl;
cout<<"**************************************"<<endl;
cout<<endl;
baslat:
int a,b,sonuc;
char islem;
cout<<"Birinci sayiyi giriniz: ";
cin>>a;
cout<<"Islemi giriniz: ";
cin>>islem;
cout<<"Ikinci sayiyi giriniz: ";
cin>>b;
switch(islem){
case '+':

	sonuc=a+b;
	cout<<"Toplama isleminin sonucu: "<< sonuc <<endl;

case '-':

	sonuc=a-b;
	cout<<"Cikarma isleminin sonucu: "<< sonuc <<endl;

case '*':

	sonuc=a*b;
	cout<<"Carpma isleminin sonucu: "<< sonuc <<endl;

case '/':
{
	sonuc=a/b;
	cout<<"Bolme isleminin sonucu: "<< sonuc <<endl;
}
}
goto baslat;
return 0;
}
*/
int main()
{
int i, j;
int sayi;

cout <> sayi;
int s = (sayi + 1) / 2;//karmaşıklığı azaltmak için

for (i = 0; i < s; i++)//v harfi oluşturuyor.
{
for (j = 0; j < i; j++)//sol boşluk
{
cout << " ";
}
cout << "*";

for (j = 0; j < (2 * (s – i) – 3); j++)//iç boşluk azalan
{
cout << " ";
}

if (i != (s – 1))//orta nokta
{
cout << "*";
}
cout << "\n";
}
for (i = 0; i < s-1; i++)
{
for (j = 0; j < (s – 2 – i); j++)
{
cout << " ";
}
cout <= -1; j--)//iç boşluk artan
{
cout << " ";
}
cout << "*";

for (j = 0; j < (s – 2 – i); j++)
{
cout << " ";
}
cout << endl;
}
}
