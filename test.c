#include <stdio.h>
#include <unistd.h>

void base_func() {
    int *p;
    printf("this is a crash %d\n", *p);
}

void dev_func() {
    int dev_func_int = 0;
}

// 
int main() {
    return 0;
}
