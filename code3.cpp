#include<stdio.h>
#include<math.h>
int degree(int num);
int main(void)
{int n,i,j,k;
    i=0;
    printf("please enter a number\n");
   printf("This program is used to find the minimum number of steps\n");
    scanf("%d",&n);
    j=degree(n);
    k=pow(2,j);
    printf("%d,%d",j,k);
    while(n>1)
    {if((n&1)==0)
    {n=n/2;
        i+=1;
        printf("^");
        continue;}
         if((n&1)!=0&&(k-n)==1)
            n+=1;
            i+=1;
            printf("+");
        continue;
            if((n&1)!=0&&(k-n)!=1)
            n-=1;
        i+=1;
        printf("-");
        }
    printf("共需要%d步",i);
    return 0;}
int degree(int num)
{int i;
    for(i=1;num>1;i++)
        num=num/2;
    return i;
}

