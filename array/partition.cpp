#include<stdio.h>

int partition(int *a, int low, int high){
    int pos = low, i, pivot = a[low], temp;
    for (i = low + 1; i <= high; i++)
        if(a[i] <= pivot) {
            pos++;
            temp = a[pos];
            a[pos] = a[i];
            a[i] = temp;
        }
    return pos;
}

int main(){
    int data[] = { 10, 1, 2, 3 };
    int i, retvalue;
    retvalue = partition(data, 0, 4-1);
    printf("%d\n", retvalue);
    for(i = 0; i< 4; ++i)
        printf("%d ", data[i]);//10 1 2 3 : N/C 
    printf("\n");
    return 0;
}