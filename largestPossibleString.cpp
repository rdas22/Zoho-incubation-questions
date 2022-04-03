//Question 3 (Logical Programming)

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int noOfTestcases;
    cin>>noOfTestcases;
    string str;
    while(noOfTestcases--){
        cin>>str;
        sort(str.begin(),str.end(),greater<char>());
        cout<<str<<endl;
    }
    
}
