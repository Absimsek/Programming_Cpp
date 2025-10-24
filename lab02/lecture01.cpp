#include <iostream>
using namespace std;

//STAIR CLIMB CHALLANGE
int main() {
    // A child climbs stairs increasing daily : day-1=S steps, every day adds K more steps for D days. COMPUTE TOTAL STEPS CLIMBED.
    int S,K,D;
    cout<<"Enter the number of steps on the first day: ";
    cin>>S;
    cout<<"Enter the number of additional steps climbed each day: ";
    cin>>K;
    cout<<"Enter the total number of days: ";
    cin>>D;
    int total_steps=0;
    for(int day=0; day<D; day++){
        total_steps += S + day * K;
    }
    cout<<"Total steps climbed in "<<D<<" days: "<<total_steps<<endl;
    return 0;
}