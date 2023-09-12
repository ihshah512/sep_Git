#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

void getInput(){

const int MAX_SIZE_LEN = 120;
 string userInput;
int hrmlLines;
int queryNums;
cout << "Enter hrml lines and query lines number " << endl;
cin >> hrmlLines;
cout << "  ";
cin >> queryNums;
cout << endl;

//Allocate memory for the array of pointers we need to do this because the input
//we are getting from user can not be used as array length because in c++ we have declare
//array size as we are writing code, it not possible to get array size at runtime however
//with the help of pointers we can allocate memory dynamically at runtime.
//std::string**) is used to create a dynamically allocated 2D array of strings. 
//The memory is allocated for both the array of pointers and the individual rows. 
string** hrmlArrayPtr = new string*[hrmlLines];

for(int i = 0; i < hrmlLines; ++i){

hrmlArrayPtr[i] = new string[MAX_SIZE_LEN];

getline(cin, hrmlArrayPtr[i][0]);

}

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  
 // cout << "ENTER TAG AND VALUES ~ SEPERATED" << endl;  

  // unordered_map<string,string> result = getInput();
getInput();
    
}
