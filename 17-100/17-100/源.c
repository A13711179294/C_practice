//计算个人所得税，假设个人所得税为：税率* （工资 - 1600）。
//请编写程序计算应缴的所得税，其中税率定义为：
//（1）当工资不超过1600时，税率为0；
//（2）当工资在区间（1600, 2500]时，税率为5% ；
//（3）当工资在区间（2500, 3500]时，税率为10% ；
//（4）当工资在区间（3500, 4500]时，税率为15% ；
//（5）当工资超过4500时，税率为20% 。
#include<stdio.h>
int main()
{
	int i;
	float x;
	printf("请输入你的工资\n");
	scanf_s("%d", &i);
	if (i > 1600)
	{
		switch (i / 500)
		{
		case 3:
		case 4:
		case 5:x = 0.05 * (i - 1600.0); break;
		case 6:
		case 7:x = 0.1 * (i - 1600.0); break;
		case 8:
		case 9:x = 0.15 * (i - 1600.0); break;
		default:x = 0.2 * (i - 1600.0); break;
		}
		printf("您需缴纳个人所得税%.2f元\n", x);
	}
	else
		printf("您无需缴纳个人所得税\n");
	return 0;
}