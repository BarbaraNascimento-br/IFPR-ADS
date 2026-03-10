#include <stdio.h>

void conversaoDeCelsiusParaKelvinFahrenheit(float celsius){
    float kelvin, fahrenheit;

    //  K = C + 273 / C = K - 273
    kelvin = celsius + 273;
    printf("K ---> C\n %.1f ---> %.1f\n", kelvin, celsius);

    printf("------------------------------\n");
    
    // F = 1,8 x (K- 273) + 32.
    fahrenheit =  1.8 * celsius + 32;
    printf("K ---> F \n %.1f ---> %.1f", kelvin, fahrenheit);

}

int main(){
    float temperaturaEmCelsius;

    printf("Informe a temperatura em Celsius:\n");
    scanf("%f", &temperaturaEmCelsius);
    conversaoDeCelsiusParaKelvinFahrenheit(temperaturaEmCelsius);
    return 0;
}
