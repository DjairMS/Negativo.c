#include <stdio.h>

int main()
{
    int N, I;
    
    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &N);
    
    int vet[N];
    
    for (I = 0; I < N; I++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[I]);
        
    }
    printf("\nNUMEROS NEGATIVOS:\n");
    
    for (I =0; I < N; I++) {
        
        if (vet[I] < 0){
            printf("%d\n", vet[I]);
        }
        
        
        
    }
    
    

    return 0;
}
