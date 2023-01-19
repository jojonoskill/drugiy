#include "./mx_printchar.c"

void mx_only_printable(void){
    for(int i = 126;i>31;i--){
        mx_printchar(i);
    }
}

int main(){
    mx_only_printable();
}