#include<iostream>
using namespace std;

int main(){
    int number;
    char choice;
     
    do{
        cout<<"Enter a number";
        cin>>number;

        cout<<"You Entered your number"<<number<<endl;
        cout<<"Do you want to continue this program!(y/n)";
        cin>>choice;

    }while(choice == 'y' || choice== 'Y');
    cout<<"Program ended";

 return 0;
}