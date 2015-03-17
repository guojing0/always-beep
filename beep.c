#include <stdio.h>

int main(int argc, char const *argv[])
{
    while (1) {
        printf("\a"); /* it would never stop unless you press Ctrl - C */
    }

    return 0;
}