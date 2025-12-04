#include<iostream>
using namespace std;
int main(){
int c,count=0;
cin>>c;
//count+=(c/5) + (c%5 ? 1:0);
 count+=(c/5);
 if(c%5){
    count++;
 }
 cout<<count;
}
