#include <stdio.h>
#include<math.h>


int main()
{
	int arr[5][5];
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			scanf("%d", &arr[i][j]);
	}
	int tmp;
	
	
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
	printf("\n");
	
	
	for(int k = 0; k < 5; ++k)
	{
		//сортуванн€ р€дка по спаданню елемент≥в
		for(int i = 0; i < 5 - 1; ++i)
		{

			for(int j = 0; j < 5 - i - 1; ++j)
			{
				if(arr[k][j] > arr[k][j+1])
				{
					tmp = arr[k][j];
					arr[k][j] = arr[k][j+1];
					arr[k][j+1] = tmp;	
				}
			}
		}
		
	}
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 5; ++j)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
	printf("\n");

	int min[5];
	int multi;
	multi=1;
	
	

	
	for(int i = 0; i < 5; ++i)
	{
		//пошук м≥н≥мального значенн€ в стовпц≥
		min[i] = arr[0][i];
		for(int j =  1; j < 5 ; ++j)
		{
			if(min[i] > arr[j][i])
				min[i] = arr[j][i];
		}
		printf("%d\t", min[i]);
	}
	
	printf("\n");
		printf("\n");
	
	//пошук добутку м≥н≥мальних елемент≥в стовпц€
	  {
		for(int i = 0; i < 5;++i)
		{
		multi= multi*min[i];
	     }
	     printf("Multiply= %d  ",multi);
        }
        
	return 0;
}
