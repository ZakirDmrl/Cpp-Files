//============================================================================
// Name        : MyThird_Program.cpp
// Author      : Muhammed Zakir DEMİREL
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Local Library in C++, Ansi-style
//============================================================================


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Book{
		int Num;
		string Name="Any Book";
		string Author="Anonymous";
		bool Editor_Choice=0;
		float Price=100;
};
void Select_Book();
void Add_Book();
//void Delete_Book();
int main() {
	cout<<"***********************************************************************************"<<endl
			<<"                                 MY Third PROGRAM                              "<<endl
		    <<"Hello,Welcome to My Program,This program is created for local library selection"<<endl
		    <<"*******************************************************************************"<<endl;
	cout<<"\n\n\n"
		<<"LOCAL LİBRARY\n"<<endl
		<<"1-)Select Book"<<endl
		<<"2-)Add Book"<<endl
		<<"3-)Delete Book"<<endl
		<<"4-)Exit Library\n"<<endl;
	int choice;
	cout<<"Please enter the your choice";
	cin>>choice;
	switch(choice){
		case 1:
				Select_Book();
			break;

		case 2:
				Add_Book();
			break;
		case 3:
				cout<<"Burasi daha yapim asamasinda..";
			break;
		case 4:
				exit(1);
				break;
		default:
			cout<<"Wrong Choice\n";
	}


	return 0;
}
void Select_Book(){
	ifstream fp;
	struct line;
	fp.open("Library.txt");
	while(getline(fp, line))
	{
		cout<<line;

	}
}
void Add_Book(){
	ofstream fp;
	struct Book b;
	cin>>b.Num>>b.Name>>b.Author>>b.Editor_Choice>>b.Price;
	fp.open("Library.h");
	fp<<"#: "<<b.Num<<" Name: "<<b.Name<<" Author: "<<b.Author<<" Editor Choice"<<b.Editor_Choice<<" Price: "<<b.Price<<"\n";
}




