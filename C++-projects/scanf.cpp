/* scanf��J�B�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b;
	printf("��J�ܼƾ��a\n");
	scanf("%d",&a);
	printf("��J�ܼƾ��b\n");
	scanf("%d",&b);	
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d/%d=%.3f\n",a,b,(float)a/b);
	system("Pause");
	return 0;
}

