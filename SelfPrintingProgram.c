//
// Created by Sai Prashanth Chandramouli on 10/13/15.
//

#include <stdio.h>

int main(int argc, char ** argv) {
    setbuf(stdout, NULL);
    printf("hello world\n");
    FILE* fp = fopen("/Users/schandramouli/ClionProjects/Fun-Projects/main.cpp", "r");
    if (fp == NULL) {
        printf("uh oh");
    }
    char str[2000];
    while (!feof(fp)) {
        char * buff;
        fscanf(fp, "%s", buff);
        str += buff;
        //fprintf(fp, "im here%s\n", str);
        printf("at least here %s\n", str);
    }

    fclose(fp);
}


