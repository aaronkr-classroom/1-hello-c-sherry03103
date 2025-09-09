#include <stdio.h>

int main(void) {
	int age = 23;
	char grade = 'A';// 작은 따옴표
	char name[] = "Aaron"; // 큰 따옴표
	// string 써야하나 정의가 안됨
	// char[]사용 시 문자열 받아들일 수 있음
	// ['A', 'a', 'r', 'o', 'n']

	printf("Hello World!~\n");
	printf("My name is %s.\n", name); //s=string
	printf("I'm %d years old.\n", age); //d=digit
	printf("I want a %c grade.\n", grade); //c=character
	//\t : 들여쓰기
	return 0;
}