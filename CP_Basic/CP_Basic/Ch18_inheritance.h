#pragma once
class Car
{
public:
	int Year = 10;
protected:
	int Fuel;
};

class UsedCar : public Car
{
private:
	int Newprice = 30000000;
public:
	void PrintPrice();
};