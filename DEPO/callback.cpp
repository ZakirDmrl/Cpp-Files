#include <iostream>
#include <cstring>
using namespace std;
int topla(int a , int b){
    return a + b;
} 

int getir(int(*fint)(int ,int ) ){
    int a,b;
    cin>>a >> b ;
    int x = fint(a,b);
    return x;
}

int main(){
int result = getir(topla);
cout << result<< endl;
return 0; 
}