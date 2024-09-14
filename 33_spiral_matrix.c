// FIX REQUIRED : UP AND DOWN FOR LOOP RUNNING EXTRA FOR horizontal matrix
// FIX REQUIRED : LEFT AND RIGHT FOR LOOP RUNNING EXTRA FOR vertical matrix
// FIX REQUIRED : Last element wrong for 3x3 matrix

#include <stdio.h>

int main(){
    int row,column;
    printf("Enter number of rows\n");
    scanf("%d",&row);
    printf("Enter number of columns\n");
    scanf("%d",&column);

    int arr1[row][column];

    for(int i=0;i<row;i++){
        printf("Row %d\n",i+1);
        for(int j=0;j<column;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        printf("| ");
        for(int j=0;j<column;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("|");
        printf("\n");
    }

    int a=0;                    // shift
    int d=0;

    while (d<row*column){

        // right
        for(int i=0+a;i<column-1-a;i++){
            printf("%d ",arr1[a][i]);
            d++;
            if(d>=row*column){goto end;}
        }

        // down
        for(int i=0+a;i<row-1-a;i++){
            printf("%d ",arr1[i][column-1-a]);
            d++;
            if(d>=row*column){goto end;}
        }

        // left
        for(int i=column-1-a;i>0+a;i--){
            printf("%d ",arr1[row-1-a][i]);
            d++;
            if(d>=row*column){goto end;}
        }
        
        // up 
        for(int i=row-1-a;i>0+a;i--){
            printf("%d ",arr1[i][a]);
            d++;
            if(d>=row*column){goto end;}
        }
        a++;
    }
    end:
        printf("");
}