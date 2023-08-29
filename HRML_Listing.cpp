#include <cmath>
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

unordered_map<string,string> getInput(){

 string userInput;

 getline(cin, userInput);

 char delimiter = '~';

 vector<string> subStrings;
istringstream iss(userInput);
string substring = "";

while(getline(iss, substring, delimiter)){
    subStrings.push_back(substring);
}
unordered_map <string,string> myMap;

 if (!subStrings.empty()) {
        string tagToLookFor = subStrings.at(0);
        //string tagToLookFor = subStrings.at(0);
        string valueToLookFor = subStrings.at(subStrings.size() - 1);
        myMap.insert(make_pair(tagToLookFor, valueToLookFor));
        //myMap.insert(tagToLookFor, valueToLookFor);
        //cout << tagToLookFor + "    " + valueToLookFor << endl;
    }

return myMap;


}

string queryReturnStatus(string tagsNvalues){
string str;
return str;}




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  
  cout << "ENTER TAG AND VALUES ~ SEPERATED" << endl;  

   unordered_map<string,string> result = getInput();

 for(const auto& pair : result){

  cout << "keys are :" << pair.first << " value is " << pair.second << endl;
 }
  

    return 0;
}
