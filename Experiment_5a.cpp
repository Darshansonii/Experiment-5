//Name-Darshan Soni
//PRN-24070123034
//Exp5

//C++ Program to check whether number is even or odd

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%2==0){
        cout<<"Given number is Even";
    }
    else if(num%2!=0){
        cout<<"Given number is odd";
    }
    else{
        cout<<"Given number is neither even or odd";
    }
    return 0;
}

/*
Output
Enter the number:56
Given number is Even
*/