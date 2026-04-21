#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <mutex>
#include "ansi_color.h"

std::mutex mtx;
int sum = 0;

// Function to print numbers from start to stop
void printNumbersSafely(Color color, int start, int stop) 
{
    for (int i = start; i <= stop; ++i) 
    {
        std::lock_guard<std::mutex> lock(mtx);  // Acquires mutex, releases on scope exit

        std::cout << color << i << Color::Reset << " " ;
        std::cout.flush();
        sum++;
        //std::this_thread::sleep_for (std::chrono::microseconds(1));
    }
}

int main() 
{
    // Create three threads with different upper limits
    std::thread thread1(printNumbersSafely, Color::BgBrightBlue, 1, 500);
    std::thread thread2(printNumbersSafely, Color::BgBrightGreen, 1, 500);
    std::thread thread3(printNumbersSafely, Color::BgBrightMagenta, 1, 500);

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
