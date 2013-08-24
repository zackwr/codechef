#include<stdio.h>

int main()
{
	int t; //number of test cases

	int a[200]; //Array to store digits

	int n,m,temp,x,j,i;

	scanf("%d", &t);

	if((t < 1) | (t > 100))
		return 0;

	for(t=t;t>0;t--) {
		scanf("%d", &n);

		if((n < 1) | (n > 100))
			return 0;
		a[0] = 1; //Initalizes array with only one digit, the number 1
		m = 1; //Initalizes digit counter

		temp = 0;
		for(i=1;i<=n;i++) {
			for(j=0;j<m;j++) {
					x = (a[j] * i) + temp;
					a[j] = x % 10;
					temp = x / 10;
			}
			while(temp>0) {
				a[m] = temp % 10;
				temp = temp  / 10;
				m++;
			}
		}

		for(i=(m-1);i>=0;i--) 	
			printf("%d", a[i]);
			printf("\n");
	}

return 0;
}
