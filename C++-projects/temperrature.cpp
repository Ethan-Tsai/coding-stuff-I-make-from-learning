/* �ū��ഫ�B�� */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float C,F;
	printf("��J�ؤ�ū�\n");
	scanf("%f",&F);
	C = (F-32)*5/9;
	printf("%f�ഫ�����%f\n",F,C);
	system("Pause");
	printf("��J���ū�\n");
	scanf("%f",&C);
	F = C*9/5+32;
	printf("%f�ഫ���ؤ�%f\n",C,F);
	system("Pause");
	return 0;
}

