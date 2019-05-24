#include <stdio.h>
FILE *p=fopen("gnp.gpl", "w");

int main()
{
    fprintf(p,"f(x) = sin(x)\n
    plot f(x) w l lw 3\n
    pause -1\n");
    close(p);

    return 0;
}
