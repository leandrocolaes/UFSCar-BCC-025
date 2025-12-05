#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} horario;

void setTime(horario *data, int h, int m, int s){
    data -> hora =(h >= 0 && h < 24) ? h : 0;
    data -> minutos = (m >= 0 && m < 24) ? m : 0;
    data -> segundos = (s >= 0 && s < 24) ? s : 0;
}

void print12(horario *data){
    printf("%d:%d:%d",  (data -> hora > 12) ? (data -> hora-12): data -> hora, data -> minutos, data -> segundos);
    printf("%s", (data -> hora > 12) ? "PM" : "AM");
}
void print24(horario *data){
   printf("%d:%d:%d", data -> hora, data -> minutos, data -> segundos);
}


int main () {
    horario data;


    setTime(&data, 1, 1, 1);

    printf("%d %d %d", data.hora, data.minutos, data.segundos);

    
    return 0;
}

