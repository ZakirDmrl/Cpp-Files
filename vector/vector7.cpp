#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
string tamami;
vector<string>v;
cout<<"Luften bir cumle giriniz: "<<endl<<">";
char a;
while(cin >> tamami){
    
    for(int i = 0 ; i< int(tamami.size())/2; i++){
        swap(tamami[i],tamami[int(tamami.size())-1-i]);
    }
    v.push_back(tamami);
    a = getchar();
    if(a == '\n'){
        break;
    }
}

for(string n : v){
    cout<< n <<endl;
}

    return 0;
}