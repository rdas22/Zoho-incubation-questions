//Question 1  (Logical Programming)

#include <iostream>

using namespace std;
int main() {
    string str;
    cin>>str;
    if(str.length()%2==0){
        cout<<"Not Possible";
    }else{
        int mid=str.length()/2;

        //upper half
        for(int i=0;i<=mid;++i){
            for(int k=mid;k>i;--k)
                cout<<" ";
            cout<<str[mid-i];
            for(int k=0;k<(2*i-1);++k)
                cout<<" ";
            if(i!=0){
                cout<<str[mid+i];
            }
            cout<<endl;
        }
        
        //lower half
          for(int i=mid;i>0;--i){
            for(int k=mid;k>=i;--k)
                cout<<" ";
            cout<<str[mid-i+1];
            for(int k=(2*i-3);k>0;--k)
                cout<<" ";
            if(i!=1){
                cout<<str[mid+i-1];
            }
            cout<<endl;
        }
    }
}
