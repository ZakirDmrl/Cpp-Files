#include <iostream>
using namespace std;

int main(){
int a = 5;
int *Ptr=&a;
int result = 5* *Ptr;
cout<<result;

    return 0;
}