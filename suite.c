#include <stdio.h>

int un(int n){
    if(n>0){
        if(n== 0 || n == 1){
            return 1;
        }else{
            return un(n-1)+un(n-2);
        }
    }
}

int fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        int temp = a;
        a = b;
        b = temp + b;
    }
    return a;
}

int main() {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", fib(i));
    }
    return 0;
}
