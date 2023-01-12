//To check a matrix is sparse or not.
#include <stdio.h>
#include <conio.h>
int main(){
    int rows, cols, row, col, count=0;
    int matrix[50][50];
    printf("Enter Rows and Columns of Matrix\n");
    scanf("%d %d", &rows, &cols);
    printf("Enter Matrix of size %dX%d\n", rows, cols);
    for(row = 0; row < rows; row++){
        for(col = 0; col < cols; col++){
            scanf("%d", &matrix[row][col]);
        }
    }
    for(row = 0; row < rows; row++){
        for(col = 0; col < cols; col++){
            if(matrix[row][col] == 0){
             count++;
            }
        }
    }
    if(count > (rows*cols)/2){
        printf("Input Matrix is a Sparse Matrix\n");
    } else {
        printf("Input Matrix is Not a Sparse Matrix\n");
    }
    getch();
    return 0;
}
