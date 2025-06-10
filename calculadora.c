#include <stdio.h> 

int main(){
    float num1, num2, resultado; 
    int operacao; 

    printf("Informe o primeiro valor:"); 
    scanf("%f", &num1); 
    printf("Informe o segundo valor:"); 
    scanf("%f", &num2); 
    printf("---Selecione a Operaçao---\n1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n"); 
    scanf("%d", &operacao); 

    switch(operacao){
        case 1:
            resultado = num1 + num2; 
            printf("A soma de %.0f + %.0f e:%.1f\n", num1, num2, resultado); 
            break; 
        case 2:
            resultado = num1 - num2; 
            printf("A subtracao de %.0f - %.0f e:%.1f\n", num1, num2, resultado); 
            break;
        
        case 3:
            if(num2 != 0){    
                resultado = num1/num2; 
                printf("A divisao de %.0f / %.0f e:%.1f\n", num1, num2, resultado); 
            }
            else{
                printf("A operação não é permitida!\n"); 
            }
            break;
        case 4:
            resultado = num1 * num2; 
            printf("A multiplicacao de %.0f * %.0f e:%.1f\n", num1, num2, resultado); 
            break;
        default:
            printf("Operador inválido!\n"); 
            break; 
    }

}