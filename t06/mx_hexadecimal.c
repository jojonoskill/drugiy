#include "./mx_printchar.c"

void mx_hexadecimal(void){
    for(int i = 0;i<16;i++){
        mx_printchar(i);
    }
}

int main(){
    mx_hexadecimal();
    return 0;
}