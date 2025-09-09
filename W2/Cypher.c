//cypher.c
#include <stdio.h>
#include <string.h>

void cypher(char* msg, int sft) {
	char ch;
	int i;
	for (i = 0; msg[i] != '\0'; ++i) {
		ch = msg[i];

		//암호(대문자)
		if (ch > 'A' && ch <= 'Z') {
			ch = ch + sft;

			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}
			else if (ch < 'A') {
				ch = ch + 'Z' - 'A' + 1;
			}

			msg[i] = ch;
		}

		//암호(소문자)
		if (ch > 'a' && ch <= 'z') {
			ch = ch + sft;

			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			else if (ch < 'a') {
				ch = ch + 'z' - 'a' + 1;
			}

			msg[i] = ch;
		}
	}
}

int main(void) {
	//사용자에게 메시지 받기
	char message[100];
	printf("Enter a message: ");
	fgets(message, sizeof(message), stdin); //s=string, stdin=standard input string

	//암호 값 받기(문자 이동 수 받기)
	int shift;
	printf("Enter shift value: ");
	scanf_s("%d", &shift);//scanf()는 overflow위험이 있음

	//암호화하기
	cypher(message, shift);

	//암호화된 메시지 출력하기
	printf("Encrypted! %s", message);

	return 0;
}