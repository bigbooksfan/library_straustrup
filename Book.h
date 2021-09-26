#pragma once
#include <string>
#include <vector>

#include "ISBN_code.h"
#include "Date.h"
#include "Patron.h"

using namespace std;

class Book
{

public:

	enum Genre {
		poetry, fantastic, fantasy, science, fiction, periodic, other
	};

	//static const vector<string> genre_names;

	Book(ISBN_code ISBN_in, string book_name_in, 
		string author_name_in, Date reg_date_in, Genre gen_in);

	string get_bookname();
	string get_author();

	bool Is_avalible(string is_av_name);

	friend ostream& operator<<(ostream& os, Book b_out);
	friend bool operator==(const Book b1, const Book b2);
	friend bool operator!=(const Book b1, const Book b2);
	
private:

	ISBN_code ISBN;
	string book_name;
	string author_name;
	Date reg_date;
	bool is_avalible;
	Genre genre;

	
};

