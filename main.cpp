#include <iostream>
#include <chrono>



bool is_this_prime(int n)
{
    int counter = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            counter += 1;
        }
    }
    if(counter == 2)
    {
        return true;
    }
    return false;
}


void prime_loop(int max)
{
    int i = 2;
    auto start = std::chrono::high_resolution_clock::now();
    while(i < max)
    {
        if(is_this_prime(i) == true)
        {
            std::cout << "Prime Number: " << i << std::endl;
        } else
        {
            //std::cout << "Non_prime number: " << i << std::endl;
        }
        i++;
    }

    auto end = std::chrono::high_resolution_clock::now();

    auto elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    double a = elapsed_time / 1000.0;
    std::cout << a << " seconds" << std::endl;
}


int main()
{
    int a;
    std::cout << "Loop max: ";
    std::cin >> a;
    prime_loop(a);
    return 0;
}
