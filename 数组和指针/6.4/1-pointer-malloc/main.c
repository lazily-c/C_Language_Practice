#include <stdio.h>
#include <stdlib.h> //malloc使用的头文件
#include <string.h>
//指针与动态内存空间申请
int main() {
    int size;//代表我们需要申请多大字节的空间
    char *p;//void*类型的指针不能进行偏移，所以往往不会去定义一个无类型的指针
    scanf("%d",&size);//输入要申请空间的大小
    //malloc返回的void*代表无类型指针
    //char*是字符型指针，因为malloc返回的是无类型，为了和p的类型保持一致，这里进行强制转换
    p= (char*)malloc(size);
    strcpy(p,"malloc success");
    puts(p);
    free(p);//释放申请的空间时，给的地址，必须是最初malloc返回给我们的地址
    printf("free success");
    return 0;
}
