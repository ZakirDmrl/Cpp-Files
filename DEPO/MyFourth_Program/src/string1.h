/*
 * string1.h
 *
 *  Created on: 10 Şub 2023
 *      Author: USER
 */

#ifndef STRING1_H_
#define STRING1_H_

#include <iostream>

using std::ostream;
using std::istream;

class String {
	friend ostream &operator<<( ostream &, const String &);
	friend istream &operator>>( istream &, String &);

public:
	String( const char * = ""); //
	String( const String & ); // copy constructor
	~String(); // destructor
	const String &operator=( const String &); // assignment
	const String &operator+=( const String &); // concatenation
	bool operator!() const; // is String empry?
	bool operator==( const String & ) const; // test s1 == s2
	bool operator<( const String &) const; // test s1 < s2
	bool operator!=( const String &right ) const{
		return !(right == *this);
	}
	// test s1 != s2
	bool operator!=( const String & right ) const
	 { return !( *this == right ); }

	 // test s1 > s2
	bool operator>( const String &right ) const
	 { return right < *this; }

	 // test s1 <= s2
	bool operator<=( const String &right ) const
	 { return !( right < *this ); }

	 // test s1 >= s2
	bool operator>=( const String &right ) const
	 { return !( *this < right ); }
	char &operator[]( int ); // subscript operator
	const char &operator[]( int ) const; // subscript operator
	 String operator()( int, int ); // return a substring
	 int getLength() const; // return string length

private:
	int length; // string length
	char *sPtr; // pointer to start of string
	void setString( const char * ); // utility function
};




#endif /* STRING1_H_ */
