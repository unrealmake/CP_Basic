#include "io.h"

void Type()
{
	int Kor = 90;
	int Eng = 80;
	int Math = 75;
	float Average = 0;

	// 1. ����, �����Ͱ��� Ÿ���� ����
	// 2. ���� ����� ����ȭ �Ǵ� ����� ���
	// ����ȯ (Type Cast)
	Average = (float (Kor) + float (Eng) + float (Math)) / 3;

	cout << Average << endl;
}