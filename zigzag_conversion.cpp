//zigzag conversion
//input: paypalishiring, 3

// p     a       h       n
//  a  p   l   s   i   i   g
//   y       i       r

//output: pahnaplsiigyir

#include<iostream>
using namespace std;

string convert(string s, int rows){
    if(rows <= 1) return s;

    int n = s.size();
    string *A = new string[rows];

    int row = 0;
    int step = 1;
    for(int i=0; i<n; i++){
        A[row].push_back(s[i]);

        if(row == 0) step = 1;
        else if (row == rows-1) step = -1;

        row += step;
    }

    s = "";
    for(int i=0; i<rows; i++){
        s += A[i];
    }
    return s;
}

int main(){
    string s = "paypalishiring";
    int rows = 3;
    cout<<convert(s, rows);
}