/* if���Ƶ����ഫ */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b;
	printf("�п�J����\n");
	scanf("%d",&a);
	if(a<=100 && a>=0)
	{
		if(a>=80)
		{
			printf("����A\n");
			b=4;
		}
		else if(a>=70)
		{
			printf("����B\n");
			b=3;	
		}
		else if(a>=60)
		{				
			printf("����C\n");
			b=2;
		}		
		else if(a>=50)
		{				
			printf("����D\n");
			b=1;
		}
		else
		{
			printf("����E\n");
			b=0;
		}		
		system("Pause");
		return 0;
    }
    else
    {
    	printf("�A�Q�Ӧh�F �u\n"); 
    	system("Pause");
	}
}

