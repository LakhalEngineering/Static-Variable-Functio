#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// using "static" to use variable across function
// and with making static functions with same name in different module it work(compile)
static int counter = 0;

int main(){

    int somme_result =0;
    int mult_result = 0;

    somme_result = somme(4,5);
    mult_result = mult(4,2);

    printf("counter is %d\n", counter);
    display();

}

int somme(int a, int b){

    counter = a + b;
    return a + b;
}

int mult(int a, int b){
    counter = a * 2;
    return a - b;

}

void display(){
    printf("counter = %d", counter);
}
