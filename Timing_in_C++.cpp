#include<iostream>
#include<chrono>
#include<thread>



struct Timer
{
   std::chrono::time_point<std::chrono::high_resolution_clock> start ,end;
   std::chrono::duration<float> duration;

   Timer(){

    start = std::chrono::high_resolution_clock::now();
   }

   ~Timer(){
    end = std::chrono::high_resolution_clock::now();

    duration = end - start;

    std::cout << duration.count()*1000 << " ms" << std::endl;

   }
};

void Function(){

Timer timer;

    for(int i = 0; i < 100; i++){
        std::cout << "Imran" << std::endl;
    }
}

int main(){
Function();

//std::cin.get(); this is used when we want the terminal window to stay opend. This should not be used where we did not want to interact with terminal as its additional time overhead
return 0; //this is recommended way

}