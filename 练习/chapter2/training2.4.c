#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *available_resources[] = {
        "color monitor",
        "big disk",

        "Cray" //���˸�����
        "on-line drawing routhines",

        "mouse",
        "keyboard",
        "power cables",     //�������Ķ��Ż�����ʲô������
    };
    int i;
//    printf("%d\n",sizeof(char *)); //char *��4���ֽ�
    for(i=0; i< sizeof(available_resources)/4; i++)
        printf("%s\n",available_resources[i]);
    return 0;
}
