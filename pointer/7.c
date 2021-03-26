#include <stdio.h>
int main(void)
{
	float a[2][3] = {{2,4,6},{1,3,5}};
	float *p = a[0];
	float **pp = &p;
	float (*p3)[3] = &a[0];
	float *p33[3] = { &a[0][0], &a[0][2], &a[1][1] };

	printf("pp\n");
	printf("%f\n", *((*pp+1)+1));
	// 6

	printf("p3\n");
	printf("%f\n", *(*(p3+1)+1));
	// 3

	printf("p33\n");
	printf("%f %f %f\n", *(*(p33+1)), *((*p33)+1), (*(*p33))+1 );  // 大概就是想要说明相应的关系吧. 
	// 6, 4, 3

	return 0;
}