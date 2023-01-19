#include "unistd.h"

void mx_matrix_voice(void){
    char a[4] = "^G%\n";
    size_t b = strlen(a);

    write(1,a,b);
    write(1,"\a",1);
}

int main(){
    mx_matrix_voice();
}