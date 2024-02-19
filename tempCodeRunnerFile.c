#include <stdio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


double Hanoi(int n, char init, char target, char temp){

    time_t start, end;
    start = time(NULL);

    if(n > 0){
        Hanoi(n-1,init, temp, target);

        //printf("Move disk %d from %c to %c\n",n,init,target);

        Hanoi(n - 1, temp, target, init);
    }
    end = time(NULL);

    double time =(double)(end - start);
    return time;
}

