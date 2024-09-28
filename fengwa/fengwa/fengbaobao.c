#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("·ï±¦±¦×î°ôÃ´Ã´ßÕ\n");
//		printf("·ï±¦±¦×î°ôÃ´Ã´ßÕ\n");
//		printf("·ï±¦±¦×î°ôÃ´Ã´ßÕ\n");
//		printf("·ï±¦±¦×î°ôÃ´Ã´ßÕ\n");
//		printf("·ï±¦±¦×î°ôÃ´Ã´ßÕ\n");
//		printf("·ï±¦±¦×î°ôÃ´Ã´ßÕ\n");
//		a++;
//	}
int main()
 {
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200;i++)
 	{
		int j = 0;
		for (j = 2; j <= i / 2;j++)
 		{
			if (i%j == 0)
				break;
 		}
		if (j>i/2)
 		{
			printf("%d ", i);
			count++;
 		}
 	}
	printf("count=%d\n", count);
// 	ÏµÍ³£¨¡°ÔÝÍ£¡±£©;
// 	·µ»Ø0;
// }
	system("pause");
	return 0;
}