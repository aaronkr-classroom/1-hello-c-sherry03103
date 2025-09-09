//nums.c
#include<stdio.h>
#include<limits.h> // 최대최소값 볼 때

int main(void) {
	
	// (char)						(1byte)					(문자)
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);//c=char
	printf("Max: %d\n", CHAR_MAX);//limit.h의 함수
	printf("Min: %d\n", CHAR_MIN);



	// [signed short int]			(2byte)					(정수)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);//d=digit
	printf("Max: %d\n", SHRT_MAX);
	printf("Min: %d\n", SHRT_MIN);



	// unsigned short int		(2byte)					(정수)
	unsigned short int ushort = 1234U; //U=unsigned
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX);	//minimum=0



	// signed int				= 4byte					(정수)
	signed int sint = 1234;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);
	printf("Min: %d\n", INT_MIN);



	// unsigned int				= 4byte					(정수)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX); //minimum=0

	/*
	long은 운영체제마다 다른 크기를 가짐. 보통 4byte.
	Linux, Unix, Mac에서 8byte
	Windows에서 long long이 8byte
	*/

	// signed long int			= 4byte					(정수)
	signed long int slong = 123456789L;//L=long
	printf("\nsigned long int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);
	printf("Min: %d\n", LONG_MIN);



	// unsigned long int		= 4byte					(정수)
	unsigned long int ulong = 123456789UL;//U+L
	printf("\nunsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX); //minimum=0



	// float (항상 부호O)					= 4byte					(실수)
	float f = 123.456f;//f=float
	printf("\nfloat:\n");
	printf("Value: %f\n", f); //%.1f, %.3f등 활용가능
	//printf("Max: %d\n", FLT_MAX);
	//printf("Min: %d\n", FLT_MIN);



	// double (항상 부호O)					= 8byte					(실수)
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value: %.3f\n", d);
	//printf("Max: %d\n", DBL_MAX);
	//printf("Min: %d\n", DBL_MIN);



	return 0;
}