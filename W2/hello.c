#include <stdio.h>

int main(void) {
	int age = 23;
	char grade = 'A';// ���� ����ǥ
	char name[] = "Aaron"; // ū ����ǥ
	// string ����ϳ� ���ǰ� �ȵ�
	// char[]��� �� ���ڿ� �޾Ƶ��� �� ����
	// ['A', 'a', 'r', 'o', 'n']

	printf("Hello World!~\n");
	printf("My name is %s.\n", name); //s=string
	printf("I'm %d years old.\n", age); //d=digit
	printf("I want a %c grade.\n", grade); //c=character
	//\t : �鿩����
	return 0;
}