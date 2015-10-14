//
// Created by Sai Prashanth Chandramouli on 10/14/15.
//

#include <stdio.h>

int main() {
    setbuf(stdout, NULL);
    int a = 5;
    printf("%d\t%d\t%d\t%d\n", a, a--, --a, a);
    a = 5;
    printf("%d\t%d\t%d\t%d\n", a, a++, ++a, a);
}