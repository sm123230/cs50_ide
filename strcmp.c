#include <stdio.h>
#include <string.h>

int main (void){
    char y[100];char x[100];

    printf("first:");
    scanf("%s", x);

    printf("Second:");
    scanf("%s", y);

    if(strcmp(x, y)== 0){
        printf("same");
    }
    else{
        printf("diff");
    }

}