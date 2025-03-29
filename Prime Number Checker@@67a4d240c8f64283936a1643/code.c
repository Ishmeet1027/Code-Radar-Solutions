int isPrime( int num) {
    int prime;
    for (int i =0;i<=num;i++) {
        if (num%i==0) {
            prime =1;
            break;
        }
    }
    if (prime =1) {
        printf("0");
    } else {
        printf("1");
    }
    return 0;
}