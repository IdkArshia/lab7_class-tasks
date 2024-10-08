#include<stdio.h>
int main()
{
	int x,i;
	char arr[10]={'a','b','c','d','e','f','g','h','i','j'};
	printf("enter character to search");
	scanf("%c",&x);
	for(i=0;i=i+1;i++)
	{
		if(arr[i]==x)
		{
			printf("entered character found at index %d",i);
			return 0;
		}
		
		
	}
	printf("not found");
	return 0;
    
}
