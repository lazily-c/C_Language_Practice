#include <stdio.h>
#include <string.h>

int mystrlen(char c[])
{
    int i=0;
    while(c[i])//找到结束符后，循环结束，从而得出字符串长度
    {
        i++;
    }
    return i;
}
int main() {
    int len;
    char c[20];
    char d[100]="world";
    char e[100];
    gets(c);
    puts(c);
    len=strlen(c);//统计字符串的长度
    printf("len=%d\n",len);
    len=mystrlen(c);
    printf("my len=%d\n",len);
    strcat(c,d);//把d中的字符串，拼接到c中,strcat里面第一个参数，只能放数组名
    puts(c);
    strcpy(e,c);//把c里的字符串复制到e中，strcpy里面第一个参数，只能放数组名
    puts(e);
    //c大于"how",返回正值，c等于"how",返回0，c小于“how",返回负值
    printf("c?d=%d\n",strcmp(c,"how"));
    return 0;
}
