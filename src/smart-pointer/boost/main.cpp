#include <boost/scoped_ptr.hpp>
#include <boost/scoped_array.hpp>
#include <boost/shared_array.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    // New smart pointer
    boost::scoped_ptr<int> p(new int(1));
    std::cout << "1. pointer number = " << *p << " addr = " << p.get() << std::endl;
    // Release old data, assign new one
    p.reset(new int(2));
    std::cout << "1. re-assign pointer number = " << *p << " addr = " << p.get()  << std::endl;
    // Release all data
    // std::boolalpha, stream output bool ( 0, 1 ) to string ( true, false )
    p.reset();
    std::cout << "1. Clear pointer : " << std::boolalpha << !static_cast<bool>(p) << std::endl;

    // New array smart pointer
    std::cout << "-----" << std::endl;
    boost::scoped_array<int> arr(new int[2]);
    arr[0] = 1;
    arr[1] = 2;
    std::cout << "2. array pointer : ";
    std::for_each(
        arr.get(), arr.get() + 2, [] (int num) {std::cout << num << " "; } );
    std::cout << std::endl;

    // New shared array smart pointer, deprecated functional
    // shared array is same action with array smart pointer
    std::cout << "-----" << std::endl;
    boost::shared_array<int> sarr1(new int[2]);
    sarr1[0] = 1;
    sarr1[1] = 2;
    std::cout << "3. shared array pointer [origin]: ";
    std::for_each(
        sarr1.get(), sarr1.get() + 2, [] (int num) {std::cout << num << " "; } );
    std::cout << std::endl;
    // the smart pointers sarr1 and sarr2 share ownership of the dynamically allocated int array
    boost::shared_array<int> sarr2(sarr1);
    sarr2[0] = 3;
    std::cout << "3. shared array pointer [modify]: ";
    std::for_each(
        sarr1.get(), sarr1.get() + 2, [] (int num) {std::cout << num << " "; } );
    std::cout << std::endl;
}
