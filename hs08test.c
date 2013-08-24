#include<stdio.h>

int main()
{
	char input[100];
	int withdraw;
	float balance;
	float nbalance;

	fgets(input, sizeof(input), stdin);
	sscanf(input, "%d %f", &withdraw, &balance);

	nbalance = balance - withdraw - .50;

	


	if(((withdraw % 5) != 0) && (nbalance > 0))
		printf("%.2f\n", balance);
	else if(withdraw > balance) {
		printf("%.2f\n", balance);
	}
	else if(nbalance < 0)
		printf("%.2f\n", balance);
	else {
		printf("%.2f\n", nbalance);
	}
return 0;
}
