#include <iostream>
using namespace std;
int getFactorialW(int value){
    int result = 1;

    if(value>=0){
        while (value>0)
        {
            result *= value;
            value--;
            
        }
    }
    else{
        return 0;
    }
    return result;

    
}
int getFactorialF(int value){
    int result = 1;

    if(value>=0){
        for(int i=value;i>0;i--)
        {
            
            result *= i;
            
        }
    }
    else{
        return 0;
    }
    return result;

    
}
int main(){
int value;
cout<<"Value: ";
cin>>value;
cout<<"While ile fact."<<getFactorialW(value)<<endl;
cout<<"For ile fact."<<getFactorialF(value)<<endl;



    return 0;
}