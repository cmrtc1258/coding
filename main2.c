#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
struct value
{
char arr[MAX];
int beg;
}a;

void open(char bracket)
{
a.beg = a.beg + 1;
a.arr[a.beg] = bracket;
}
void close()
{
a.beg = a.beg - 1;
}
int main()
{
char s[MAX];
int i = 0;
a.beg = -1;
gets(s);
for(i = 0;i < strlen(s);i++)
{
if(s[i] == '(' || s[i] == '[' || s[i] == '{')
{
open(s[i]);
continue;
}
else if(s[i] == ')' || s[i] == ']' || s[i] == '}')
{
if(s[i] == ')')
{
if(a.arr[a.beg] == '(')
{
close();
}
else
{
printf("false\n");
break;
}
}
if(s[i] == ']')
{
if(a.arr[a.beg] == '[')
{
close();
}
else
{
printf("false\n");
break;
}
}
if(s[i] == '}')
{
if(a.arr[a.beg] == '{')
{
close();
}
else
{
printf("false\n");
break;
}
}
}
}
if(a.beg == -1)
{
printf("true\n");
}
}
