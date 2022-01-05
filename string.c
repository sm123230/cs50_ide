#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main (void){
    char *s= "shubhammourya";
    printf("%s\n", s);
    printf("%c\n", s[0]);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%c\n", *(s+1));   //* represents goto that add
    printf("%d\n", s[7]);
    int l=strlen(s);
    printf("%d\n", l);

}



//char *== string(* is the add of something
// and char* will give pointer variable which will
// point to a charac address)


//so while using string when we print
// with *s then  s just represents the address
//of (string s) not the chars in it and * goes to
// that add so that it can print that actual value

//in short  *s points to add of 1st value
// and rest is obtained from the add manipulation

// coz of, string is arrays of charac which is in
// contiguous form in memory..