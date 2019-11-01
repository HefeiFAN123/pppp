#include <stdio.h>
int main()
{
    int i;
    printf("There are following numbers:\n");
    for (i=1000;i<=9999;i++)
    {
        if(i==((i/1000*10+i%1000/100)+(i%100/10*10+i%10))*((i/1000*10+i%1000/100)+(i%100/10*10+i%10)))
           {
               printf("  %d",i);
           }
    }
}
