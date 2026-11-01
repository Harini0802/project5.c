```c
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("info.txt","w");
    fprintf(fp,"C Programming is an interesting subject that helps us develop logical thinking and problem-solving skills. The classes provide a good opportunity to learn the basics of programming. The practical sessions are useful for understanding how programs work.");
    fclose(fp);
    fp=fopen("info.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    fp=fopen("info.txt","a");
    fprintf(fp,"I am from the Biology group, so I didn't know anything about C programming before joining this class. But after attending your classes, I started learning C programming step by step. Your teaching is very clear and easy to understand. You make even difficult concepts simple. Now I have gained confidence in programming.");
    fclose(fp);
    return 0;
}
```
