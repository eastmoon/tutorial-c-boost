/*
Boost Pool：基於記憶體池 ( Memory Pool ) 技術，用於快速分配相同大小的記憶體區塊，並有效的反覆分配、釋放其記憶體區塊。

boost::pool 為最基礎的記憶體池技術，用於快速存取小塊的記憶體區塊；若無法提供記憶體區塊，將回應 NULL。
Ref : http://cplusplus.wikidot.com/cn:mempool-example-boost-pool
*/

#include <iostream>
#include <boost/pool/pool.hpp>

int main()
{
    // 宣告每次要分配的記憶體區塊大小
    const int elementSize = sizeof(int);
    // 設定 Pool 物件
    boost::pool<> alloc(elementSize);
    // 執行分配與釋放
    for (int i = 0; i < 10000; ++i)
    {
        // 藉由記憶體池自動分配宣告指定大小的記憶體區塊。
        int* p = (int*)alloc.malloc();

        *p = i;
        std::cout << "N : " << i << std::endl;

        // 釋放記憶體區塊，但並非還給系統，而是交由 Pool 管理。
        // 倘若不釋放，待 pool 物件因系統解構時會自動釋放宣告過的區塊
        alloc.free(p);
    }

    return 0;
}
