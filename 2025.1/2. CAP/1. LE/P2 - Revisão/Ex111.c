#include <stdio.h>
 
int main() {
 
    return 0;
}

char* numero_raizes (float a, int b, int c){
if (a == 0){
    return "não";
} else {
    if ((b == 0)&&(c == 0)){
        return "não";
    } else {
        if (((a > 0)&&(b > 0)&&(c > 0))||((a < 0)&&(b < 0)&&(c < 0))) {
            return "não";
        } else {
            return "sim";
        }
    }

}
}