/*
What is mutex? it is mutial exclusion. Two threads cant use same code at the same time
yes they can use it one at a time. It is used to lock the code for one thread and once one
thread is done using the code it will unlcok the code for next thread. 
*/

#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex carLock; // create mutex object

void driveCar(string driver){

unique_lock<mutex> lockCode(carLock);
cout << driver << " is driving" << endl;

this_thread::sleep_for(chrono::seconds(2));

cout << driver << " is DONE driving" << endl;
lockCode.unlock();

}


int main(){

thread t1(driveCar, "Imran");

thread t2(driveCar, "Rizwan");

t1.join();
t2.join();



return 0;

}

