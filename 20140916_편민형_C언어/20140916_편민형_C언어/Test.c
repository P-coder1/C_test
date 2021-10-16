#include<stdio.h>

void main()
{
	/*
	int num = 10;

	if(num>10) printf(">10\n"); //참 1 거짓 0
	else       printf("<=10\n");

	printf("%d\n",num>10);
	*/

		/*
	int num = 0, num1 = 0;

	if(num == num1) printf(">같다\n"); //'같다'는 꼭 == 두개를 붙여줘야 함
	else       printf("다르다10\n");

	printf("%d\t%d\n",num,num1);
	*/


	int dan,i;
	printf("구구단을 입력하세요 :");
	scanf("%d",&dan);

	for(i= 1; i < 10; i++)
		printf("%d X %d = %2d\n", dan,i, dan*i);

}