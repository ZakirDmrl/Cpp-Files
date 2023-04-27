#include<iostream>
using std::cout;
using std::endl;

inline int topla(int a,int b){
    return a+b;
}
int main()
{
int result = topla(10,10);
cout<< result<<endl;
}