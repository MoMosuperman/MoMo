#include<stdio.h>
int main()
{
    printf("Please enter data n");
    int n,i,j,jud,sum;
    char arr[10][80];
    jud=0;
    sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%s",&arr[i]);}
    for(i=0;i<800;i++)
    {if(arr[0][i]=='.')
        {arr[0][i]='\0';
        }}
    for(i=0;i<10;i++)
    {for(j=0;j<80;j++)
        {if(arr[i][j]=='.')
            jud=1;}
        if(jud==0)
        {for(j=0;j<80;j++)
            arr[i][j]=='\0';}}
    for(i=0;i<10;i++)
    {printf("%s ",&arr[i]);}
    for(i=0;i<10;i++)
    {if(arr[i][0]!='\0')
        sum=sum+1;}
    printf("%d",sum);
    return 0;
}

