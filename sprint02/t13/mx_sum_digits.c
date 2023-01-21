int mx_sum_digits(int num){
    int sum = 0;
    while(1){
        sum+=num%10;
        if(num < 10 && num > -10) break;
        num/=10;
    }
    if(sum < 0)return -sum;
    return sum;
}