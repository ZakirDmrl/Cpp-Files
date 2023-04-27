//============================================================================
// Name        : MyFirst_Program.cpp
// Author      : Muhammed Zakir DEMİREL
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Process With Complex Numbers
//============================================================================
//includes

#include <iostream>
#include <fstream>
using namespace std;

struct Complex{
	float img;
	float reel;
};
//Prototifs
void Creat_Complex(struct Complex* ptr);
struct Complex Process_Complex(struct Complex c,struct Complex d);
int main() {
	struct Complex Compa,Compb,Compc;
	struct Complex *ptr1,*ptr2;
	ptr1 = &Compa;
	ptr2 = &Compb;
	Creat_Complex(ptr1);
	Creat_Complex(ptr2);
	Compc=Process_Complex(*ptr1,*ptr2);
	ofstream myfile ("File.txt");
	if (myfile.is_open())
	{
		myfile << "First Complex number is "<< Compa.img <<"i+"<<Compa.reel;
		myfile << "\n";
		myfile << "Second Complex number is "<< Compb.img <<"i+"<< Compb.reel;
		myfile << "\n";
		myfile << "Finaly Complex number is "<< Compc.img <<"i+"<< Compc.reel;
		myfile.close();
	}
	else{
		cout<<"Unable to open file.\n";
		exit(1);
	}
	return 0;
}
void Creat_Complex(struct Complex* ptr){
	cout<<"Enter the imaginary number: ";
	cin>>ptr->img;
	cout<<"Enter the reel number: ";
	cin>>ptr->reel;

}
struct Complex Process_Complex(struct Complex c,struct Complex d){
	struct Complex result;
	result.img=(c.img*d.reel)+(c.reel*d.img)-(c.img*d.img);
	result.reel=(c.img*d.img)+(c.reel*d.reel);
	return result;

}
