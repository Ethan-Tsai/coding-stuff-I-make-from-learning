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
		if(type==1)
		{
			printf("�п�J�@�����ū�\n");
			scanf("%f",&C);
			F = 5/9*C+32;
			printf("%.2f�ন�ؤ�%.2f",C,F);
			system("Pause");
		}
		else if(type==2)
		{
			printf("�п�J�@�ӵؤ�ū�\n");
			scanf("%f",&F);
			C = (F-32)*9/5;
			printf("%.2f�ন���%.2f",F,C);
			system("Pause");
		}
		else if(type==3)
		{
			return 0;
		}
	}
} 
