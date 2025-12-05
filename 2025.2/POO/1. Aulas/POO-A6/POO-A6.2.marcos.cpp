#include <bits/std++.h>
using namespace std;

    class Fracao{
        private:
            int num;
            int den;
        public:
            Fracao(int n, int d);
            void setNum(int n);
            void setDen(int d);
            int getNum();
            int getDen();
    };

    Fracao::Fracao(int n, int d){
        setNum(n);
        setDen(d);
    }

    void Fracao::setNum(int n){
        num = n;
    }

    

    void Fracao::setDen(int d){
        if (d == 0){
            den = 1;
        }
        den = d;

    }

    int Fracao::getNum(){
        return num;
    }

    int Fracao::getNum(){
        return den;
    }


int main(){

}
