#include <stdio.h>

int main()

{

    int i,j;

    int rows;

    int count=0;

    printf("Enter the no rows");

    scanf("%d",&rows);

    for(i=1;i<=rows;i++){

    for(j=1;j<=i;j++){

        count+=1;

        printf("%d",count);

        }

    printf("\n");

    }


    return 0;

}