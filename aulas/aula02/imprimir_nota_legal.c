#include <stdio.h>
int main(){
    printf("--------------------------------------\n");
    printf( "  NOTA    LEGAL\n");
    printf("--------------------------------------\n");
    printf("Item          qtd    prc    valor\n");
    printf("%-14s %03i %6.2f %7.2f\n", "caneta azul",2,2.0,4.0);
    printf("%-14s %03i %6.2f %7.2f\n", "Borracha", 1, 5.0, 5.0);
    printf("%-14s %03i %6.2f %7.2f\n","Resma de papel",1 , 10.0, 10.0);
    printf("--------------------------------------\n");
    printf("                   TOTAL:  R$ %4.2f\n", 19.0);

    return 0;
}
