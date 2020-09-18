//store all position of an element inside array using recursion

#include<iostream>
#include<vector>
using namespace std;


//using array
int storeallindex(int a[], int n, int x, int i, int positions[], int j){
    //arrays are passed by ref always
    if(n == 0) return 0;

    if(a[i] == x){
        positions[j] = i;
        return 1 + storeallindex(a, n, x, i+1, positions, j+1);
    }
    return 0 + storeallindex(a, n, x, i+1, positions, j);
}


//using vector
void storeallindex2(int a[], int n, int x, int i, vector<int> &positions){
    //passing vector by ref coz by default vector are passed by value
    //here it is passed by ref so that its values are reflected in vector inside
    if(n == 0) return;

    if(a[i] == x){
        positions.push_back(i);
    }
    storeallindex2(a, n, x, i+1, positions);
}

int main(){
    int a[] = {1,3,7,5,3,8,3,9,3};
    
    int positions[10];
    int count = storeallindex(a, 9, 3, 0, positions, 0);
    for(int i=0; i<count; i++){
        cout<<positions[i]<<endl;
    }



    // vector<int> positions;
    // storeallindex2(a, 9, 3, 0, positions);

    // for(int i=0; i<positions.size(); i++){
    //     cout<<positions[i];
    // }
    
    return 0;
}