#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//堆和栈的差异
char* print_stack()
{
    char c[100]="I am print_stack fun";//栈空间在函数结束后，整个局部变量将失效
    char *p;
    p=c;
    puts(p);
    return p;
}
char* print_malloc()
{
    char *p=(char *)malloc(100);//堆空间在整个进程中一直有效，不会因为函数结束，而消亡
    p=strcpy(p,"I am print_malloc fun");
    puts(p);
    return p;
}
int main() {
    char *p;
    p=print_stack();
    puts(p);
    p=print_malloc();
    puts(p);
    free(p);//只有在free时，堆空间才会释放
    return 0;
}
