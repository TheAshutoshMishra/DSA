#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    bool isPrime=true;
    for (int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
            break;

        }
    }
    if(isPrime==true){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}