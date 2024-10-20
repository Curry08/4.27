#include <stdio.h>

int main() {
    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    printf("I fattori primi di %d sono :\n",num);
    for(int i=2;1<num;i++){
        while(num%i==0){
            printf("%d ",i);
            num=num/i;
        }

    }
    return 0;
}
