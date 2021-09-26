#include "ISBN_code.h"
#include <iostream>

ISBN_code::ISBN_code(int g_in, int l_in, int p_in, int t_in, char c_in)
	: group_code (g_in), language_code(l_in),
	publisher_code (p_in), title_code (t_in), checksum (c_in)
{
	
}

bool operator==(const ISBN_code c1, const ISBN_code c2)
{

	if (c1.group_code != c2.group_code) return false;
	if (c1.language_code!= c2.language_code) return false;
	if (c1.publisher_code!= c2.publisher_code) return false;
	if (c1.title_code!= c2.title_code) return false;
	//if (c1.group_code != c2.group_code) return false;

	return true;
}
