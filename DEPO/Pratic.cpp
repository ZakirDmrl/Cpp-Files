#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

int main(){
int sayi;
int ters;
cout<<"Sayi gir: ";
cin>> sayi ;

while(sayi>10){
  ters = sayi %10;
  cout<<ters;
  sayi /=10;
}
cout<<sayi;

    return 0;
}
