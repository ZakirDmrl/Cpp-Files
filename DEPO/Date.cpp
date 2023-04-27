//============================================================================
// Name        : izu.cpp
// Author      : Muhammed Zakir Demirel
// Version     : ~
// Copyright   : Your copyright notice
// Description : Overload in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Date{
public:
	int day;
	int mound;
	int year;
	Date(int g,int a,int y){
		day = g;
		mound = a;
		year = y;
		cout<<"Day: "<<day<<" Mound: "<<mound<<" Year: "<<year<<endl;
	}
	Date(int a, int y){
		day = 0;
		mound = a;
		year = y;
		cout<<"Day: "<<day<<" Mound: "<<mound<<" Year: "<<year<<endl;
	}
	Date(){
		day = 0;
		mound = 0;
		year = 0;
		cout<<"Day: "<<day<<" Mound: "<<mound<<" Year: "<<year<<endl;

	}
    ~Date(){}
};
int main() {
Date date1;
Date date2(2,3);
Date date3(1,2,3);

	return 0;
}
