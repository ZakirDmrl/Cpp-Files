//============================================================================
// Name        : MySecont_Program.cpp
// Author      : Muhammed Zakir DEMIREL(Compiter Engineer form IZU)
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Factorial calculation in C++, Ansi-style
//============================================================================

#include <iostream>
#include<windows.h>
#include<clocale>
using namespace std;
void Factorial_Calculator(int );//Prototif
int main() {
	setlocale(LC_ALL,"Turkish");//Türkçe karakter için #clocale
	//Admission to the program
	cout<<"*********************************************************************************************************"<<endl
		<<"                                       MY SECONT PROGRAM                                                 "<<endl
	    <<"Hello,Wellcome to My Program,This program factorial calculation according to of user entered input value."<<endl
	    <<"*********************************************************************************************************"<<endl;
	//Startup
	system("cls");

	int a;
	cout<<"Enter type int value: ";
	cin>>a;
	Factorial_Calculator(a);

	return 0;
}
void Factorial_Calculator(int value){
	int result=1;
	int i;
	if(value<0){
		cout<<"Please enter a possitive value."<<endl;
		exit(1);
	}
	else{
		for(i=1;i<=value;i++){
			result*= i;
		}
	}
	cout<<"Result is "<< result<<endl;

}
