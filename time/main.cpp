#include <chrono>
#include <iostream>
#include <unistd.h>

int main()
{
    typedef std::chrono::high_resolution_clock Time;
    typedef std::chrono::milliseconds ms;
    typedef std::chrono::duration<float> fsec;
    while(true)
    {
        auto t0 = Time::now();
        usleep(1000);
        auto t1 = Time::now();
        fsec fs = t1 - t0;
        ms d = std::chrono::duration_cast<ms>(fs);
        std::cout << fs.count() << "s\n";
        std::cout << d.count() << "ms\n";
    }
}
