#pragma once
class ISBN_code
{
public:

	ISBN_code(int g_in, int l_in, int p_in, int t_in, char c_in);

	friend bool operator==(const ISBN_code c1, const ISBN_code c2);

private:

	int group_code;
	int language_code;
	int publisher_code;
	int title_code;
	char checksum;

};

