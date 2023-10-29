#include<iostream>

using namespace std;


int main(){

int a = 12;
cout << "size of int :" << sizeof(a) << endl;

float b = 13.1;
cout << "size of float:" << sizeof(b) << endl;

double c = 32.23;
cout << "size of double :" << sizeof(c) << endl;

bool d = true;
cout << "size of true bool:" << sizeof(d) << endl;

bool e = false;
cout << "size of false bool:" << sizeof(e) << endl;

char f = 'z';
cout << "size of char :" << sizeof(f) << endl;

string name = "Imran";
cout << "size of string :" << sizeof(name) << endl;

short int si;
long int li;

cout << "size of si :" << sizeof(si) << endl;
cout << "size of li :" << sizeof(li) << endl;

}