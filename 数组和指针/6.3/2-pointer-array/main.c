#include <stdio.h>
//指针与一维数组的传递
//数组名作为实参传递给函数时，是弱化为指针的
void change(char *d)
{
    *d='H';
    d[1]='E';//等价与*(d+1)='E';
    *(d+2)='L';
    d[3]='l'+1;//这里加1，可以把第2个l变为m,暂时不知道原理
}
int main() {
    char c[100]="hello";
    change(c);
    puts(c);
    return 0;
}
