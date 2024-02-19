#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


double Hanoi(int n, char init, char target, char temp){

    double time_spent = 0.0;
    time_t begin = time(NULL);

    if(n > 0){
        Hanoi(n-1,init, temp, target);

        //printf("Move disk %d from %c to %c\n",n,init,target);
        Hanoi(n - 1, temp, target, init);
    }

    //sleep(1000);

    time_t end = time(NULL);

    time_spent += end - begin;
    return time_spent;
}


int main() {
    double tempExec[5] = {0,0,0,0,0};
    for (int i = 0; i<5;i++){
        tempExec[i] = Hanoi(5*i,'A','C','B');
    }
    for (int i = 0; i<5;i++){
        printf("/%f/",tempExec[i]);
    }

    printf("\n%f",Hanoi(10,'A','C','B'));
    return 0;
}
