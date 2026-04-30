#include <stdio.h>

int main()
{
    // 版本1：基础HelloWorld
    printf("Hello, World!\n");

    // 版本2：用scanf实现键盘输入并输出
    char str[100];  
    printf("请输入内容：");
    scanf("%s", str);         
    printf("你输入的内容是：%s\n", str);

    return 0;
}
