#include <stdio.h>
float fahrenheitToCelsius(float fahrenheit){
 float celsius=(5.0/9.0)*(fahrenheit-32);
 return celsius;
}
int main()
{
 float temperatures[]={68,150,212,0,-22,-200};
 int numTemperatures=sizeof(temperatures)/sizeof(temperatures[0]);

 for(int i=0;i<numTemperatures;i++){
  float temperaturesFahrenheit=temperatures[i];
  float temperatureCelsius=fahrenheitToCelsius(temperaturesFahrenheit);
  printf("Fahrenheit%.2f=Celsius%.2f\n",temperaturesFahrenheit,temperatureCelsius);
  }

  return 0;
}
