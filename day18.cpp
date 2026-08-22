#include<iostream>
using namespace std;

void printEven(int n){
    for(int i=1; i<=n; i++){
        if (i%2==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;

    printEven(n);

    return 0;
}