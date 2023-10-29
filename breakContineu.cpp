#include<iostream>
using namespace std;
void breakUse(){
cout << "Enter name :" << endl;
string name;
while(name != "Rizwan" && name != "Ahtsham"){
cin >> name;
if(name == "Rizwan" || name == "Ahtsham"){

    cout << "This is your brother" << endl;
   break;
}
cout << "This is not your brother name" << endl;
}

}
int main(){
breakUse();
}