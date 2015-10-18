//
// Created by Sai Prashanth Chandramouli on 10/14/15.
//

#include <stdlib.h>
#include <stdio.h>
int main() {
    char ***a;
    char **b;
    char *c;
    char d;

    b = (char **) malloc(sizeof(char *)); // memory 1
    c = (char *) malloc(sizeof(char)); // memory 2

    printf("%d\t%d\t%d\t%d\n", a, b, c, d);

    d = 'd';
    a = &b;

    printf("%c\t%c\t%c\t%c\n", *a, b, c, d);
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);

    *a = &c;
    ***a = d;
    d = 'a';

    printf("%c\t%c\t%c\t%c\n", ***a, **b, *c, d);
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    return 0;
}