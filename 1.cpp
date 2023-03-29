#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int main()
//{
	//printf("Name: Elena Antonova\n");
	//printf("Find all positive elements and sort them.");
	
	//[-99 +99] - integers
	//[-999.99 +999.99] - floats/doubles
	//A [M] [M] - square matrix
	
	//printf("Enter Matrix Dimensions: ");
	//int M;
	//scanf("%d", &M);
	//printf("Dimensions = %d\n", M);
	//double matrix [M] [M];
	//int count = 0;
	//int i, j;
	
	//for (i = 0; i < M; i++)
	//{
	//for (j = 0; j < M; j++)	
	//{
	//	do {
	//	printf ("matrix{%d} {%d} = ", i, j);
	//	scanf("%lf", &matrix[i], [j]);
	//	} while (!matrix [i][j] >= -999.999 && matrix[i][j] <= 999.999)
		
	//	}	
	//}
	//printf("Matrix: \n");
	//for (i = 0; i < M; i++)
	//{
	//for (j = 0; i < M; j++)	
	//{
	//printf("%.21f",matrix[i][j]);
	//	}	
	//printf("\n");		
	//}
	//for (i = 0; i < M; i++)
	//{
//	for (j = 0; j < M; j++)	
	//{
	//	if (matrix[i][j]) > 0
	//	{
	//		array[count] = matrix[i][j];
	//		count++;
	//	}	
	//	}		
//	}
//	printf("Positive Arrays: ");
//	for (i = 0; i < count; i++)
//	{
//		printf("%.21f", array[i]);
		
//	}
//	double temporary;
//	for (i = 0; i < count - 1;i++)
//	{
//	for (j = i + 1; j < count;j++)	
//	{
//		temporary = array[i];
//		array[i] = array[j];
//		array[j] = temporary;
//		}	
//	}
//	printf("Sorted Positive Arrays: ");
//	for (i = 0; i < count; i++)
//	{
//		printf("%.21f", array[i]);
//	}
	
//	system("pause");
//	return 0;
//}



int main()
{

int k, c;
int n;
printf("Enter the size of your squared array: ");
scanf("%d", &n);

int arr[n][n];

for (k = 0; k < n; k++)
{
	for (c = 0; c < n; c++)
	{
	printf("values of array[%d][%d] = ", k, c);
	scanf("%d", &arr[k][c]);	
		
	}
}
return 0;
}





