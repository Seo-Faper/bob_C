#include <stdio.h>
#include <stdint.h>
int main(int argc, char *argv[])
{
    
    for (int i = 1; i < argc; i++) {
        printf("Value[%d] : %s\n", i, argv[i]);
    }
    return 0;
}
