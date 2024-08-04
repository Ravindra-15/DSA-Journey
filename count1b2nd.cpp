#include <iostream>
#include <ctime>

int main()
{
    clock_t start = clock();
    for (int i = 0; i < 1000000000; ++i) ;
    clock_t end = clock();
    double duration = double(end - start) / CLOCKS_PER_SEC * 1000.0;
    std::cout << "Time taken: " << duration << " milliseconds" << std::endl;
    return 0;
}
