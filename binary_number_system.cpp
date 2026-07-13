#include<iostream>
using namespace std;

int dectobi(int n){
    int ans=0,pow=1;
    while (n>0)
    {
        int rem=n%2;
        n=n/2;
        ans +=(rem*pow);
        pow=pow*10;
    }
    return ans;
}

int bitodec(int n){
    int ans=0,pow=1;
    while (n>0)
    {
        int rem=n%10;
        n=n/10;
        ans +=(rem*pow);
        pow *=2;
    }
    return ans;
}
int main(){
    cout<<bitodec(110010)<<" ";
    cout<<dectobi(50)<<endl;
for (int i = 0; i < 11; i++)
{
    cout<<i<<" "<<dectobi(i)<<endl;
}

    return 0;
}