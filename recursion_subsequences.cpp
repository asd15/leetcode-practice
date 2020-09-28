//print all subsequences of a string using recursion
//i/p: abc (n)
//o/p: "", a, b, c, ab, ac, bc, abc (2^n)

#include<iostream>
using namespace std;

//using char array
void subsequences(char a[], char output[], int i){
    if(a[0] == '\0') {
        output[i] = '\0';
        cout<<output<<endl;
        return;
    }
    //excluding
    subsequences(a + 1, output, i);

    //including
    output[i] = a[0];
    subsequences(a + 1, output, i+1);

}

//using string
void subsequences2(string a, string output){
    if(a.length() == 0){
        cout<<output<<endl;
        return;
    }
    subsequences2(a.substr(1), output + a[0]); //inclucing
    subsequences2(a.substr(1), output); //excluding
}

int main(){
    char a[10];
    cin>>a;
    char out[100];

    string inp;
    cin>>inp;
    string output = "";
    
    subsequences(a, out, 0);
    cout<<endl;

    subsequences2(inp, output);

    return 0;
}