/*
CH-230-A
a2 p5.c
Zarina Abulkassova
zabulkasso@jacobs-university.de
*/
#include <stdio.h> 
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a);
    int *ptr_a;
    ptr_a=&a;
    printf("%p\n", ptr_a);
    *ptr_a += 5;
    printf("%d\n", a);
    printf("%p", &a);
    return 0;
}