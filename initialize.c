#include<stdio.h>
int main()
{
    // char a[6]={'R','a','h','a','t'}; // no gurantee
    char a[6]="Rahat";  //gurantee
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    // %s diye print korar jonno seize 1 barai nite hobe last ghor a null \0 pawar jonno
    printf("%s",a);


    // for (int i = 0; i < 5; i++)
    // {
    //    printf("%c",a[i]);
    // }
    
    return 0;
}