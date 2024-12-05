#include <stdio.h>
#include <stdlib.h>
float minimum( float a, float b){

    (a<=b)? a:b;
}
int main()
{
    float n1, n2, m;
    printf("Hello saisir deux nombre au clavier");
    scanf("%f", &n1);
    scanf("%f", &n2);
    m = minimum(n1,n2);
    printf("le min est %f", m);
    return 0;
}
