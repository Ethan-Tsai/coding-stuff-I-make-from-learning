#include<stdio.h>
#include<stdlib.h>
int main()
{
	char type;
	float a;
	float b;
	while(type!='E' && type!='e')
	{
		printf("��J�Q�n���B��Ҧ�\nE�䵲��\n");
		scanf("%c",&type);
		if(type=='E' || type=='e')
		{
			return 0;
		}
		printf("��J�ܼ�a\n");
		scanf("%f",&a);
		printf("��J�ܼ�b\n");
		scanf("%f",&b);
		switch(type)
		{
			case '+':
				printf(" a+b =%f",a+b);
				system("Pause");
				break;
			case '-':
				printf(" a-b =%f",a-b);
				system("Pause");
				break;
			case '*':
				printf(" a*b =%f",a*b);
				system("Pause");
				break;
			case '/':
				printf(" a/b =%f",a/b);
				system("Pause");
				break;	
		}
	}	
}
