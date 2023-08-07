#include <stdio.h>

//scanf读取字符串,会自动往字符数组中放结束符\0
int main() {
    char c[10];
    char d[10];
//    scanf("%s",c);//不取地址，因为字符数组名c中存储了起始地址
//    printf("%s\n",c);
    scanf("%s%s",c,d);
    printf("c=%s,d=%s\n",c,d);
    return 0;
}
