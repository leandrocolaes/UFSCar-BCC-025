#include <iostream>

    class horario {
        private:
            int segundos;
        public:
            horario(int h =0, int m = 0, int s = 0){
                sethorario(h, m, s);
            }

            void sethorario(int hora, int minuto, int segundo){
                segundos  = 0;
                set_Hora(hora);
                set_Minuto(minuto);
                set_Segundo(segundo);
            }
            void print12(){
                if (get_Hora() > 12){
                    std::cout << get_Hora()-12 << ":" << get_Minuto() << ":" << get_Segundo() << " PM" << std::endl;
                } else {
                    std::cout << get_Hora() << ":" << get_Minuto() << ":" << get_Segundo() << " AM" << std::endl;
                }
            }
            void print24(){
                std::cout << get_Hora() << ":" << get_Minuto() << ":" << get_Segundo() << std::endl;
            }

            void set_Hora(int hora){
                segundos += hora*3600;
            }
            void set_Minuto(int minuto){
                segundos += minuto*60;
            }
            void set_Segundo (int segundo){
                segundos += segundo;
            }

            int get_Hora(){
                return segundos/3600;
            }

            int get_Minuto(){
                return (segundos - get_Hora()*3600)/60;
            }

            int get_Segundo(){
                return segundos - get_Hora()*3600 - get_Minuto()*60;
            }

            
    };

int main (){
    horario acordar(7, 23, 45);
    horario comer (11, 30);
    horario dormir;

    std::cout << "horário de acordar: ";
    acordar.print12();
    std::cout << "horário de comer: ";
    comer.print12();
    std::cout << "horário de dormir ";
    dormir.print12();

    comer.set_Hora(13);
    std::cout << std::endl << "horario de comer modificado: ";
    comer.print12();

    std::cout << "Dormir apos " << dormir.get_Hora() << "horas" << std::endl;
}
