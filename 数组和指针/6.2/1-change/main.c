#include <stdio.h>
//在子函数内去改变主函数中某个变量的值
void change(int j)//j 是形参
{
    j=5;
}
int main() {
    int i=10;
    printf("before change i=%d\n",i);
    change(i);//C语言的函数调用是值传递，实参赋值给形参，调用时是j=i
    printf("after change i=%d\n",i);
    return 0;
}
