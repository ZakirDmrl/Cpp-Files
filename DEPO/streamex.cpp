#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
template< class T >
class Stack {
public:
	Stack(int = 10);
	~Stack(){delete [] stackPtr;}
	bool push( const T&);
	bool pop( T&);
private:
	int size;
	int top;
	T *stackPtr;

	bool isEmpty() const { return top == -1;}
	bool isFull() const { return top == -1;}

};

template<class T>
Stack<T>::Stack(int a){
	size = a > 0 ? a : 10;
	top = -1;
	stackPtr = new T[size];
}

template<class T>
bool Stack<T>::push(const T &pushValue )
{
	if( !isFull() ){
		stackPtr[++top ]= pushValue;
		return true;
	}
	return false;
}


template <class T>
bool Stack<T>::pop( T &popValue ){
	if( !isEmpty()){
		popValue == stackPtr[ top-- ];
		return true;
		
	}
	return false;
}


int main(){
	Stack<double> doubleStack(5);
	double f= 1.1;
	cout <<"Pushing elemants onto doubleStack\n";
	while ( doubleStack.push(f) ){
		cout << f << ' ';
		f += 1.1;
	}
	cout<<"\nStack is full. Cannot push"<< f <<"\n\nPopping elemants from doubleStack\n";
	while ( doubleStack.pop(f))
		cout<<f<<' ';
	
	cout<< "\nStack is empty.Cannot pop\n";
	Stack< int > intStack; 
	int i = 1;
	while ( intStack.push(i)){
		cout << i << ' ';
		i++;
	}
	cout << "Stack is full. Connot push"<< i
		<<"\n\nPopping elements from intStack\n";
	while (intStack.pop(i)){
		cout<<i<<' ';
	}
	cout<< "\nStack is empty.Cannot pop\n";
	return 0;
}
