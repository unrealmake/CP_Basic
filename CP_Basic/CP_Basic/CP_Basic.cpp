// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //Input/Output Stream

#define NUMBER 100

using namespace std;

int main() // int = ���
{
	std::cout << "Hello World!\n"; // ;=��ħǥ ��Ȱ / cin, cout (�� �ƿ�)

	// std : standard
	cout << "Hello C++\n";
	cout << "C++ Programing\n";
	cout << 500 << endl; //endl = end line
	cout << NUMBER + 50 << endl;

	// Ű����, ����� : ����, ��ɹ�
	// Ű���� : ���� Ÿ�� ����
	int Number1; // ���� ����
	Number1 = 10; // �ʱⰪ ����

	int Number2 = 10; //���� ���� �� �ʱ�ȭ
	int Number3 = 1, Number4 = 2;
	Number3 = 5; //(������������ �ν��ؼ� �ᱹ�� 5)

	//��� (���� �Ұ��ϰ� ����)
	const int Number5 = 10;
	//Number5 = 30; //���� ������ �� ����

	//������ Ÿ�� - ���� ������ Ÿ�� - ������, �Ǽ���

	//������ Ÿ��(int : integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;

	//�Ǽ��� Ÿ��(float)
	float Num10 = 1.234f;
	double Num11 = 1.234;

	//���� ������ : ����(1��), ���ڿ�(2���̻�)
	//char : character
	//char Ÿ�� ���� ǥ�� : ' ' ���
	//���ڿ� : " " ���
	char Letter = 'a';

	// bool Ÿ�� ������
	// ��/���� ���� : True / False, Yes / No, On / Off

	bool Condition = true;

	// auto ���� Ű����
	auto AutoNum = 10;

	cout << Number1 << endl;

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// ���� ���꿡�� �ݺ� ������ ������ ����
	int Inc = 30;

	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;
	Inc = Inc + 3;
	cout << Inc << endl;

	Inc = Inc + 3;
	Inc += 3;

	Inc = Inc + 1;
	Inc += 1;
	Inc++; // C => C++ => C++++

	Inc = Inc - 1;
	Inc -= 1;
	Inc--;
}

// ��Ʈ�� ����Ʈ�� ���� ����
/*
	bit : ��ǻ�� ������ ������ �ּҴ���
	byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
	1byte = 8bit

	2���� ���� ������ : 0,1
	���� ���
	2^0 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256(8��Ʈ), 512, 1024

	�� ǥ��, ���� ǥ��, ������ �ּ� ǥ�� : 1byte �������� Ȯ��
*/
