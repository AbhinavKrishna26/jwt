#include <bits/stdc++.h>
using namespace std;

int main(){
int a=12,b=13;
// & Opertator
cout<<a&b<<endl; // (12)base10 = (1100)base2 ..... (13)base10 = (1101)base2
                    //   1100
                    // & 1101
                    // _______
                    //   1100 == 12
// | Opertator
cout<<a|b<<endl; // (12)base10 = (1100)base2 ..... (13)base10 = (1101)base2
                    //   1100
                    // | 1101
                    // _______
                    //   1101 == 13
// ^ Opertator
cout<<a^b<<endl; // (12)base10 = (1100)base2 ..... (13)base10 = (1101)base2
                    //   1100
                    // ^ 1101
                    // _______
                    //   0001 == 13

// << Left Shift 
c=a<<1; // a<<1 == a*2

// >> Right Shift 
d=a>>1 // a>>1 == a/2

// Q.. find odd and even using bit manipulation

// We can use this method as it is fast and working directly on binary numbers.

// Every even no. has last digit 0 in binary and odd no. has last digit 1....

if(a&1==0){
    cout<<"No. is even"<<endl; 
}else{
    cout<<"No. is odd"<<endl;
}

// Q.. swapping two numbers without using third variable
// a=12 , b=13 
 a= a^b;
 b= a^b;
 a= a^b;
cout<<a<<" "<<b<<endl;
 // now a=13, b=12


 //Q.. find the ith bit 

int n= 4;
// (4)base10 == (100)base2
int key = 2;
int mask = 1<<key;
cout<< "the required bit is";
if(n&mask==0){
    cout<<"0\n";
}else{
    cout<<"1\n";
}


 //Q.. set the ith bit 

int n= 4;
// (4)base10 == (100)base2
int key = 1;
int mask = 1<<key;
cout<<n|mask<<endl;
//output will be 6


 //Q.. clear the ith bit 

int n= 4;
// (4)base10 == (100)base2
int key = 2;
int mask = ~(1<<key);
cout<<n&mask<<endl;
//output will be zero

return 0;
}