//windows7�в����ã�û��filio.h
#include <sys/filio.h>

int kbhit()
{
    int i;
    ioctl(0,FIONREAD,&i);
    return i;   //���ؿ��Զ�ȡ���ַ��ļ���ֵ
}

main()
{
    int i=0;
    int c=' ';
    system("stty raw -echo");
    printf("enter 'q' to quit \n");
    for(; c != 'q'; i++)
    {
        if(kbhit())
        {
            c = getchar();
            printf("\n got %c, on iteration %d", c, i);
        }
    }
    system("stty cooked echo");
}
