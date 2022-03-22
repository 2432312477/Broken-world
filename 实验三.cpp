#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int chazhao(char *a,char *b)
{
char *p=a;//p指向句子
int e=0,k=0;//k统计个数
while(*p!='\0')//句子结束退出循环
{
while(*p!=' ')//单词结束退出循环 查找下个单词
{
if(*p!=b[e])//遇到不同字母 指向下一个单词
while(*p!=' ') p++;
else//字母相同
{
if(*(p+1)==' ')//单词结束 计数加一
{
k++;
p++;
}
else//比较下一个字母
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
printf("输入要句子：\n");
gets(g);
printf("输入要查找的单词：\n");
gets(h);
for (i = 0; g[i] != '\0'; i++)
	{
		c = g[i];
		if (c == ' ')
		{
			d++;//单词数加1
		}
	}
printf("所查单词出现的次数为%d\n",chazhao(g,h));
printf("这一段英文中的单词数是%d\n", d);
printf("这一段英文中的字母数为%d\n", strlen(g) -(d-1));
}