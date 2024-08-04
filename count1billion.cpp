#include <iostream>
#include <chrono>

int main() {
    // Start measuring time
    auto start = std::chrono::high_resolution_clock::now();
    
    // Count to one billion
    for (int i = 0; i < 1000000000; ++i) {
        // Do nothing
    }
    
    // Stop measuring time
    auto end = std::chrono::high_resolution_clock::now();
    
    // Calculate the duration
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    
    // Output the duration
    std::cout << "Time taken: " << duration.count() << " milliseconds" << std::endl;

    return 0;
}
