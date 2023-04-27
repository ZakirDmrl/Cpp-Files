#include <iostream>
#include <vector>
using namespace std;

void my_Reverse(vector<int>&v1){
    int i=0;
    for(i=0;i<v1.size();i++){
        v1.insert(v1.begin()+i,1,v1.back());
        v1.pop_back();
        cout<<v1.at(i)<<" ";
    }
  
}

int main()
{
    vector<int>v1{1,2,3,4,5};
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
    my_Reverse(v1);
    
    return 0;
}
