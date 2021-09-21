#include<stdio.h>

void DisplayStar(int  );
int main()

{
int starvalue = 0;

printf("Enter the count of stars");
scanf("%d",&starvalue);

DisplayStar(starvalue);

	



return 0;
}

void DisplayStar(int iNo)
{

	int  action= iNo ;
	//char = ' *';
	for(int istarCnt=1;istarCnt<=iNo;istarCnt++)
	{
		for(int ispaceCnt= 1;ispaceCnt<=iNo;ispaceCnt++)
		{

			//printf("%d",action);
			if(ispaceCnt<action)
			{
			printf(" ");

			}			
			if(ispaceCnt==action)
			{
				int cnt=0;
				while(cnt<istarCnt)
				{
					printf(" *");
					cnt++;
				}
				printf("\n");
				action--;
			}	

		}
	}

}