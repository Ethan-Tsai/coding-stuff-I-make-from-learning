#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0;
	int t=4;
	int a[5];
	int b;//�w�s��
	int flags;
	printf("��J5�Ӽ�\n");
	for(i=0;i<=4;i++)
	{
		printf("�п�J��%d�Ӽ�:",i+1);
		scanf("%d",&a[i]);
	}
	for(t=4;t>0;t=t-1)
	{
		for(i=0;i<t;i++)
		{
			if(a[i]>a[i+1])
			{
				b=a[i];
				a[i]=a[i+1];
				a[i+1]=b;
				flags=1;
			}
			printf("%d ",a[i]);
		}
		printf("\n");
		if(flags==0)
		break;
		else
		flags=0;
	}
	printf("�p��j�ƦC��\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\n",a[i]);
	}
	system("Pause");
	return 0;
}


