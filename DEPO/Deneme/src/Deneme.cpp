//============================================================================
// Name        : Deneme.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <cassert>
#include "deneme.h"
using std::cout ;

Employee::Employee(const char *first, const char *last)
{
	firstName = new char [ strlen ( first ) +1];
	assert( firstName != 0); // test that new worked
	strcpy( firstName, first);
	lastName = new char [ strlen ( last ) +1];
	assert( lastName != 0); // test that new worked
	strcpy( lastName, last);
}
Employee::~Employee()
{
	delete [] firstName;
	delete [] lastName;
}
const char *Employee::getFirstName() const
{
	return firstName;
}
const char *Employee::getLastName() const
{
	return lastName;
}
int main() {

	return 0;
}


