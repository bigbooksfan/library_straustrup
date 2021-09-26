#include "Date.h"



bool Date::is_date()
{

	if (d < 0 || d > days_in_month[Month(m)]) return false;
	if (m==1 && !(leapyear(y)) && d == 29) return false;

	return true;
}

bool Date::leapyear(int y_check)
{

	if (!(y_check % 400)) return true;
	else
		if (!(y_check % 100)) return false;
		else
			if (!(y_check % 4)) return true;


	return false;

}

Date::Date(int d_in, int m_in, int y_in)
{

	d = d_in;
	m = Month(m_in);
	y = y_in;

}
