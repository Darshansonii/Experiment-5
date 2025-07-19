//Name-Darshan Soni
//PRN-24070123034
//Exp5

//C++ Program to check whether a character is vowel or consonant

#include<iostream>
using namespace std;

int main(){
 char c;
 cout<<"Enter the character:";
 cin>>c;
 if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
     cout<<"Given character is vowel";
 }
 else{
     cout<<"Given character is consonant";
 }
 return 0;
}

/*
Output
Enter the character:v
Given character is consonant
*/