#include "mx_printchar.c"

void mx_isos_triangle(unsigned int length, char c){
    for(int i = 1;i <= length; i++){
        for(int j = 1;j<i;j++){
            write(1,&c,1);
        }
        mx_printchar(c);
    }
}