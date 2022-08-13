// matrix - singular            matrices - plural 
#include <stdio.h>
int r1,c1,r2,c2,i,j,m1[10][10],m2[10][10],sum[10][10];
void main(){
    printf("For matrix additon the number of rows & columns of the 1st matrix should be equal to the number of rowsn & columns of the 2nd matrix\n");
    printf("enter the rows and columns of the 1st matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the rows and columns of the 2nd matrix\n");
    scanf("%d%d",&r2,&c2);
    if(r1!=r2 || c1!=c2)
        printf("for matrix multiplication number of rows & columns of the 1st matrix should be equal to the number of rows & columns of the 2nd matrix\n");
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
                    sum[i][j]=m1[i][j]+m2[i][j];
            }
        }
        printf("Addition of 2 matrices\n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++)
                printf("%d\t",sum[i][j]);
            printf("\n");
        }
    }
}