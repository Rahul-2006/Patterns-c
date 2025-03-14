#include<stdio.h>

/*
n = 4
i = 0    * * * *
i = 1     * * *
i = 2      * *
i = 3       *
        --------------      First do the above half and then move to below half!!
i = 0      * *
i = 1     * * *
i = 2    * * * *   
*/

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d" , &n);
    //first half
    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < i ; j++){
            printf(" ");
        }
        //star
        for(int j = 0 ; j < n - i ; j++){
            printf("* ");
        }
        printf("\n");
    }
    //second half
    for(int i = 0 ; i < n - 1 ; i++){
        //spaces
        for(int j = 0 ; j < n - i - 2 ; j++){
            printf(" ");
        }
        //star
        for(int j = 0 ; j < i + 2 ; j++){
            printf("* ");
        }
        printf("\n");
    }
} 