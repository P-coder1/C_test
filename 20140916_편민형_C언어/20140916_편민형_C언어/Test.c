#include<stdio.h>

void main()
{
	/*
	int num = 10;

	if(num>10) printf(">10\n"); //�� 1 ���� 0
	else       printf("<=10\n");

	printf("%d\n",num>10);
	*/

		/*
	int num = 0, num1 = 0;

	if(num == num1) printf(">����\n"); //'����'�� �� == �ΰ��� �ٿ���� ��
	else       printf("�ٸ���10\n");

	printf("%d\t%d\n",num,num1);
	*/


	int dan,i;
	printf("�������� �Է��ϼ��� :");
	scanf("%d",&dan);

	for(i= 1; i < 10; i++)
		printf("%d X %d = %2d\n", dan,i, dan*i);

}