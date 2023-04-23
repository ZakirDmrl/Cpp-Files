#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4};
    
       cout<<"SIZE : "<<v1.size()<<endl;
    cout<<"CAPACITY : "<<v1.capacity()<<endl;
    v1.insert(v1.begin(),3); // 1.indise 3 elemanını ekler.
    v1.insert(v1.begin(),3,2); // 1.indisten itibaren 3 tane 2 ekler. 
    cout<<"SIZE : "<<v1.size()<<endl;
    cout<<"CAPACITY : "<<v1.capacity()<<endl;
for(int i =0 ; i<v1.size();i++){
    cout<<v1[i]<<" ";
}
    v1.erase(v1.begin()); // başlangiçtaki eleman silindi
    cout<<"\nSIZE : "<<v1.size()<<endl; // size azaldı 
    cout<<"CAPACITY : "<<v1.capacity()<<endl; // kapasite sabit kaldı
    v1.shrink_to_fit(); // capacity de size ile aynı olur.
    cout<<"shrink_to_fit after than v1.capacity = "<<v1.capacity()<<endl;
for(int j =0 ; j<v1.size();j++){
    cout<<v1[j]<<" ";

}
// OR
cout<<endl;
for(auto itr = v1.begin(); itr !=v1.end();itr++){
    cout<<*itr<<" ";
}



    return 0;
}