// write a program to Swapping two Numbers using a Temporary Variable
#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 10, y = 15, temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d", x, y);
    getch();
}