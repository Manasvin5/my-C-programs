#include <iostream>
#include <string>
using namespace std;



int main(){
    int score;
    cout << "Enter your Score: \n";
    cin >> score;
    if(score>=90){
        cout<<"You Have gotten an A Grade\n";
    }
    else if(score>=80){
        cout << "You have gotten an B grade\n";
    }
    else if(score>=60){
        cout << "You have gotten a C grade\n";
    }
    else if(score>=40){
        cout << "You have gotten D grade\n";
    }
    else{
        cout << "You have gotten a F Grade. It sadly means fuck you you are fail..ha ha ha ha\n";
    }
} 



