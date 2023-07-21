#include <iostream>
#include <vector>

using namespace std;
int main(){
vector<int>v1(10);
cout<<"SIZE : "<<v1.size()<<endl;
cout<<"Veri gir: ";
for(int i = 0 ; i<int(v1.size());i++){
    cin>>v1[i];
}
cout<<"\nVector ilk hali: ";
for(int i = 0 ; i<int(v1.size());i++){
    cout<<v1[i];
}
cout<<"\nVector son hali: ";
for(int i = 0; i<10;i++){
    v1.insert(v1.begin()+i,1,v1.back());
    v1.pop_back();
    cout<<v1.at(i);
}
for(int j = 0 ; j<int(v1.size()); j++){
    for(int i = 0 ; i < int(v1.size()) ; i++ ){
        if(v1[i]>v1[i+1]){
            if( i+1 !=v1.size() ){
            swap(v1[i],v1[i+1]);
            }
        }
    }
}
    for(int i = 0 ; i<int(v1.size());i++){
        cout<<v1[i]<<" ";
}




    return 0;
}