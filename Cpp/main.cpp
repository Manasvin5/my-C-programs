#include <iostream>
#include <string>
using namespace std;



int main(){

    cout <<"hello world\n" ;
    cout << endl;
    cout <<"hello world" << endl ;
    cout <<"Enter a number"<<endl;
    int a;
    cin >> a;
    cout << "You Entered the number: "<<a << endl;
    bool c=true;
    cout << sizeof(c)<< endl;
    int v = sizeof(c);
    cout << "this is value of sizeofdfjodfjd: "<< v <<endl;    
    string ghee= "This is baba ghee supari";
    cout <<"This is oil"  <<ghee<<endl;
    string  is;
    getline(cin,is);
    cout << "This " << is << endl;
    return 0;
    //char ch= 256; //this will generate a overflow
    //cout <<"is your char ch: " <<ch

}
