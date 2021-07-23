#include <iostream>
#include <iterator>
#include <algorithm>
#include <memory>

int main()
{
    // New C++11 smart pointer
    // Unique smart pointer have garbage collection auto-release rule, it could avoid developer forget release memory, and make memory leak.
    std::unique_ptr<int> a(new int(1));
    std::cout << "1. pointer number = " << *a << " addr = " << a.get() << std::endl;
    // Release old data, assign new one
    a.reset(new int(2));
    std::cout << "1. re-assign pointer number = " << *a << " addr = " << a.get()  << std::endl;
    // Release all data
    // std::boolalpha, stream output bool ( 0, 1 ) to string ( true, false )
    a.reset();
    std::cout << "1. Clear pointer : " << std::boolalpha << !static_cast<bool>(a) << std::endl;

    // New shared smart pointer
    // Shared smart pointer will use the same memory allocated, and also have unique smart pointer rule.
    // In microsoft document, new shared object to shared_ptr, suggest use make_shared. Because use shared_ptr(new ...) was slightly less efficient, and it is better use when initialization must be separate from declaration, e.g. class members.
    std::cout << "-----" << std::endl;
    std::shared_ptr<int> t1;
    std::shared_ptr<int> t2 = std::make_shared<int>( 10 );
    t1 = t2;
    std::cout << "2. shared t1 pointer number [origin] = " << *t1 << " addr = " << t1.get()  << std::endl;
    *t2 = 100;
    std::cout << "2. shared t1 pointer number [modify] = " << *t1 << " addr = " << t1.get()  << std::endl;

    // New weak smart pointer
    // weak_ptr is use for monitor shared_ptr, even assign shared_ptr to weak_ptr, it will not add shared_ptr reference counter count.
    std::cout << "-----" << std::endl;
    std::weak_ptr<int> w1;
    {
        std::shared_ptr<int> ws1 = std::make_shared<int>( 10 );
        w1 = ws1;
        std::shared_ptr<int> ws2 = w1.lock();
        std::cout << "3. weak pointer in-scope, assign exist " << std::boolalpha << static_cast<bool>( ws2 != nullptr ) << std::endl;
        if ( ws2 != nullptr )
            std::cout << "3. weak pointer = " << *ws2 << std::endl;
    }
    std::shared_ptr<int> ws3 = w1.lock();
    std::cout << "3. weak pointer out-scope, assign exist " << std::boolalpha << static_cast<bool>( ws3 != nullptr ) << std::endl;
    if ( ws3 != nullptr )
        std::cout << "3. weak pointer = " << *ws3 << std::endl;
}
