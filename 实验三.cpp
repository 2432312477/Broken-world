#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int chazhao(char *a,char *b)
{
char *p=a;//pָ�����
int e=0,k=0;//kͳ�Ƹ���
while(*p!='\0')//���ӽ����˳�ѭ��
{
while(*p!=' ')//���ʽ����˳�ѭ�� �����¸�����
{
if(*p!=b[e])//������ͬ��ĸ ָ����һ������
while(*p!=' ') p++;
else//��ĸ��ͬ
{
if(*(p+1)==' ')//���ʽ��� ������һ
{
k++;
p++;
}
else//�Ƚ���һ����ĸ
{
e++;
p++;
}
}
}
p++;
e=0;
}
return k;
}
void main()
{
int a = 1, i, c, d = 1;
char g[100],h[100];
printf("����Ҫ���ӣ�\n");
gets(g);
printf("����Ҫ���ҵĵ��ʣ�\n");
gets(h);
for (i = 0; g[i] != '\0'; i++)
	{
		c = g[i];
		if (c == ' ')
		{
			d++;//��������1
		}
	}
printf("���鵥�ʳ��ֵĴ���Ϊ%d\n",chazhao(g,h));
printf("��һ��Ӣ���еĵ�������%d\n", d);
printf("��һ��Ӣ���е���ĸ��Ϊ%d\n", strlen(g) -(d-1));
}