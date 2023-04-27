#include <iostream>

using namespace std;

class BenimClass{
	int data;
	public:
		BenimClass(){
			data = 100;
		}
		void Yazdir1();
		void Yazdir2();
};
// Pointer Kullanmadan
void BenimClass::Yazdir1(){
	cout << data << endl;
}
// Pointer Kullanarak Nesnenin(a) i�aret�isi konumunda this
void BenimClass::Yazdir2(){
	cout << "benim adres = " << this << endl; 
	cout << this -> data<< endl;
}
int main(){
	BenimClass a;
	a.Yazdir1();
	a.Yazdir2();
	cout<< sizeof(a)<<endl;
	return 0;
}
