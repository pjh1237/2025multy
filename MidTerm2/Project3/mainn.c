#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include<stdio.h>

int PassOrFail(int score)
{
    if (score >= 50)
    {
        return 1;
    }
    return 0;
}


int main() {
    int a;
    scanf(" %d", &a);
    int result = PassOrFail(a);
    if (result == 0)

        printf("재시험 있습니다");

    else
        printf("재시험 없습니다!");





    return 0;
}