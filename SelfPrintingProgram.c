//
// Created by Sai Prashanth Chandramouli on 10/13/15.
//

#include <stdio.h>

int main(int argc, char ** argv) {
    setbuf(stdout, NULL);
    //printf("hello world\n");
    printf("Enter the path to the file\n");
    char path[1000];
    scanf("%s", path);
    // "/Users/schandramouli/ClionProjects/Fun-Projects/main.cpp"
    FILE* fp = fopen(path, "r");
    if (fp == NULL) {
        printf("uh oh");
    }
    char str[2000];
    while (!feof(fp)) {
        if(fgets(str, 1999, fp) != NULL) {
            printf("%s", str);
        }
    }

    fclose(fp);
    return 0;
}


