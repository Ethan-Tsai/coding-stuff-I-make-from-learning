#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int t;
	printf("�п�J�@�Ӿ��\n");
	scanf("%d",&n);
	for(t=2;t<=n;t++)
	{
		if((n%t)==0)
		printf("%d\t",t);
	}
	system("Pause");
	return 0;
}

