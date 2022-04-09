#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(void)
{int Snum,Pnum,i,j,k;
    scanf("%d%d",&Snum,&Pnum);
    printf("取件机台数    取件人数\n");
    printf("%5d%5d",Snum,Pnum);
    int arr[Pnum];
    int brr[Snum];
    for(i=0,j=0;i<Pnum;i++)
    {  scanf("%d",&j);
        arr[i]=j;}
    int len = sizeof(arr)/sizeof(arr[0]);
    srand( (unsigned)time(NULL) );
        int last = len-1;
        for(j=0; j<len-1; j++)
        {
            int index = rand()%len;
            int *tmp=&arr[last];
            arr[last]=arr[index];
            arr[index]=*tmp;
            last--;
        }
    for( i=0,k=0; i<len; i++)
    {printf("%-14d",arr[i]);
        brr[k]=(arr[i]+arr[i+1]);
            if( (i+1)%Snum==0 )
                printf("\n");
        }
        printf("\n");
    int fmax=brr[k];
    printf("%d\n",fmax);
    return 0;}

