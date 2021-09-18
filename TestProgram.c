#include<stdio.h>

double avg (double n1, double n2, double n3) {
    double res;
    return (n1+n2+n3) / 3;
}

int main() {
    double n1 = 15, n2 = 20, n3 = 40;

    printf("Average is : %f\n", avg(n1,n2,n3));

    return 0;

}
