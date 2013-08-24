#include<stdio.h>

int strlen(char *s)
{
	int i = 0, x = 0;
	while(s[i]!='\0') {
		x++;
		i++;
	}
return x;
}
int main()
{
	int t, i, sum;
	char j[102], s[102];
	scanf("%d", &t);

	while(t--) {
		int a[200] = {0};
		sum = 0;
		scanf("%s", j);
		for(i=0;i<strlen(j);i++)
			a[j[i]-'0']++;
		scanf("%s", s);
		for(i=0;i<strlen(s);i++) {
			if(a[s[i]-'0'])
				sum++;
		}

		printf("%d\n", sum);
	}
return 0;
}
