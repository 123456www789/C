#include <stdio.h>

int main()
{
    char vegetable1[][9] = {"beet",
                            "barley",
                            "basil",
                            "broccoli",
                            "beans"};
    char *vegetable2[] = {  "carrot",
                            "celery",
                            "corn",
                            "cilantro",
                            "crispy fried patatoes"}; //û����
    // int *weight[] = {{1,2,3,4,5},
                     // {6,7},
                     // {8,9,10}};//�޷��ɹ����룬��Ϊ*weightָ��û��ָ��ľ����ַ
    int row_1[] = {1,2,3,4,5,-1}; //-1�Ǻ�������־,���Ǻܶ���Ϊʲô����-1
    int row_2[] = {6,7,-1};       //��README��txt 10.4 2
    int row_3[] = {8,9,10,-1};
    int *weight[] = {row_1,
                     row_2,
                     row_3};
    printf("vegetable1[0]:%s,vegetable2[0]:%s\n",vegetable1[0],vegetable2[0]);
    printf("weight[0][5]:%d\n",weight[0][5]);
    return 0;
}
