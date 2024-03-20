#include<stdio.h>

int main() {
    int a, n;
    scanf("%d", &n);
        if (n>0) {
            n++;
        }
            
     if (n<5) {
        n-=1; 
     }
        else
        n--;
     printf("%d\n", n);
}