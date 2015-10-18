//
// Created by Sai Prashanth Chandramouli on 10/14/15.
//
#include <stdio.h>

int main() {
    setbuf(stdout, NULL);
    int a = (5, 6, 7);
    printf("%d\n", a);
    int b = 5;
    printf("%d\n", b);
    int c;
    c = a, b;
    printf("%d\n", c);
    c = (a, b);
    printf("%d\n", c);
    return 0;
}