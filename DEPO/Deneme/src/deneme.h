/*
 * deneme.h
 *
 *  Created on: 20 Şub 2023
 *      Author: USER
 */

#ifndef DENEME_H_
#define DENEME_H_

class Employee {

public:
	Employee( const char *,const char *); //constructor
	~Employee() ; //destructor
	const char *getFirstName() const;
	const char *getLastName() const;
	virtual double earings() const;
	virtual void print() const;
private:
	char *firstName;
	char *lastName;

};



#endif /* DENEME_H_ */
