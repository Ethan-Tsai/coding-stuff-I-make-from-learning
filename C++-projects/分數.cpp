/* if���ƽd�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b;
	printf("�п�J����\n");
	scanf("%d",&a);
	if(a<=100 && a>=0)
	{
		if(a>=60)
		{
			printf("�ή�\n");
			if(a==100)
			{
				printf("����\n");
			}
		}
		else if(a>=40)
		{
			printf("�i�H�ɦ�\n");	
		}
		else if(a<40)
		{				
			printf("����\n");
		}		
		system("Pause");
		return 0;
    }
    else
    {
    	printf("�@��\n"); 
    	system("Pause");
	}
}

