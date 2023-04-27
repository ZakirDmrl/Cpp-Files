#include <iostream>
using namespace std;
#include <cstring>
#include "header.h"
Student::Student(int no1,string name1,string s1){
    setNo(no1);
    setName(name1);
    setSurname(s1);
}
void Student::print(){
    cout<<getNo()<< ", "<< getSurname() << ", "<< getName() <<endl;
}