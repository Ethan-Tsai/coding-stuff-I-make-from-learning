//�ۿ�ū��ഫ
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int type;
	float C;
	float F;
	while(1)
	{//"�\��"�L�k��J 
		printf("�п�J�ﶵ\n1.�����ؤ� 2.�ؤ������ 3.��������\n");
		scanf("%d",&type);
		switch(type)
		{ 
			case 1:	printf("�п�J�@�����ū�\n");
					scanf("%f",&C);
					F = 9.0/5*C+32;
					printf("%.2f�ন�ؤ�%.2f",C,F);
					system("Pause");
					break;
			case 2:	printf("�п�J�@�ӵؤ�ū�\n");
					scanf("%f",&F);
					C = (F-32)*5/9;
					printf("%.2f�ন���%.2f",F,C);
					system("Pause");
					break;
			case 3: return 0;
					break;
			default:printf("What's are you saying");									
		}
	}	
} 
