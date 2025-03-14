#include<stdio.h>

/*
n = 4
i = 0    * * * *
i = 1     * * * *
i = 2      * * * *
i = 3        * * * *
*/

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < i ; j++){
            printf(" ");
        }
        //star
        for(int j = 0 ; j < n ; j++){
            printf("* ");
        }
        printf("\n");
    }
}