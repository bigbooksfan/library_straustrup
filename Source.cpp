#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "Book.h"
#include "ISBN_code.h"
#include "Date.h"
#include "Patron.h"

using namespace std;

int day, mon, year;
bool is_book_exist;

vector<Book> library;

const int Date::days_in_month[12]
= { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int i;
string n1, n2;

string CreateName()
{

	n1.clear();
	n2.clear();

	n1.push_back(rand() % 26 + 0x41);
	for (i = 0; i < (rand() % 7 + 3); ++i) n1.push_back(rand() % 26 + 0x61);

	n2.push_back(rand() % 26 + 0x41);
	for (i = 0; i < (rand() % 7 + 3); ++i) n2.push_back(rand() % 26 + 0x61);

	return n1 + " " + n2;
}


int main() {

	srand(time(0));

	ISBN_code b1_isbn(0, 0, 0, 0, '0');
	ISBN_code b2_isbn(1, 0, 0, 0, '0');

	Date b1_date(1, 0, 2011);

	string a = "Book Name";

	Book b1(b1_isbn, a, CreateName(), b1_date, Book::periodic);
	Book b2(b2_isbn, "Book Name 2", CreateName(), b1_date, Book::fantasy);

	library.push_back(b1);
	library.push_back(b2);
	library.push_back(b2);
	
	cout << b1;
	cout << library[1];

	string b = "Book Name1";

	is_book_exist = 0;
	for (auto i : library) 
		if (b == i.get_bookname()) {
			cout << i.Is_avalible(b) << endl;
			is_book_exist = 1;
		}
	if (!is_book_exist) cout << "Not book you are looking for" << endl;

	cout << (b1 == b2) << endl;

}
