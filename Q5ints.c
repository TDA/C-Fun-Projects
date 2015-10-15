//
// Created by Sai Prashanth Chandramouli on 10/14/15.
//

//
// Created by Sai Prashanth Chandramouli on 10/14/15.
//

#include <stdlib.h>
#include <stdio.h>
int main() {
    int ***a;
    int **b;
    int *c;
    int d;


    d = 10;
    c = &d;
    b = &c;
    a = &b;

    printf("%d\t%d\t%d\t%d\n", ***a, **b, *c, d);
    printf("%d\t%d\t%d\n", *a, b, &c);

}