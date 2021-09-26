#pragma once
#include <string>

using namespace std;

class Patron
{

public:

	Patron(string fname_in, string lname_in, int card_num_in, 
		int fee_size_in, bool is_pay_in);

	string get_patron_name();
	int get_cardnumber();
	int get_fee_size();
	bool get_is_pay();

	void set_fee(int set_size);

private:

	string firstname;
	string lastname;
	int card_number;
	int fee_size;
	bool is_pay;

};

bool is_he_pay(Patron pat1);