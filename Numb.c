#include<stdio.h>

int changeNumb(int orig)
{
	int res = 0;//результат
	int scr;//промежуточная переменная
	int work;//число в работе
	int max = 0;//максимальная цифра в числе
	int i = 0;//кол-во цифра в числе
	int digit = 0;//цифра в числе

	if(orig < 0)
	{
		orig *= -1;
	}
	work = orig;
	while(work > 0)
	{
		scr = work % 10;
		if(max < scr)
		{
			max = scr;
		}
		work /= 10;
		i++;
	}

	while(i > 0)
	{
		work = orig;
		while(work > 0)
		{
			digit = work % 10;
			work /= 10;
			if(digit == max)
			{
				res = res * 10 + digit;
				i--;
			}
		}
		max--;
	}
	return res;
}

int main()
{
    int cnt;
    int num = 0;
	int numb = 0;
	scanf("%d",&numb);
	int rnumb = changeNumb(numb);
	if(numb < 0)
	{
		while(rnumb > 0)
		{
			cnt = rnumb % 10;
			num = num * 10 + cnt;
			rnumb /= 10;
		}
		num *= -1;
		printf("%d\n", num);
	}
	else
	{
	    printf("%d\n", rnumb);	
	}

	return 0;
}
