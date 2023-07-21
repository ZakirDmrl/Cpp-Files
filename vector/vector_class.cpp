#include <iostream>
#include <vector>
using namespace std;
class vec2Q34{
public:
    vec2Q34(vector<int>v1){
        v = v1;
    }
    void vprint(){
        for(int i = 0; i <int(v.size());i++){
            cout<<v[i]<<" ";
        }

    }
    void vavr(){
        int avr;
        int result=0;
        for(int i = 0; i <int(v.size());i++){
            result += v[i];
       }
       cout<<endl;
       avr = result/int(v.size());
       cout<<"Vektor ortalmasi : "<<avr<<endl;
    }
    void vpush(int a){
        v.push_back(a);
        cout<<"vpush fonk. sonrasi vektor:"<<endl;
        for(int i = 0; i <int(v.size());i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    void vpop(){
        v.pop_back();
        cout<<"vpop fonk. sonrasi vektor:"<<endl;
        for(int i = 0; i <int(v.size());i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    void vreverse(){
    int i=0;
    cout<<"vreverse fonk. sonrasi vektor:"<<endl;
    for(i=0;i<int(v.size());i++){
        v.insert(v.begin()+i,1,v.back());
        v.pop_back();
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    }
    void varrangementBK(){
        int temp;
        for(int j = 0; j<int(v.size()); j++){
            for(int i = 0 ; i < int(v.size()) ; i++ ){
                if(v[i] > v[i-1]){
                    temp = v[i] ;
                    v[i] = v[i-1];
                    v[i-1] = temp;
                }
            }
        }
        for(int i = 0; i < int(v.size());i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
    void varrangementKB(){
        int temp;
        for(int j = 0; j<int(v.size()); j++){
            for(int i = 0 ; i < int(v.size()) ; i++ ){
                if(v[i] > v[i+1]){
                    temp = v[i] ;
                    v[i] = v[i+1];
                    v[i+1] = temp;
                }
            }
        }
        for(int i = 0; i < int(v.size());i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    
    }
private:
vector<int>v;

};
int main(){
    int a = 6;

    vector<int>v1{3,6,2,5,7};
    vec2Q34 ex(v1);

    ex.vprint();
    ex.vavr();
    ex.vpush(a);
    ex.vpop();
    ex.vreverse();
    ex.varrangementBK();
    ex.varrangementKB();


    return 0;
}