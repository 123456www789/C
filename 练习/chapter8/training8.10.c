//Windows7����������������
#include <curses.h>
//ʹ��curses�������ǰ�涨���kbhit()����
#include <sys/filio.h>

int kbhit()
{
    int i;
    ioctl(0,FIONREAD,&i);
    return i;   //���ؿ��Զ�ȡ���ַ��ļ���ֵ
}

main()
{
    int c = ' ', i = 0;

    initscr();  //��ʼ��curses����
    cbreak();
    noecho();   //����ʱ������Ļ�ϻ����ַ�

    mvprintw(0, 0, "Press 'q' to quit\n");
    refresh();

    while(c != 'q')
        if(kbhit())
        {
            c = getch();    //������������Ϊ����֪����һ���ַ����ڵȴ�
            mvprintw(1, 0, "got char '%c' on iteration %d \n", c, ++i);
            refresh();
        }
    nocbreak();
    echo();
    endwin();
}
