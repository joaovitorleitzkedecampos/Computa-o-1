#include <stdio.h>

void converteHora (int total_segundos, int *hora, int *min, int *seg) {
  *hora = total_segundos / 3600;
  *min = (total_segundos % 3600) / 60;
  *seg = total_segundos % 60;
  }
int main() {
int hora, min, seg;
int total_segundos;

    printf("digite a quantidade de segundos:");
    scanf("%d", &total_segundos);
    
    converteHora (total_segundos, &hora, &min, &seg);
    
    printf("%d:%d:%d", hora, min, seg);

    return 0;
}