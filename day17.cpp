#include<Iostream>
using namespace std;

string checkVotingEligibility(int age){
    if (age>=18)
    return"Eligible to vote";
    else
    return"Not eligible to vote";
}
int main(){
    int age;
    cin>>age;

    cout<<checkVotingEligibility(age);

    return 0;
}