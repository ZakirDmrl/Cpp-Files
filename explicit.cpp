#include <iostream>

using namespace std;

// // class Complex {
// // public:
// //     Complex(double r = 0.0,double i = 0.0) : real(r),imag(i){}
// //     bool operator == (Complex rhs)
// //     {
// //         return (real == rhs.real && imag == rhs.imag);
// //     }
// // private:
// //     double real;
// //     double imag;
// // };
// // Complex com1(3.0,0.0);

class Complex2 {
public:
   explicit  Complex2(double r = 0.0,double i = 0.0) : real(r),imag(i){}
    bool operator == (Complex2 rhs)
    {
        return (real == rhs.real && imag == rhs.imag);
    }
private:
    double real;
    double imag;
};
Complex2 com2(3.0,0.0);

int main(){
// // if(com1 == 3.0) // Same
// // cout << "Same";
// // else
// // cout << "Not Same";
// if(com2 == 3.0) // Compiler Error : no match for 'operator==' in 'com2 == 3.0e+0'
// cout << "Same";
// else
// cout << "Not Same";

if(com2 == (Complex2)3.0) //Same
cout << "Same";
else
cout << "Not Same";

// NOT: explicit, sabit bir ifadeyle kullanılabilir.
// Ancak, bu sabit ifade doğru olarak değerlendirilirse.
    return 0;
}