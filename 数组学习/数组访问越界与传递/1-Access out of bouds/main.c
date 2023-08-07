#include <stdio.h>
//数组的访问越界

int main() {
    int a[5]={1,2,3,4,5};
    int j=20;
    int i=10;
    a[5]=6;//访问越界
    a[6]=7;//访问越界会造成数据异常
    printf("i=%d\n",i);//导致i改变
    return 0;
}
