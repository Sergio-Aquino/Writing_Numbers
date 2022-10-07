#include <stdio.h>

void unit_function(int mod);
void teen_function(int mod);
void complete_numbers(int div);
void div_function(int div);

int main(void){

  int num = 0;
  int mod = 0;
  int div = 0;

  do{
      printf("\n\nInform a number: ");
      scanf("%d", &num);

      if(num == 0){
          break;
        
      } else {
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
            
          } else {
              printf("invalid number. Please, try again.");
          }
      }
    
  }while(num != 0);

  printf("The program was ended successfully.");

  return 0;
}


void unit_function(int mod){
  switch(mod){
    case 1:
      printf("One.");
      break;

    case 2:
      printf("Two.");
      break;

    case 3:
      printf("Three.");
      break; 

    case 4:
      printf("Four.");
      break; 

    case 5:
      printf("Five.");
      break;

    case 6:
      printf("Six.");
      break;

    case 7:
      printf("Seven.");
      break; 

    case 8:
      printf("Eight.");
      break;

    case 9:
      printf("Nine.");
      break;
    }
}


void teen_function(int mod){
    switch(mod){
      case 1:
        printf("Eleven.");
        break;

      case 2:
        printf("Twelve.");
        break;

      case 3:
        printf("Thirteen.");
        break;

      case 4:
        printf("Fourteen.");
        break;

      case 5:
        printf("Fifteen.");
        break;

      case 6:
        printf("Sixteen.");
        break;

      case 7:
        printf("Seventeen.");
        break;

      case 8:
        printf("Eighteen.");
        break;

      case 9:
        printf("Nineteen.");
        break;
    }
}


void complete_numbers(int div){
    switch(div){
        case 1:
        printf("Ten.");
        break;

      case 2:
        printf("Twenty.");
        break;

      case 3:
        printf("Thirty.");
        break;

      case 4:
        printf("Fourty.");
        break;

      case 5:
        printf("Fifty.");
        break;

      case 6:
        printf("Sixty.");
        break;

      case 7:
        printf("Seventy.");
        break;

      case 8:
        printf("Eighty.");
        break;

      case 9:
        printf("Ninety.");
        break;

      default:
        printf("One hundred.");
        break;
    }
}


void div_function(int div){
    switch(div){
      case 2:
        printf("Twenty ");
        break;

      case 3:
        printf("Thirty ");
        break;

      case 4:
        printf("Fourty ");
        break;

      case 5:
        printf("Fifty ");
        break;

      case 6:
        printf("Sixty ");
        break;

      case 7:
        printf("Seventy ");
        break;

      case 8:
        printf("Eighty ");
        break;

      case 9:
        printf("Ninety ");
        break;
    }
}