#include <stdio.h>

int main(){
  int chooseCalculation;
  
  printf("What do you want to calculate (celsius/fahrenheit = 1)");
  scanf("%i", &chooseCalculation);
  
  if(chooseCalculation == 1){
    convertTemp();

  }

}

int convertTemp(void)
{
  char chooseConvertTemp;
  float celsius, fahrenheit;
  printf("Choose what you want to convert: c or f");
  scanf("%c", &chooseConvertTemp);

  if(chooseConvertTemp == 'c'){
    /* Input temperature in celsius */
    printf("Please enter a celsius temperature: ");
    scanf("%f", &celsius);
    /* celsius to fahrenheit conversion formula */
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
  }

  if (chooseConvertTemp == 'f'){
    /* Input temperature in fahrenheit */
    printf("Please enter a fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    /* fahrenheit to celsius conversion formula */
    celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
  }

    return 0;
}