#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int score=0;
	int sum=0;
	int p=0;
	int t=0;
	int max=0;
	int min=0;
	printf("�п�J�H��\n");
	scanf("%d",&p);
	for(t=1;t<=p;t++)
	{
		printf("�п�J��%d�����Z:",t);
		scanf("%d",&score);
		if(score>=0 && score<=100)
		{
			sum = sum +score;
			if(min>score||t==1)
			{
				min=score;
			}
			else if(max<score||t==1)
			{
				max=score;
			}
		}
		else
		{
		printf("error\n");
		t=t-1;
		}
	}
	printf("============================================\n");
	printf("�̰�����%d\n",max);
	printf("�̧C����%d\n",min);
	printf("�`���Z��%d\n",sum);
	printf("������%.2f\n",(float)sum/p);
	printf("���Z��%d\n",max-min);
	system("Pause");
	return 0;
}

