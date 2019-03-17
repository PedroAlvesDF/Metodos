#include <stdio.h>
#include <math.h>

int main()
{
    double k = 0, tk = 0, tk1 = 0, pi1 = 0, pi2 = 0;
    
    printf("k               tk              pi1             pi2\n");
    tk = sqrt(3)/3; //valor inicial de tk
    for (int i = 0; i<30; i++){
        pi1 = 6 * pow(2, k) * tk;
        tk1 = (sqrt(pow(tk, 2) +1) - 1)/tk;
        pi2 = (6 * pow(2, k+1) * tk)/(sqrt(pow(tk, 2)+1)+1);
        
        printf("%.15lf %.15lf %.15lf %.15lf\n", k, tk, pi1, pi2);
        k++;
        tk = tk1;
    }

    return 0;
}
