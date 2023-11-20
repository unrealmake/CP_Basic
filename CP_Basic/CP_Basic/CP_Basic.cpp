// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //Input/Output Stream

#define NUMBER 100

using namespace std;

int main() // int = 출력
{
	std::cout << "Hello World!\n"; // ;=마침표 역활 / cin, cout (인 아웃)

	// std : standard
	cout << "Hello C++\n";
	cout << "C++ Programing\n";
	cout << 500 << endl; //endl = end line
	cout << NUMBER + 50 << endl;

	// 키워드, 예약어 : 선언문, 명령문
	// 키워드 : 변수 타입 선언
	int Number1; // 변수 선언
	Number1 = 10; // 초기값 대입

	int Number2 = 10; //변수 선언 및 초기화
	int Number3 = 1, Number4 = 2;
	Number3 = 5; //(내림차순으로 인식해서 결국은 5)

	//상수 (변경 불가하게 고정)
	const int Number5 = 10;
	//Number5 = 30; //값을 수정할 수 없음

	//데이터 타입 - 숫자 데이터 타입 - 정수형, 실수형

	//정수형 타입(int : integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;

	//실수형 타입(float)
	float Num10 = 1.234f;
	double Num11 = 1.234;

	//문자 데이터 : 문자(1개), 문자열(2개이상)
	//char : character
	//char 타입 문자 표현 : ' ' 사용
	//문자열 : " " 사용
	char Letter = 'a';

	// bool 타입 데이터
	// 참/거짓 구분 : True / False, Yes / No, On / Off

	bool Condition = true;

	// auto 선언 키워드
	auto AutoNum = 10;

	cout << Number1 << endl;

	int Arithmetic1 = 30;
	int Arithmetic2 = 17;

	cout << Arithmetic1 + Arithmetic2 << endl;
	cout << Arithmetic1 - Arithmetic2 << endl;
	cout << Arithmetic1 * Arithmetic2 << endl;
	cout << Arithmetic1 / Arithmetic2 << endl;
	cout << Arithmetic1 % Arithmetic2 << endl;

	// 증감 연산에는 반복 실행의 개념이 포함
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

// 비트와 바이트에 대한 이해
/*
	bit : 컴퓨터 데이터 저장의 최소단위
	byte : 컴퓨터 정보 저장의 최소단위(8bit)
	1byte = 8bit

	2진수 숫자 데이터 : 0,1
	진법 계산
	2^0 ~ 2^10 : 2, 4, 8, 16, 32, 64, 128, 256(8비트), 512, 1024

	색 표현, 문자 표현, 아이피 주소 표현 : 1byte 기준으로 확장
*/
