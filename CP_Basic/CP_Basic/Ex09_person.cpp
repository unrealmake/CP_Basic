#include "Ex09_person.h"
void PrintStudent()
{
	CStudent s1;
	// 이름(Name), 나이(Age), 성별(Gender)
	//=> CPerson Class에 있는 내용 사용
	// ID, 전공 => CStudent Class에서 사용
	s1.Set("쇠돌이", 22, 1, 1000, "로봇 조종");
	s1.Print();

}