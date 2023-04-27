#ifdef BOOK_H
#include BOOK_H
class Book{
public:
	Book();
	void Select_Book();
	void Add_Book();
	void Delete_Book();

private:
	int Num;
	string Name="Any Book";
	string Author="Anonymous";
	bool Editor_Choice=0;
	float Price=100;
};


#endif
