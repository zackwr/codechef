#include<stdio.h>
#include<math.h>


int main()
{

	int t, ans = 0;
	scanf("%d", &t);

	while(t--) {
		int x1, x2, x3, y1, y2, y3;
		scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
		int s1 = (x2-x1)*(x2-x1) + (y2-y1) * (y2-y1);
		int s2 = (x3-x1)*(x3-x1) + (y3-y1) * (y3-y1);
		int s3 = (x2-x3)*(x2-x3) + (y2-y3) * (y2-y3);
		
		//int is1 = s1 * s1, is2 = s2 * s2, is3 = s3 * s3 + 1;
		//printf("%f %f %f\n",s1, s2, s3);
		if((s1 + s2 == s3) || (s2 + s3 == s1) || (s1 + s3 == s2))
			ans++;
	}
	printf("%d\n", ans);

return 0;
}
