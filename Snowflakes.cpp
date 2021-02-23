#include <stdio.h>
void salju(int a,int b){
    if(b>0){
        salju(a,b-1);
        int space = a - b;
        while(space > 0){
            printf(" ");
            --space;
        }
        int kepingan = ((b - 1)*2) + 1;
        while(kepingan > 0){
            printf("*");
            --kepingan;
        }
        printf("\n");
        salju(a,b-1);
    }
    return;
}

int main(){
    int a;
    scanf("%d", &a);
    salju(a,a);
    return 0;
}
