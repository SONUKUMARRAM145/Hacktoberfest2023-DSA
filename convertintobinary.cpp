#include<iostream>
using namespace std;
int convertintobinary(int n){
int ans=0;
int power=1;
while(n>0){
int lastbit=(n&1);
ans+=power*lastbit;
n=n>>1;
power*=10;
}
return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<convertintobinary(n)<<endl;
    return 0;
}
