#include <stdio.h>

int main()
{
    char p;
    char i = 2;
    char apple;
    p = i;
    apple = sizeof(int) * p; //int�ĳ��ȳ���p����pΪָ��ᱨ��
    printf("%d\n", apple);
}
