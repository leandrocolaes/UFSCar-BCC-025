#include <iostream>

    class horario {
        private:
            int h;
            int m;
            int s;
        public:
            ~horario();
            horario(int h =0, int m = 0, int s = 0){
                sethorario(h, m, s);
            }

            void sethorario(int hora, int minuto, int segundo){
                set_Hora(hora);
                set_Minuto(minuto);
                set_Segundo(segundo);
            }
            void print12(){
                if (h > 12){
                    std::cout << h-12 << ":" << m << ":" << s << " PM" << std::endl;
                } else {
                    std::cout << h << ":" << m << ":" << s << " AM" << std::endl;
                }

            }
            void print24(){
                std::cout << h << ":" << m << ":" << s << std::endl;
            }

            void set_Hora(int hora){
                h = hora;
            }
            void set_Minuto(int minuto){
                m = minuto;
            }
            void set_Segundo (int segundo){
                s = segundo;
            }

            int get_Hora(){
                return h;
            }

            int get_Minuto(){
                return m;
            }

            int get_Segundo(){
                return s;
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
