// matrix - singular            matrices - plural
// number of rows of the 1st matrix should be equal to the number of columns of the 2nd matrix
#include <stdio.h>
int r1,c1,r2,c2,i,j,k,m1[10][10],m2[10][10],mul[10][10];
void main(){
    printf("For matrix multiplication the number of rows of the 1st matrix should be equal to the number of columns of the 2nd matrix\n");
    printf("enter the rows and columns of the 1st matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the rows and columns of the 2nd matrix\n");
    scanf("%d%d",&r2,&c2);
    if(r1!=c2)
        printf("for matrix multiplication number of rows of the 1st matrix should be equal to the number of columns of the 2nd matrix\n");
    else{
        printf("enter %d numbers of the 1st matrix\n",r1*c1);
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
                scanf("%d",&m1[i][j]);
        }
        printf("enter %d numbers of the 2nd matrix\n",r2*c2);
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
                scanf("%d",&m2[i][j]);
        }
        printf("1st matrix\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
                printf("%d\t",m1[i][j]);
            printf("\n");
        }
        printf("2nd matrix\n");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
                printf("%d\t",m2[i][j]);
            printf("\n");
        }
        // multiplication 
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                mul[i][j]=0;
                for(k=0;k<r1;k++)
                    mul[i][j]+=m1[i][k]*m2[k][j];
            }
        }
        printf("Multiplication of 2 matrices\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++)
                printf("%d\t",mul[i][j]);
            printf("\n");
        }
    }
}