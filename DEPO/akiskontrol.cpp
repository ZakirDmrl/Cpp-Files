#include <iostream>
using namespace std;

int main(){
    cout<<"Program baslangici."<<endl;
    int num;
   
    start:
        cout<<"Num: ";
        cin>>num;
    while (num <= 0)
    {
        cout<<"Numara 0 dan buyuk olmali."<<endl;
        goto start;
        
    }
    cout << "Basarili";
    

    
}