#include<iostream>
using namespace std;
int main(){
    // Bitwise operator
    //and &
    int a = 4,b = 8;
    cout<<(a & b)<<endl;

    //or |
    cout<<(a | b)<<endl;

    //xor ^
    cout<<(a ^ b)<<endl;

    //left shift <<
    cout<<(10<<1)<<endl;

    //right shift >>
    cout<< (10>>1)<<endl<<endl;

    //left shift hume a*2^b ans deta hai like
    //and
    //right shift hume a/2^b ans deta hai

    //Data type modifiers
    cout<<sizeof(int)<<endl;

    //short
    cout<<sizeof(short int)<<endl;

    //Long
    cout<<sizeof(long int)<<endl;

    //long long
    cout<<sizeof(long long int)<<endl;

    //signed
    cout<<sizeof(signed int)<<endl;
    
    //Unsigned
    unsigned int x=-10;
    cout<<x<<endl;
    cout<<sizeof(unsigned int)<<endl;

    return 0;
}