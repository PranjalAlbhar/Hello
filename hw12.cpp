/*
	Accept N characters and display only Capital character	
*/


#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int Count(char *,int);

int main()
{
	int iSize=0,iCnt=0,iRet=0;
	char *cPtr=NULL;

	printf("\nEnter the Number of elements:");
	scanf("%d",&iSize);

	cPtr=(char *)malloc(iSize*(sizeof(char)));

	printf("\nEnter the character:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%c  ",&cPtr[iCnt]);
		//flushall();
	}
	
	iRet=Count(cPtr,iSize);
	if(iRet==-1)
	{
		printf("memory is not allocated");
	}
	else
	{
		printf("\nCount of capital letter=%d",iRet);
		
	}

	
	free(cPtr);

return 0;
}

int Count(char *arr,int iLength)
{
	int iCnt=0,iFreq=0;
	
		for(iCnt=0;iCnt<=iLength;iCnt++)
		{
			if((arr[iCnt]>='A') && (arr[iCnt]<='Z'))
			{
				printf("\n%c is Capital letter",arr[iCnt]);
				iFreq++;
			}
		}
		return iFreq;
}


