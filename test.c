#include<stdio.h>

int main()
{
	char ch[100];
	int ich;

	while(1) {
	fgets(ch, sizeof(ch), stdin);
	sscanf(ch, "%d", &ich);
	
	if(ich == 42)
		break;

	printf("%d\n", ich);
	}
return 0;
}
