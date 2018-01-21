#include<stdio.h>
void main()
{
	char c;
	scanf("%s",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		printf("vowel");
	else
		printf("consonants");
}