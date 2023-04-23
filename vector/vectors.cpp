#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4};
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(5);// yani 4 elemanlıydı bir eleaman ekleyince catacity 2 katına çıktı size 8 olana kadar 8 olarak kaldı 
    cout<<"v1.size() = "<<v1.size()<<endl;
    cout<<"v1.capacity = "<<v1.capacity()<<endl;
    v1.push_back(5);// taki size 9 oldu capacity tekrar 2 kat artarak 18 oldu

    cout<<"v1.size() = "<<v1.size()<<endl;
    cout<<"v1.capacity = "<<v1.capacity()<<endl; // Vektorün boyutunu 2 ye katladı push_backten sonra
    // cout<<v1.clear()<<endl;
    // int avr1 = v1.at(0,0) + v1.at(1,0) + v1.at(1,0);
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    cout<<"v1.size() = "<<v1.size()<<endl; // size normal bir şekilde azaldı
    cout<<"v1.capacity = "<<v1.capacity()<<endl; //pop_back yapıp son elamnı silsem de capacity değerinde bir değişim olamadı
    v1.shrink_to_fit(); // capacity de size ile aynı olur.
    cout<<"shrink_to_fit after than v1.capacity = "<<v1.capacity()<<endl;
}