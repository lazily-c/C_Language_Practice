#include <stdio.h>
#include <string.h>
/*题目：读取一个字符串，字符串可能含有空格，将字符串逆转
原来字符串如果与逆转后字符串相同，输出0，如果原字符串小于逆转后的字符串，输出-1
 如果原字符串大于逆转后的字符串，则输出1*/
//要点：因为有空格，所以只能用gets读取字符串，而不用scanf
//使用增量编写法，减少错误率
//测试用例：hello、cba、aba.
int main() {
    char c[100];//原字符串
    char d[100]={0};//存翻转过的字符串,这里初始化的原因是让字符串d有结束符，
                    // 避免d存入逆转后的字符串结束时出现乱码
    gets(c);
//    puts(c);//编写时调试用
    int i,j;
    for(i=0,j=strlen(c)-1;i<strlen(c);i++,j--)
    {
        d[j]=c[i];
    }
//    puts(d);//检验d是否输出正确
    int result= strcmp(c,d);
    if(result>0)
    {
        printf("%d\n",1);
    }else if(result<0)
    {
        printf("%d\n",-1);
    }else
    {
        printf("%d\n",0);
    }
    return 0;
}
