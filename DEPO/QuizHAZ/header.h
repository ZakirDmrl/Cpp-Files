#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <cstring>
using namespace std;


class Student{
public:
    Student(){}//Default Constactor.
    Student(int,string,string);
    void setNo(int no1){no = (no1>0 ? no1:0);}
    void setName(string name1){name = (name1!=" " ? name1:0);}
    void setSurname(string s1){surname = (s1!=" " ? s1:0);}
    int getNo(){ return no;}
    string getName(){return name;}
    string getSurname(){return  surname;}
    void print();
private:
int no;
string name;
string surname;

};



#endif