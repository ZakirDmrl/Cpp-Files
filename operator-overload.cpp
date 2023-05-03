#include <iostream>

using namespace std;

class Complex{
public:
    Complex(int r=0, int i=0) : real(r),imag(i){}
    Complex operator * (Complex const rhs){
        Complex res;
        int real1,imag1;
        real1 = this->real;
        imag1 =this->imag; 
        this->real = (real1 * rhs.real) - (imag1 * rhs.imag);
        this->imag = (imag1 * rhs.real) + (real1 * rhs.imag);
        res.real = this->real;
        res.imag = this->imag;
        return res;
    }
    void print(){cout<< real << " + "<< imag<<"i"<<endl;}
private:
int real,imag;

};

int main(){
    Complex comp1(3, 5), comp2(2,4);
    comp1.print();
    comp2.print();
    Complex comp3 = comp1 * comp2;
    comp3.print();
    return 0;
}