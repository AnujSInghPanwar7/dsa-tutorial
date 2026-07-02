#include<iostream>
using namespace std;

int main(){

    //yeh hai mera first code hehe 😁😁

    cout<<"EK SAAL KE BAAD DUBARA DSA START KR RAHA HU 🥹🥹\n"
    <<"CHALO KOI NI JAB JAGO TAB SAVERA😊😊\n";

    // lets go ab variable ki baari

    int agee = 19;
    string name = "Anuj";
    cout<<agee<<endl<<name<<endl;

    // here come data types

    int age = 19;
    char grade = 'A';
    float PI = 3.14f;
    double na = 6.023;
    bool isgay = false;

    cout<<sizeof(age) <<age <<endl << sizeof(grade) <<grade <<endl<< sizeof(PI)<< PI <<endl<< sizeof(na) <<na <<endl<< sizeof(isgay)<< isgay<<endl;

    //type convertion and casting (ye hai kuch naya)
    //conversion(small se big ke liye use hota)[implicit hota mtlb pc khud karega]

    char letter = 'A';
    int let = letter;
    cout<<let<<endl;

    //casting(big se small)[explicit khud krna padta]

    double number = 100.99;
    int num = int(number);
    cout<<num<<endl;
   
    // input kese lete sikh lete

    cout<<"Enter the price :\n";
    double price;
    cin>>price;

    cout<<"this is price : \n"<<price;

    // ab baari hai operators ki
    //arthmetic

    int a = 10 , b = 5;
    cout<<"add"<<a+b<<endl;
    cout<<"sub"<<a-b<<endl;
    cout<<"multiply"<<a*b<<endl;
    cout<<"division"<<a/b<<endl;
    cout<<"modulo"<<a%b<<endl;

    //relational

    cout<< (3 < 5)<<endl;//we can use <,>,<=,>=,==,!= also to get bool result

    //logical

    cout<< !(3<1)<<endl;
    cout<<((3<1)||(3<5))<<endl;
    cout<<((3<1)&&(3<5))<<endl;

    //Uranary operators
    /*
    increment and decrement
    can be post a++ or a--
    ye pehle kaam krta hai then update
    or 
    can be pre ++a or --a
    ye pehle update krta hai then kaam
    */
    return 0;
}