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

    d = 'd';
    c = &d;
    b = &c;
    a = &b;

    printf("%s\t%s\t%s\t%s", ***a, **b, *c, d);

    //*a = &c;
    //***a = d;
    d = 'a';

    //printf("%s\t%s\t%s\t%s", a, b, c, d);
}