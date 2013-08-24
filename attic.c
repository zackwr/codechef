#include<stdio.h>

int main()
{
	int t, i, j, s, d, e;
	char p[5000000] = {0};
	scanf("%d", &t);

	while(t--) {
		d = 0, s= 0;
		scanf("%s", p);
		for(i=0;p[i]!=0;i++) {
 			e = 0;
			if(p[i] == '.') {
				for(j=i;p[j]!='#';j++) {
					e++;
					i++;
				}
				if(e > d) {
					d = e;
					s++;
				}
			}
		}
		printf("%d\n", s);
	}
return 0;
}
