//Question 7  (Logical Programming)

#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

int main() {
    string str;
    getline(cin,str);
    set<string> unique;
    auto pos=str.find(' ');
    while(pos!=string::npos){
        string sub = str.substr(0,pos);
        unique.insert(sub);
        str.erase(0,pos+1);
        pos=str.find(' ');
    }
    unique.insert(str);

    set<string>::iterator it ;
     for (it = unique.begin() ; it != unique.end() ; it++ ) {
        cout << *it<<" ";
    }

    

        
}
