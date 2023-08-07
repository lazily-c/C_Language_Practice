#include <stdio.h>
//如何初始化字符数组，字符串如何输出

//模拟printf("%s",d)操作
void print(char e[])
{
    int i=0;
    while(e[i])//当走到结束时，循环结束
    {
        printf("%c",e[i]);
        i++;
    }
    printf("\n");
}

int main() {
//    char a[10]={'I','a','m','h','a','p','p','y'};//字符数组采用这种初始化比较累
//    puts(a);
//    char b[10]="Iamhappy"; //所以字符初始化一般采用这一种
//    char c[6]="hello";//由于系统会对字符串常量，加一个字节'\0',
//                    // 所以字符数组在存储的字符串长度必须比字符数组少一个字节，
//                    //相等的情况，会导致输出乱码
//    printf("%s\n",c);//使用%s来输出一个字符串,直接把字符数组名放到printf后面
    char d[5]="hello";//这样会输出乱码，解决方法，去查看字符数组中是否存储了结束符'\0'
    char e[5]="how";
    printf("%s\n",d);
    print(e);
    return 0;
}
