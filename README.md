# P12.-Windows-Dyn-Library
Ejemplo de como compilar un programa y ligarlo con el DLL (Todo esto se hizo en Windows)
1. Primero compilar el dll a codigo objeto
 
 gcc -c mydll.c

2. Indicar que se esta construyendo un DLL
  
  gcc -shared -o mydll.dll mydll.o

3. Ligar el main con el DLL
  
  gcc -o p12 p12.c -L./ -lmydll
