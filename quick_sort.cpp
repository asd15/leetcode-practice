//Quick sort - recursive sorting algorithm
//first find the pivot (last elem) and compare it with all
//put all elems greater than pivot will be on right hand side of it
//put all elems less than it will be on left hand side of it
//this is partitioning function
//sort first half and second half
#include<iostream>
using namespace std;

int partition(int a[], int s, int e){
    int pivot = a[e];
    int countsmaller = 0;
    int i = 0;

    for(int j=0; j<e-1; j++){
        if(a[j] < pivot){
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[e]);
    return i;
}

void quicksort(int a[], int s, int e){
    if(s>=e) return;

    int p = partition(a, s, e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}

int main(){
    int a[] = {4,6,3,7,8,5};
    quicksort(a, 0, 5);
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}