#include <stdio.h>
#define UP      1
#define RIGHT   2
#define DOWN    3
#define LEFT    4
void show(int m,int n,int nums[m][n]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",nums[i][j]);
        }
        printf("\n");
    }
}

void rotateOnce(int m,int n,int nums[m][n]){
    int t = nums[0][0];
    int x=0;
    int y=0;
    int top = 1;
    int right = n-1;
    int bottom = m-1;
    int left = 0;
    int direction = RIGHT;
    int count = 0;
    int k;
    while(1){
        if(direction==RIGHT){
            y+=1;
            if(y==right){
                right-=1;
                direction = DOWN;
            }
        }
        else if(direction==DOWN){
            x+=1;
            if(x==bottom){
                bottom-=1;
                direction = LEFT;
            }
        }
        else if(direction==LEFT){
            y-=1;
            if(y==left){
                left+=1;
                direction = UP;
            }
        }
        else{
            x-=1;
            if(x==top){
                top+=1;
                direction = RIGHT;
            }
        }
        count+=1;
        if(count==m*n){
            break;
        }
        k = nums[x][y];
        nums[x][y] = t;
        t = k;
    }
    nums[0][0] = k;
    printf("\n");
}

int main(){
    int m,n;
    printf("输入行：");
    scanf("%d",&m);
    printf("输入列：");
    scanf("%d",&n);
    int nums[m][n];
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            nums[i][j] = i*n+j+10;
        }
    }
    show(m,n,nums);
    printf("\n");
    rotateOnce(m,n,nums);
    show(m,n,nums);
    return 0;
}

