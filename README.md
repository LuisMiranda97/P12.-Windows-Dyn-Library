# P12.-Windows-Dyn-Library
Como compilar un programa y ligarlo con el DLL (Todo esto se hizo en Windows)

1. Bajar el archivo .dll y ponerlo en el mismo directorio

2. Compilar y ligar el codigo (miprograma) con el DLL con el comando:
  
  gcc -o miprograma miprograma.c -L./ -lmydll
