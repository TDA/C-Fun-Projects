//
// Created by Sai Prashanth Chandramouli on 2/4/16.
//

void main() {
    char *name[2];
    name[0] = "/bin/sh";
    name[1] = NULL;
    execve(name[0], name, NULL);
    exit(0);
}
