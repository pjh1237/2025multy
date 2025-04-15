#include <stdio.h>
#include <conio.h>

void gotoxy(int x, int y) {

    printf("\033[%d;%dH", y, x);

}
 

int main()
{
puts(",                                  ,                      ,                                                 ,                               ,            , ");
printf("\033[91;44;1mBright red text with blue background and bold.\033[0m\n");






return 0;
 }