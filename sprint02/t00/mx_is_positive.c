#include "mx_printstr.c"

void mx_is_positive(int i){
    if(i > 0){
        mx_printstr("positive");
        return;
    }
    if(i == 0){
        mx_printstr("zero");
        return;
    }
    mx_printstr("negative");
}