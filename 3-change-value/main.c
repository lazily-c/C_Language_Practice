#include <stdio.h>
//问题：在子函数中去改变main函数的值
//除法运算
void change(int *j)//j=&i
{
    *j=*j/2;
}
int main() {
//    int i;
//    scanf("%d",&i);
//    change(&i);
//    printf("%d",i);//输出
    //第二种写法
    int i;
    int *p=&i;//这里要初始化，因为如果定义一个指针变量，没有初始化，指针指向就是空，读取会出错
    scanf("%d",p);
    change(p);
    printf("%d\n",*p);
    return 0;
}
