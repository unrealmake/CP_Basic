#include "Ex09_person.h"
void PrintStudent()
{
	CStudent s1;
	// �̸�(Name), ����(Age), ����(Gender)
	//=> CPerson Class�� �ִ� ���� ���
	// ID, ���� => CStudent Class���� ���
	s1.Set("�赹��", 22, 1, 1000, "�κ� ����");
	s1.Print();

}