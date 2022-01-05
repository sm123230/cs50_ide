#include<stdio.h>

int main(){
    FILE *ptr;
    int test;
    ptr = fopen("test.txt", "r");
    fscanf(ptr,"%d", &test);
    printf("%d", test);
    fclose(ptr);
return 0;
}