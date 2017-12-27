#include <stdio.h>
#include <unistd.h>

void base_func() {
    int *p;
    printf("this is a crash %d\n", *p);
}

void branch_1_func() {
    int branch_1 = 0;
}

// 
int main() {
    return 0;
}
