#include <iostream>
#include <cmath>

using namespace std;

int main(){
char choice;
cout<<"Harf notunu gir: ";
cin>>choice;
    switch (choice)
    {
    case 'A':
        cout<<"Muhteşem!:D";
        break;
    case 'B':
        cout<<"Harika!:D";
        break;
    case 'C':
        cout<<"Tebrikler!:D";
        break;
    case 'D':
        cout<<"Dersi geçtin!:)";
        break;
    case 'F':
        cout<<"Tekrar çalışmalısın";
        break;

    default:
        cerr<<"Yanlış parametre";
        exit(1);
    }
cout<<"Notunuz: "<< choice;



}