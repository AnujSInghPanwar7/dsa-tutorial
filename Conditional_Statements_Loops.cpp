#include<iostream>
using namespace std;
int main(){
    //Conditional statement
    //if else
    /*int age;
    cout<<"Enter your age: \n";
    cin>>age;
    if(age>18){
        cout<<"You are underage";
    }else{
        cout<<"You are eligible\n";
    }*/

    //if else-if else
    /*int marks;
    cout<<"Enter your marks :\n";
    cin>>marks;
    if(marks>=90){
        cout<<"A\n";
    }else if(marks<90 && marks>=80){
        cout<<"B\n";
    }else{
        cout<<"C\n";
    }*/

    //Q)  Find character lowercase or uppercase
    // Merko to lagta hai isme ascii ka use hoga lets see i can solve myself or do i need answer to solve this 97 122
    /*char ch;
    cout<<"Enter the character :\n";
    cin>>ch;
    int alphabet = ch;
    if(alphabet<=122 && alphabet>=97){ //according to video mai iski jaga ya to simple ch=a-z ya ch=97-122 le sakta tha isme data type change krne ki jarurat nahi thi
        cout<<"Lower case\n";
    }else{
        cout<<"Upper case\n";
    }*/
    
    //ternary statment or condition
    int n=2;
    cout<<(n%2==0?"even":"odd")<<endl;
    return 0;
}