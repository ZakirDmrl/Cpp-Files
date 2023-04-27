/*
 * date1.h
 *
 *  Created on: 11 Şub 2023
 *      Author: USER
 */

#ifndef DATE1_H_
#define DATE1_H_
#include <iostream>
using std::ostream;

class Date{
	friend ostream &operator<<(ostream &, const Date &);

public:
	Date( int m = 1 , int d = 2, int y = 1900 ); //constructor
	void setDate( int, int, int ); //set the date
	Date &operator++(); // pre increment operator(ön artış operatorü)
	Date operator++(int);//post increment operator(artış sonrası operatorü)
	const Date &operator++(int); // add days, modify object
	bool leapYear(int) const; // is this a leap year (bu artık yıl mı? 366 gün)
	bool endOfMonth( int ) const; //is this end of month?
private:
	int month;
	int day;
	int year;
	static const int days[]
};






#endif /* DATE1_H_ */
