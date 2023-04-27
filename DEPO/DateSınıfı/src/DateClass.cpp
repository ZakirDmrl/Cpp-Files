//============================================================================
// Name        : DateClass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int size;
	cout<<"Eleman sayisini girin: ";
	cin>> size;
	int *ptr = new int[size];
	for(int i=0;i<size;i++){
		cout << i+1 <<".Deger: ";
		cin >> ptr[i];
	}
	for(int i=0;i<size;i++){
		cout << i+1 << ".Eleman: " << ptr[i]<<endl;

	}
	delete [] ptr;
	return 0;
}
