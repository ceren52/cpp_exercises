#include <stdio.h>
void swap(int a,int b) {
    int temp;
    temp = a; //temp 50 oldu
    a = b;    //a 20 oldu
    b = temp; //b 50 oldu
}
void swap2(int *a,int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 50 , b = 20;
    printf("a: %d \t b: %d \n",a,b);
    swap(a, b);
    printf("a: %d \t b: %d \n",a,b);
    swap2(&a,&b);
    printf("a: %d \t b: %d \n",a,b);
    return 0;
}