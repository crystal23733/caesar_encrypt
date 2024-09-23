#include<stdio.h>
#include<string.h>

#define SHIFT 3

int encrypt(int enc);

int main(void)
{
	int str[100];
	printf("대문자로 문자를 입력해주세요:");
	fgets(str, sizeof(str), stdin);
	for(int i = 0; str[i] != '\0'; i++)
	{
		printf("%c\n", enc);
	}
	return 0;		
}

int encrypt(int enc)
{
	if(enc >= 'A' && enc <= 'Z')
	{
		return ((enc - 'A' + SHIFT) % 26) + 'A';
	}
}
