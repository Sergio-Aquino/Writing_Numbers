#include <stdio.h>

void unit_function();
void teen_function();
void complete_numbers();
void div_function();

int main(void){

  int num = 0;
  int mod = 0;
  int div = 0;

  do{
      printf("\n\nInforme um número: ");
      scanf("%d", &num);

      if(num == 0){
          break;
        
      }else{
          mod = num % 10;
          div = num / 10;

          if(div == 0 && mod != 0){
              unit_function(mod);
            
          } else if(mod == 0 && div != 0){
              complete_numbers(div);
            
          } else if(div == 1 && mod >= 1 && mod <= 9){
              teen_function(mod);
            
          } else if(div >= 2 && div <= 9 && mod >= 1 && mod <= 9){
              div_function(div);
              unit_function(mod);
            
          }else{
              printf("Cem.");
          }
      }
    
  }while(num != 0);

  printf("Programa finalizado com sucesso :) .");

  return 0;
}


void unit_function(mod){
  switch(mod){
    case 1:
      printf("Um.");
      break;

    case 2:
      printf("Dois.");
      break;

    case 3:
      printf("Três.");
      break; 

    case 4:
      printf("Quatro.");
      break; 

    case 5:
      printf("Cinco.");
      break;

    case 6:
      printf("Seis.");
      break;

    case 7:
      printf("Sete.");
      break; 

    case 8:
      printf("Oito.");
      break;

    case 9:
      printf("Nove.");
      break;
    }
}


void teen_function(mod){
    switch(mod){
      case 1:
        printf("Onze.");
        break;

      case 2:
        printf("Doze.");
        break;

      case 3:
        printf("Treze.");
        break;

      case 4:
        printf("Quatorze.");
        break;

      case 5:
        printf("Quinze.");
        break;

      case 6:
        printf("Dezesseis.");
        break;

      case 7:
        printf("Dezessete.");
        break;

      case 8:
        printf("Dezoito.");
        break;

      case 9:
        printf("Dezenove.");
        break;
    }
}


void complete_numbers(div){
    switch(div){
        case 1:
        printf("Dez.");
        break;

      case 2:
        printf("Vinte.");
        break;

      case 3:
        printf("Trinta.");
        break;

      case 4:
        printf("Quarenta.");
        break;

      case 5:
        printf("Cinquenta.");
        break;

      case 6:
        printf("Sessenta.");
        break;

      case 7:
        printf("Setenta.");
        break;

      case 8:
        printf("Oitenta.");
        break;

      case 9:
        printf("Noventa.");
        break;

      default:
        printf("Cem.");
        break;
    }
}


void div_function(div){
    switch(div){
      case 2:
        printf("Vinte e ");
        break;

      case 3:
        printf("Trinta e ");
        break;

      case 4:
        printf("Quarenta e ");
        break;

      case 5:
        printf("Cinquenta e ");
        break;

      case 6:
        printf("Sessenta e ");
        break;

      case 7:
        printf("Setenta e ");
        break;

      case 8:
        printf("Oitenta e ");
        break;

      case 9:
        printf("Noventa e ");
        break;
    }
}