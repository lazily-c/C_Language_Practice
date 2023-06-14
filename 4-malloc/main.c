#include <stdio.h>
#include <stdlib.h>
//malloc的使用
int main() {
    int n;//代表申请空间大小
    scanf("%d",&n);//读取
    char c;
    //清除标准输入缓冲区的\n
    scanf("%c",&c);//在scanf和gets之间使用scanf("%c",c),去除换行
    char *p;//定义指针变量
    p=(char*)malloc(n);//申请n个字节大小的空间，强制类型转换为char*
    gets(p);//可以使用fget(p,n,stdin);新标准gets被去掉因为不安全，会造成访问越界
    puts(p);
    return 0;
}
