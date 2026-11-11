#include <stdio.h>
int main(void) {
	char str[100];
	char* p;
	int count = 0;
	printf("영문 문장을 입력하시오 : ");
	fgets(str, sizeof(str), stdin);
	p = str;
	while (*p != '\0' && *p != '\n') {
		if (*p >= 'a' && *p <= 'z') {
			*p = *p - 'a' + 'A';
		}
		p++;
	}
	*p = '\0';
	printf("대문자 : %s\n", str);
	printf("글자 수 (공백 제외) : %d\n", count);
	return 0;
}