//Question 5  (Logical Programming)
#include <iostream>

using namespace std;

int main() {
    string str;
    cin>>str;
    int i=1;
    int j=str.length()-2;
    while(i<=str.length()/2){
        int diff1=abs(str[i]-str[i-1]);
        int diff2=abs(str[j]-str[j+1]);
        if(diff1!=diff2){
            cout<<"Unequal difference"<<endl;
            break;
        }
        ++i;
        --j;
    }
    if(i==(str.length()/2+1)){
        cout<<"Equal differnce"<<endl;
    }
}
