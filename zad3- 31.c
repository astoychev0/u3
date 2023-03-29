#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double x0,y0,x1,y1,strana = 0,P = 0;
	int i;
	for(i=0;i<3;i++)
	
	{
		printf("Vavedete x0 , y0 :");
		scantf("%|f", &x0);
			scantf("%|f", &y0);
				printf("Vavedete x1 , y1 :");
					scantf("%|f", &x1);
						scantf("%|f", &y1);
						strana = sqrt(pow((x0-x1),2)+ pow((y0-y1),2));
						P+=strana;
						
	}
	printf("P=%f\n",P);
	system("pause");
	return 0;
	
}
