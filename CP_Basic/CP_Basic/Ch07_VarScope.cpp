#include "io.h"

int GlobalNumber = 10;
int i = 0;

void Sum() 
{
	int FunctionLocalNumber = 20;
	for (int BlockLocalNumber = 0; i < 3; i++)
	{
		cout << "Global : " << GlobalNumber + i << endl;
		cout << "FunctionLocalNumber : " << FunctionLocalNumber + i << endl;
	}
		//cout << "Global : " << GlobalNumber +1 << endl; i 인식 불가능
		cout << "FunctionLocalNumber : " << FunctionLocalNumber << endl;
}