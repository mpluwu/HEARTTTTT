#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    string star="*";
    cout<<"Please input an odd number bigger than 3";
    cin>>a;
    b=a;
    while(b/2>0){
        cout<<" ";
        b-=2;
    }
    cout<<star;
    b=a;
    while(b/2>0){
        cout<<" ";
        b-=2;
    }
    cout<<star<<endl;
    for(int i=0; i<a/2;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
    }cout<<"* "<<endl;
    for(int i=a/2; i>0;i--){
        for(int j=a/2;j>=0;j--){
            cout<<" ";
        }cout<<" "<<star;
        cout<<endl;
    }
}
