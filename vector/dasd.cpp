#include <iostream>
#include <vector>
using namespace std;

void vavr(vector<int> v){
        int avr;
        int result=0;
        for(int i = 0; i <int(v.size());i++){
            result += v[i];
       }
       cout<<endl;
       avr = result/int(v.size());
       cout<<"\nVektor ortalmasi : "<<avr<<endl;
}
int main(){
vector<int>v1;
cout<<"Vektorun elemanlarini giriniz. Artık eleman girmek istemiyorsanız 0 giriniz."<<endl;
cout<<"Olusturulan vektorun elemanlari: ";
int c;
int i = 0;
cin>>c;
while(c != -1){
    cout<<c<<" ";
    v1[i] = c;
    i++;
    cin>>c;
}
vavr(v1);   
    
    
    
    return 0;
}