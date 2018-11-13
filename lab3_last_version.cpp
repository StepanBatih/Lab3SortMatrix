#include <stdio.h>
#include<math.h>
int main()
{
	int Matrix[5][5];
	void ScanMatrix();
	{
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			scanf("%d", &Matrix[i][j]);
	}
	}
	int tempMatrix;

void	PrintMatrix();
	{
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			printf("%d\t", Matrix[i][j]);
		printf("\n");
	}
	printf("\n");
	}
	void SortMatrix_booble();{
	for(int k = 0; k < 5; ++k)
	{

		for(int i = 0; i < 5 - 1; ++i)
		{

			for(int j = 0; j < 5 - i - 1; ++j)
			{
				if(Matrix[k][j] > Matrix[k][j+1])
				{
					tempMatrix = Matrix[k][j];
					Matrix[k][j] = Matrix[k][j+1];
					Matrix[k][j+1] = tempMatrix;
				}
			}
		}

	}
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			printf("%d\t", Matrix[i][j]);
		printf("\n");
	}
	printf("\n");
	}
	int Minimumvalue[5];
	int Multiplication;
	Multiplication=1;




	for(int i = 0; i < 5; ++i)
	{

		Minimumvalue[i] = Matrix[0][i];
		for(int j =  1; j < 5 ; ++j)
		{
			if(Minimumvalue[i] > Matrix[j][i])
				Minimumvalue[i] = Matrix[j][i];
		}
		printf("%d\t", Minimumvalue[i]);
	}

	printf("\n");
		printf("\n");

	  {
		for(int i = 0; i < 5;++i)
		{
		Multiplication= Multiplication*Minimumvalue[i];
	     }
	     printf("Multiplicationply= %d  ",Multiplication);
        }

	return 0;
}
