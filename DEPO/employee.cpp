#include<iostream>
using namespace std;
struct  Employee{
    int id;
    int age;
    float maas;
};
Employee Creat();
float CalculateMaas(struct Employee employee);

void main(){
    struct Employee employee;
    int i;
    float result= 0.0;
    for(i=1;i<4;i++){
        employee = Creat();
        result += CalculateMaas(employee);
    }
    cout<< result;
}

Employee Creat(){
   struct Employee employee;
    cout<<"id,age,maas: ";
    cin>> employee.id >>employee.age>>employee.maas;
    return employee;
   
}

float CalculateMaas(struct Employee employee)
{   
    int result;
    result = employee.maas * 30;
    return result;
}
