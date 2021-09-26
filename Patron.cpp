#include "Patron.h"

Patron::Patron(string fname_in, string lname_in, int card_num_in, int fee_size_in, bool is_pay_in)
	:firstname(fname_in), lastname(lname_in), 
	card_number(card_num_in), fee_size(fee_size_in), is_pay(is_pay_in)
{
}

string Patron::get_patron_name()
{
	return firstname + " " + lastname;
}

int Patron::get_cardnumber()
{
	return card_number;
}

int Patron::get_fee_size()
{
	return fee_size;
}

bool Patron::get_is_pay()
{
	return is_pay;
}

void Patron::set_fee(int set_size)
{
	fee_size = set_size;
}

bool is_he_pay(Patron pat1) 
{
	return pat1.get_is_pay();
}