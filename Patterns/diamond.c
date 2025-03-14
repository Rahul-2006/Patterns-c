#include<stdio.h>
/*

!!!!!! Take some time to digest if first time trying this!!!!!

*/
/*
n = 4
i = 0     *
i = 1    * *
i = 2   * * *
i = 3  * * * *
      ----------     First do the above half and then join with below half to complete the diamond
i = 0   * * *
i = 1    * *
i = 2     *
*/

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d" , &n);
    //first half
    for(int i = 0 ; i < n ; i++){
        //spaces
        for(int j = 0 ; j < n - i - 1 ; j++){
            printf(" ");
        }
        //star
        for(int j = 0 ; j < i+1 ; j++){
            printf("* ");
        }
        printf("\n");
    }
    //second half
    for(int i = 0 ; i < n - 1 ; i++){
        //spaces
        for(int j = 0 ; j < i+1 ; j++){
            printf(" ");
        }
        //star
        for(int j = 0 ; j < n - i - 1 ; j++){
            printf("* ");
        }
        printf("\n");
    }
}