#include <iostream>
#include <string>
using namespace std;




int main(){
    int trows=10;
    int hrows=trows/2;
    int spaces=trows-2;
    for(int i=1;i<hrows+1;i++,spaces=spaces-2){

        //left-stars
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        //gaps
        for(int gp=0;gp<spaces;gp++){
            printf("  ");
        }
        //right stars
        for(int j=1;j<=i;j++){
            printf("* ");
        }
    cout<<endl;
    }



    for(int i=hrows+1;i>0;i--,spaces=spaces+2){

        //left-stars
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        //gaps
        for(int gp=0;gp<spaces;gp++){
            printf("  ");
        }
        //right stars
        for(int j=1;j<=i;j++){
            printf("* ");
        }
    cout<<endl;
    }

    
}