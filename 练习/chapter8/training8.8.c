//windows7�в����ã�û��stty����
#include <stdio.h>

main()
{
    int c;
    //�ն�����������ͨ��һ��һ��ģʽ
    system("stty raw");
    //�����ն���������һ��һ�ַ�ģʽ
    c = getchar();

    system("stty cooked");
    //�ն������ֻص�һ��һ��ģʽ
}
