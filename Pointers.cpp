#include<iostream>

using namespace std;

int main(){

int num = 88; //we declared a simple varibale
int* ptrNum = &num; //we assign the value of variable to a pointer

int **y = &ptrNum;
//int **z = &ptrNum;

cout << "just num is : " <<num << endl;
cout << "just *ptrNum is : " << *ptrNum << endl; //dereferencing a pointer
//cout << "just ptrNum is : " << ptrNum << endl; //dereferencing a pointer
//cout << "just &num is : " << &num << endl; //dereferencing a pointer
cout << "just **y is : " << **y << endl; //dereferencing a pointer
cout << "just *y is : " << *y << endl; //dereferencing a pointer
cout << "just &y is : " << &y << endl; //dereferencing a pointer
cout << "just y is : " << y << endl; //dereferencing a pointer
return 0;
}



