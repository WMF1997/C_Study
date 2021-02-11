#include <stdio.h>
int main(int argc, const char** argv, const char** env)
{
    float fa1[2][3][4];
    // init data;
    for (int i=0; i<2; ++i)
    {   
        for (int j=0; j<3; ++j)
		{
            for (int k=0; k<4; ++k)
			{
				fa1[i][j][k] = 1.01 * (12*i+4*j+k);
			}
		}	
	}

	printf("%f\n", ***(fa1+1));
	
	float *pval1 = &fa1[0][1][0];
	printf("%f\n", *pval1);

	
	return 0;
}