//Write a program to write a string in file
#include <stdio.h>
int main() {
        FILE * fp;
        fp = fopen("fputs_test.txt", "w+");
        fputs("yo what's up!", fp);
        return (0);
}
