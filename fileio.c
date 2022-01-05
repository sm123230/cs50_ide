#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(){

FILE *f= fopen("class.csv", "a");

char* name= get_string("Enter name:");
int no = get_int("ENeter no = ");

fprintf(f,"%s,%d", name, no);
fclose(f);
}
