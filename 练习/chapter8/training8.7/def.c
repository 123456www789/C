#include <stdio.h>


//�ɷ��ĺ������壬����ȴ����ԭ��
olddef(d,i)
float d;
char i;
{
    printf("olddef:float = %f, char = %x \n",d,i);
    return 0;
}
//�·��Ķ��壬����ȴû��ԭ��
newdef(float d,char i)
{
    printf("newdef:float = %f, char = %x \n", d, i);
    return 0;
}
