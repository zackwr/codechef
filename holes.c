#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int t, count = 0, i = 0, j = 0;
	char input[100];
	scanf("%d", &t);
	if(t > 40)
		return 0;
	while(t--) {
		scanf("%s", input);

		for(i=0;i<strlen(input);i++) {
				if(isupper(input[i]) == 0)
					return 0;
				switch(input[i]) {
					case 'A':
						count += 1;
						break;
					case 'R':
						count += 1;
						break;
					case 'P':
						count += 1;
						break;
					case 'O':
						count += 1;
						break;
					case 'D':
						count += 1;
						break;
					case 'Q':
						count += 1;
						break;
					case 'B':
						count += 2;
						break;
					default:
						count = count;
						break;
				}
				j++;
			}
			if((count != 0) && (j > 0))
				printf("%d\n", count);
			else if((count == 0) && (j > 0))
				printf("0\n");
			count = 0;
		}
			
return 0;
}
