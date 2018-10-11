#include<stdio.h>
int Maximum(int a[], int n) 
{ 
    int max = a[0]; 
    for (int i = 1; i < n; i++) {
        if (a[i] > max) 
            max = a[i]; 
        }
    return max; 
} 
void countSort(int a[], int n, int exp) 
{ 
    int output[n];
    int i, count[10] = {0};  
    for (i = 0; i < n; i++) {
        count[ (a[i]/exp)%10 ]++; 
    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1]; 
    }
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[ (a[i]/exp)%10 ] - 1] = a[i]; 
        count[ (a[i]/exp)%10 ]--; 
    }
    for (i = 0; i < n; i++) {
        a[i] = output[i]; 
    }
}
} 
void radixsort(int a[], int n) 
{ 
    int m =Maximum(a, n); 
    for (int exp = 1; m/exp > 0; exp *= 10) {
        countSort(a, n, exp); 
    }
} 
void display(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) {
        printf("%d\t",a[i]);
    }
} 
