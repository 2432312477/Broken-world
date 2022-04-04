#include<stdio.h>
#include<string.h>
void main()
{
	char a[] = "2*2/4*1/1*2*3/2";
	int b = a[0] - '0';
	int  c = 0;
	int d,e;
	for (int i = 1; i < strlen(a); i++)
	{
		if (a[i] == '*')
		{
			d = a[i + 1] - '0';
			e=a[i-1]-'0'
			c = e*d;
			b = c;
			i++;
		}
		if (a[i] == '/')
		{
			d = a[i + 1] - '0';
			e = a[i - 1] - '0';
			c = e/ d;
			b = c;
			i++;
		}
		for (int i = 1; i < strlen(a); i++)
		{
			if (a[i] == '+')
			{
				c = c + (a[i - 1] - '0');
			}
			if (a[i] == '-')
			{
				c=c-(a[i-1]-'0')
			}
		}

	}
	printf("%d\n", c);
}
