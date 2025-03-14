#include<stdio.h>

/*
n = 4
i = 0    1
i = 1    2 3
i = 2    4 5 6
i  =3    7 8 9 10

*/

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d" , &n);
    int num = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i + 1 ; j++){
            printf("%d " , num);
            num++;
        }
        printf("\n");
    }

}