#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[]={0};
//	scanf("%s", &arr);
//	int left = 0;
//	int right = 4;
//	int sum = 0;
//	if (strlen(arr) == 5)
//	{
//		int i;
//		for (i = 0;i < 4;i++)
//		{
//			arr[4-i]
//		}
//	}
//	return 0;
//}
//int main()
//{
//
//	int n = 12345;
//	printf("%d", n % 100);
//	return 0;
//}
int main()
{
	int n;
	for(n=10000;n<99999;n++)
	{
		
		int j;
		int sum = 0;
		for (j = 10;j < 10000;j = j * 10)
		{
			sum = sum + (n / j) * (n % j);
		}
		if (n == sum)
		{
			printf("%d ", n);
		}
		
	}
	return 0;
}