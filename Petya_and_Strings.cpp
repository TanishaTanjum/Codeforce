#include<iostream>
using namespace std;

int main() {
    string s1,s2;
    string letter1,letter2;
        cin >>s1 >>s2;

    for(int i=0; i<s1.size(); i++) {
        letter1 = toupper(s1[i]);
        letter2 = toupper(s2[i]);

         if(letter1  == letter2) {
            continue;
    }
    else if(letter1 <letter2) {
        cout << -1 <<endl;
        break;
    }
    else {
        cout << 1 <<endl;
        break;
    }

    }

    if(letter1 == letter2){
        cout << 0 <<endl;
    }

   
}
