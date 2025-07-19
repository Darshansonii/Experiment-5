//Name-Darshan Soni
//PRN-24070123034
//Exp5

//C++ Program to Find Largest Number Among Numbers

#include<iostream>
using namespace std;

int main(){
   float a,b,c;
   cout<<"Enter the first number:";
   cin>>a;
   cout<<"Enter the second number:";
   cin>>b;
   cout<<"Enter the third number:";
   cin>>c;
   
   if(a>b && a>c){
       cout<<"\nFirst number is largest";
   }
   else if(b>a && b>c){
       cout<<"\nSecond number is largest";
   }
   else if(a==b && a==c){
       cout<<"\nGiven numbers are equal";
   }
   else {
       cout<<"\nThird number is largest";
   }
   return 0;
}

/*
Output
Enter the first number:7
Enter the second number:67
Enter the third number:46

Second number is largest
*/