#pragma once

class Phone
{
private:
	char Company;
	int ModelNumber;
public:
	Phone();
	Phone(char Company, int Number);
	~Phone();

	void PrintCompany();
	void PrintModelNumber();
};