#include<stdio.h>
#include<windows.h>
#include<conio.h>
void gotoxy(short x, short y)
{
    COORD pos = {x,y};//sets co-ordinates in(x,y)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
{



    char text[4000]="\
         0000   000000  000000  0000  000000  00   00  000000   000000\n\r\
        00  00    00      00     00     00    00   00  00   00  00\n\r\
        000000    00      00     00     00    00   00  00   00  0000\n\r\
        00  00    00      00     00     00    00   00  00   00  00\n\r\
        00  00    00      00    0000    00     00000   000000   000000\n\r\
        \n\r\
         00  00000 00000 00000 0   0 0000  00000 0   0  00000 00000\n\r\
        0  0   0     0   0     00  0 0   0 0     00  0 0      0\n\r\
        0000   0     0   000   0 0 0 0   0 000   0 0 0 0      000\n\r\
        0  0   0     0   0     0  00 0   0 0     0  00 0      0\n\r\
        0  0   0     0   00000 0   0 0000  00000 0   0  00000 00000\n\r\
        \n\r\
        0   0   00   0   0   00    00000  00000  0   0  00000  0   0  00000\n\r\
        00 00  0  0  00  0  0  0  0       0      00 00  0      00  0    0\n\r\
        0 0 0  0000  0 0 0  0000  0  000  000    0 0 0  000    0 0 0    0\n\r\
        0   0  0  0  0  00  0  0  0    0  0      0   0  0      0  00    0\n\r\
        0   0  0  0  0   0  0  0   00000  00000  0   0  00000  0   0    0\n\r\
        \r ";  
      system("clr");
      system("color 0A");
        printf("%s",text);
       sleep(1000);
         system("clr");
      system("color 0B");
        printf("%s",text);
        sleep(1000);
         system("clr");
      system("color 0C");
        printf("%s",text);
        sleep(1000);
         system("clr");
      system("color 0d");
        printf("%s",text);
        //sleep(1000);
    getch();
    return 0;
}