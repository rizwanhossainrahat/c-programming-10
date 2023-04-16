#include<stdio.h>
#include<string.h>
int main()
{
    // fgets
      char a[25];
    fgets(a,22,stdin);
    // index a enter soranor jonno null boshaite hobe
    a[20]='\0';
    printf("%s",a);

    // gets use kora hoi input neyar jonno space shoho.seize 1 barai nite hobe.seize ar thake bashi input nite pare.
    //  char a[21];
    // gets(a);
    // printf("%s",a);
    return 0;
}