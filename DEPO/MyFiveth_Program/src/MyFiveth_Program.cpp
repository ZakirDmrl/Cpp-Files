//============================================================================
// Name        : MyFiveth_Program.cpp
// Author      : Üstat Z
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Find Electric Force and Extent in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#define k (8.99 * pow(10,9));
using namespace std;
class Electric{
public:
	Electric(double aq1=0,double aq2=0,double ar1=0,double ar2=0){
		setq1(aq1);
		setq2(aq2);
		setr1(ar1);
		setr2(ar2);
	}
	double Force()
	{
		double k1 = k;
		return (k1*q1*q2)/(r1*r2);
	}
	double Extent(){
		double k1 = k;
		return (k1*q1*q2)/(r1*r2);
	}
	void setq1(double aq1)
	{q1 = aq1 > 0 ? aq1:0;}
	void setq2(double aq2)
	{q1 = aq2 > 0 ? aq2:0;}
	void setr1(double ar1)
		{r1 = ar1 > 0 ? ar1:0;}
	void setr2(double ar2)
		{r2 = ar2 > 0 ? ar2:0;}
	double getq1(){return q1;}
	double getq2(){return q2;}
	double getr1(){return r1;}
	double getr2(){return r2;}
private:

	double q1;
	double q2;
	double r1;
	double r2;
};

int main() {
	Electric E1(10,10,10,10);
	cout<<"Force: "<<E1.Force()<<endl;
	cout<<"Extent: "<<E1.Extent()<<endl;
	return 0;
}
