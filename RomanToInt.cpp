#include<iostream>
#include<vector>
#include<string>

using namespace std;

void romanToInt(string s){

    string validStraings = "IVXLCDM";
    //int val = 0;
    //Constraints
    if((s.length() < 1) || (s.length() > 15)){
            
            cout << "Invalid String length" << endl;
    }

    int strLen = s.length();

    int counter = 0;
    for(int i = 0; i < strLen; ++i){
        char eachLetter = s[i];
        cout << eachLetter << " - " << endl;
        //we took size_t because it could never be negative
        size_t found = validStraings.find(eachLetter);
        
        if(found == std::string::npos){
            
            counter++; 
           
        }
     
    }

    if(counter >= 1){
        cout << "Invalid user inpur" << endl;
    }else{

        cout << "Valid Input" << endl;
    }
   
}


int main(){

    string str;
    cout << "Enter ROMAN letters" << endl;
    cin >> str;

   romanToInt(str);


   
}



/*
Roman numerals are represented by seven different symbols: 
I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, 
just two ones added together. 12 is written as XII,
 which is simply X + II. The number 27 is written as 
 XXVII, which is XX + V + II.

Roman numerals are usually written largest to 
smallest from left to right. However, the numeral 
for four is not IIII. Instead, the number four is 
written as IV. Because the one is before the five we 
subtract it making four. The same principle applies 
to the number nine, which is written as IX. There are 
six instances where subtraction is used:

*/
