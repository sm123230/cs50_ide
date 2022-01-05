#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n; int g;
    srand(time(0));
    n= rand()%100 + 1 ;
    // printf("No. is %d\n", n);

do{
    printf("Guess the number:"); scanf("%d", &g);
    if (g < n){
        printf("Opps!, thats low.\n");
    }
    else if (g > n){
        printf("Opps!, thats high.\n");
    }
    // else if (g - n > -10){
    //     printf("Too close...go up.\n");
    // }
    // else if (g - n < 10){
    //     printf("Too close...go down.\n");
    // }
    else if(g == n) {
        printf("You won.\n");
        return 0;
    }
}
while((g < n) || (g > n));

}