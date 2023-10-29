#include<iostream>

using namespace std;

void breakUse(){

    for(int i = 0; i <= 10; ++i){

        if(i == 5){
            break;
        }
        cout << i << " ";

    }
    cout << endl;
    cout << "IMRAN" << endl;
}

void contineuUse(){

    for(int i = 0; i <= 10; ++i){

        if(i == 5 || i == 9){
            continue;
        }
        cout << i << " ";
    }
      cout << endl;
      cout << "RIZWAN" << endl;
}

int main(){

cout << "Calling Break Funciton " << endl;
breakUse();
cout << "Calling Contineu Funciton " << endl;
contineuUse();
}

/*
CONTINEU: by using contineu we are actually skipping the iteration
and jumping to the statement which is comming after break statemnt.
BREAK: 

*/