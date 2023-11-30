#include "io.h"

void Type()
{
	int Kor = 90;
	int Eng = 80;
	int Math = 75;
	float Average = 0;

	// 1. 변수, 데이터값이 타입이 동일
	// 2. 연산 결과가 현실화 되는 결과값 고려
	// 형변환 (Type Cast)
	Average = (float (Kor) + float (Eng) + float (Math)) / 3;

	cout << Average << endl;
}