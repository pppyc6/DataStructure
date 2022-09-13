#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char input[100];
    system("shutdown -s -t 180");
//这是Windows系统下的一个关机命令
    while(1)
    {
        printf("你的电脑将在一分钟后关机，如果输入“我是猪”，就会取消关机！\n请输入: ");
        scanf("%s", input);
        if (0 == strcmp(input, "我是猪"))
        {
            system("shutdown -a"); //取消关机命令
            break;
        }
    }    
    return 0;
}
