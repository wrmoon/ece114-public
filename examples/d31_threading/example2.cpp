#include <iostream>
#include <thread>
#include <chrono>
#include <sstream>
#include <string>
#include <vector>
#include <atomic>
#include "ansi_color.h"

//std::atomic<int> sum {0};
int sum = 0;


// Function to print numbers from 1 to a specified limit
void printNumbers(Color color, int start, int stop) 
{
    for (int i = start; i <= stop; ++i) 
    {
        sum++;
        //std::cout << color << i << Color::Reset << " " ;
        std::this_thread::sleep_for (std::chrono::microseconds(1));
    }
}

int main() 
{
    // Create three threads with different upper limits
    std::thread thread1(printNumbers, Color::BgBrightBlue, 1, 500);
    std::thread thread2(printNumbers, Color::BgBrightGreen, 1, 500); 
    std::thread thread3(printNumbers, Color::BgBrightMagenta, 1, 500);

    // Wait for all threads to finish
    thread1.join();
    thread2.join();
    thread3.join();

    std::cout << std::endl 
              << "All threads finished." << std::endl
              << "sum: " << sum << std::endl
              ;
            


    return 0;
}

