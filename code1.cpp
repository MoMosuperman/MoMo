#include<stdio.h>
#define EXTREMITY 1e9
#include<stdbool.h>
int character(int num);
int main(void)
{int num,i;
    printf("please enter one num(3~1e9 , 'q' to end)\n");
    while(scanf("%d",&num)==1)
    {for(i=2;i<(num/2);i++)
    { if(num%2==0&&character(i)&&character(num-i))
            printf("%d=%d+%d\n",num,i,num-i);
    else if(num%2!=0&&character(i)&&character(num-3-i)&&(num-3-i)!=1)
        printf("%d=3+%d+%d\n",num,i,num-3-i);}
    printf("please enter one num(3~1e9,'q' to end)\n");
}
    printf("end\n");
    return 0;}
int character(int num)
{int i;
    bool isPrime;
    for(i=2,isPrime=true;(i*i)<=num;i++)
    {if(num%i==0)
        isPrime=false;}
    return isPrime;
}

