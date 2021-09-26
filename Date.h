#pragma once
class Date
{

	
public:

	enum Month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
	
	bool is_date();
	bool leapyear(int y_check);
	
	Date(int d_in, int m_in, int y_in);


private:
	
	int d;
	Month m;
	int y;

	static const int days_in_month[12];

};

