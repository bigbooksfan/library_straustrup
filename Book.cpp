#include "Book.h"
#include <iostream>

static const vector<string> genre_names =
{ "poetry", "fantastic", "fantasy", "science", "fiction", "periodic", "other " };

Book::Book(ISBN_code ISBN_in, string book_name_in, 
	string author_name_in, Date reg_date_in, Genre gen_in)
	: ISBN(ISBN_in), book_name(book_name_in), 
	author_name(author_name_in),reg_date(reg_date_in), 
	is_avalible(true), genre(gen_in)
{

}

string Book::get_bookname()
{
	return book_name;
}

string Book::get_author()
{
	return author_name;
}

bool Book::Is_avalible(string is_av_name)
{

	return (is_av_name == book_name) ? is_avalible : false;

}

ostream& operator<<(ostream& os, Book b_out)
{
	
	os << "Book: " << b_out.book_name 
		<< ", author: " << b_out.author_name
		<< ", genre: " << genre_names[b_out.genre]
		<< ", avalibility = " << b_out.is_avalible << endl;

	return os;

}

bool operator==(const Book b1, const Book b2)
{
	if (b1.ISBN == b2.ISBN) return true;

	return false;
}

bool operator!=(const Book b1, const Book b2)
{
	if (b1.ISBN == b2.ISBN) return false;

	return true;
}
