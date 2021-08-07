# C / C++ Library boost

C / C++ 公開函式庫 Boost 練習專案，本範例使用為 Boost 1.69.0 版本。

**『Boost C++ 函式庫（Libraries）是一組擴充C++功能的經過同行評審（Peer-reviewed）且開放原始碼程式庫。大多數的函式為了能夠以開放原始碼、封閉專案的方式運作，而授權於Boost軟體授權條款（Boost Software License）之下。許多Boost的開發人員是來自C++標準委員會，而部份的Boost函式庫成為C++的TR1標準之一。』**
> From [Boost (C++ libraries) wiki](https://zh.wikipedia.org/wiki/Boost_C%2B%2B_Libraries)

## 指令

+ 進入虛擬環境
```
dockerw start
```
> 以 Docker 啟動開發環境，結束請使用 "Ctrl + Z"

+ 執行內容
```
. run.sh
```
> 以此指令呼叫 c++ 相關編譯工具進行處理，並執行相關輸出結果

## 目錄

本目錄依據學習進度撰寫相關資訊與執行腳本，列舉內容參考 [Boost Document](https://www.boost.org/doc/libs/)：

+ 容器
    - [Smart Pointer](https://www.boost.org/doc/libs/release/libs/smart_ptr/)
        + [boost smart pointer](https://www.programminghunter.com/article/8597642146/)
            - 範例 ```. run.sh smart-pointer/boost```
            - July 2007, **shared_ptr was entering the working paper that eventually became the C++11 standard.**
        + C++11 shared & weak pointer，cppreference : [unique_ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr)、[shared_ptr](https://en.cppreference.com/w/cpp/memory/shared_ptr)、[weak_ptr](https://en.cppreference.com/w/cpp/memory/weak_ptr)
            - [智慧指標](https://zh.wikipedia.org/wiki/%E6%99%BA%E8%83%BD%E6%8C%87%E9%92%88)
            - [建立和使用 shared_ptr 實例 MSDI](https://docs.microsoft.com/zh-tw/cpp/cpp/how-to-create-and-use-shared-ptr-instances?view=msvc-160)
            - [建立和使用 weak_ptr 執行個體 MSDI](https://docs.microsoft.com/zh-tw/cpp/cpp/how-to-create-and-use-weak-ptr-instances?view=msvc-160)
            - [避免 memory leak：C++11 Smart Pointer（上）](https://kheresy.wordpress.com/2012/03/03/c11_smartpointer_p1/)
            - [避免 memory leak：C++11 Smart Pointer（下）](https://kheresy.wordpress.com/2012/03/05/c11_smartpointer_p2/)
            - 範例 ```. run.sh smart-pointer/c++11```
                + Thread safety
                    - [Full analysis of shared_ptr thread safety](https://ofstack.com/C++/8983/full-analysis-of-shared_ptr-thread-safety.html)
                    - [GCC 4.8.4 weak_ptr::lock() 的實作](https://medium.com/fcamels-notes/gcc-4-8-4-weak-ptr-lock-%E7%9A%84%E5%AF%A6%E4%BD%9C-a37fd284dc8)
                    - [Atomic Smart Pointers](https://www.modernescpp.com/index.php/atomic-smart-pointers)
    - [Pool](https://www.boost.org/doc/libs/release/libs/pool/)
        + [C++應用程式效能優化（七）——記憶體池技術](https://www.gushiciku.cn/pl/g2Jw/zh-tw)
            - **記憶體池(Memory Pool)是一種記憶體分配方式，是在真正使用記憶體前，先申請分配一定數量的、大小相等(一般情況下)的記憶體塊留作備用。當有新的記憶體需求時，就從記憶體池中分出一部分記憶體塊，若記憶體塊不夠再繼續申請新的記憶體。**
            - [C++ smart pointer 之速度之討論（一）](https://ys-hayashi.me/2020/10/shared-ptr-speed/)
        + [内存池(MemPool)技术实例 - boost::pool](http://cplusplus.wikidot.com/cn:mempool-example-boost-pool)
        + 範例
            - ```. run.sh pool/base```
            - ```. run.sh pool/object```
    - [Array](https://www.boost.org/doc/libs/1_76_0/doc/html/array.html)
    - [Container](https://www.boost.org/doc/libs/1_76_0/doc/html/container.html)
    - [ContainerHash](https://www.boost.org/doc/libs/1_76_0/doc/html/hash.html)
    - [Heap](https://www.boost.org/doc/libs/1_76_0/doc/html/heap.html)
+ 平行運算  
    - [Thread](https://www.boost.org/doc/libs/release/libs/thread/)
        + [Boost Thread vs C++ 11 Thread](https://mechatechnica.com/Blogs/Programming/Read?blogtype=CPP&id=1)
            - **Between 2011 and 2014, Boost.Thread class has been modified to be similar to the standard. We can find very little differences if we compare the two. Indeed, it seem the reverse has happened, C++ 11 has influenced changes in Boost.**
            - **Choosing between Boost and C++ 11 threads in a production environment**
            - [Report & Demo - 執行緒 ( Thread ) 與原子 ( Atome )](https://github.com/eastmoon/tutorial-c#%E5%9F%B7%E8%A1%8C%E7%B7%92--thread--%E8%88%87%E5%8E%9F%E5%AD%90--atome-)
    - [Atomic](https://www.boost.org/doc/libs/1_76_0/doc/html/atomic.html)
        + [C++ std::atomic vs. Boost atomic](https://stackoverflow.com/questions/9551750)
        + [Chapter 45. Boost.Atomic](https://theboostcpplibraries.com/boost.atomic)
            - **If your development environment supports C++11, you don’t need Boost.Atomic. The C++11 standard library provides a header file atomic that defines the same functionality as Boost.Atomic. Boost.Atomic supports more or less the same functionality as the standard library.**
            - [Report & Demo - 執行緒 ( Thread ) 與原子 ( Atome )](https://github.com/eastmoon/tutorial-c#%E5%9F%B7%E8%A1%8C%E7%B7%92--thread--%E8%88%87%E5%8E%9F%E5%AD%90--atome-)
    - [Interprocess](https://www.boost.org/doc/libs/release/libs/interprocess/)
    - [Message Passing Interface (MPI)](https://www.boost.org/doc/libs/release/libs/mpi/)
+ 異步
    - [Asio](https://www.boost.org/doc/libs/1_76_0/doc/html/boost_asio.html)
    - [Beast](https://www.boost.org/doc/libs/1_76_0/libs/beast/doc/html/index.html)
+ 設計樣式與演算法
    - [Algorithm](https://www.boost.org/doc/libs/1_76_0/libs/algorithm/doc/html/index.html)
    - [Flyweight](https://www.boost.org/doc/libs/1_76_0/libs/flyweight/doc/index.html)
    - [Geometry](https://www.boost.org/doc/libs/1_76_0/libs/geometry/doc/html/index.html)
    - [Generic Image Library (GIL)](https://www.boost.org/doc/libs/1_76_0/libs/gil/doc/html/index.html)
    - [Sort](https://www.boost.org/doc/libs/1_76_0/libs/sort/doc/html/index.html)
+ 工具
    - [Assign](https://www.boost.org/doc/libs/1_76_0/libs/assign/doc/index.html)
        + [Chapter 70. Boost.Assign](https://theboostcpplibraries.com/boost.assign)
            - **The library Boost.Assign provides helper functions to initialize containers or add elements to containers. These functions are especially helpful if many elements need to be stored in a container.**
        + [boost實用工具：assign庫了解學習](https://www.itread01.com/content/1498645342.html)
            - **STL 容器僅提供了容納數據的方法，但是數據操作的步驟繁瑣 ( insert、push_back )，於是 boost::assign 重載了如 +=、() 等運算符，以便簡潔對 STL 容器初始化或賦值.**
    - [Test](https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/index.html)
        + 參考
            - [Single-header usage variant](https://www.boost.org/doc/libs/1_67_0/libs/test/doc/html/boost_test/usage_variants.html)
                + **If you prefer to avoid the compilation of standalone library, you should use the single-header variant of the Unit Test Framework.**
                + 若執行環境為 [Standalone library compilation](https://www.boost.org/doc/libs/1_48_0/libs/test/doc/html/utf/compilation/standalone.html) (環境優先編譯完成 Unit Test Framework)，則可選擇使用```#include <boost/test/unit_test.hpp>```，反之應使用```#include <boost/test/included/unit_test.hpp>```
            - [Boost C++测试组件test库](https://blog.csdn.net/weixin_39956356/article/details/111385774)
            - [Boost Test學習總結（C++）](https://www.itread01.com/content/1549267778.html)
            - [C/C++ Boost 单元测试](https://blog.csdn.net/zhangxiao93/article/details/53169208)
            - [Boost.Test Controlling outputs](https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/boost_test/test_output.html)
                + Boost.Test 除了 UTF 的語法外，也可以配合編譯後的測試應用程式，依據命令參數控制其輸出內容```log_level```、```log_format```
        + 範例
            - ```. run.sh test/base```
            - ```. run.sh test/fixture```
            - ```. run.sh test/log```
    - [Chrono](https://www.boost.org/doc/libs/1_76_0/doc/html/chrono.html)
    - [DLL](https://www.boost.org/doc/libs/1_76_0/doc/html/boost_dll.html)
    - [Filesystem](https://www.boost.org/doc/libs/1_76_0/libs/filesystem/doc/index.htm)
    - [Format](https://www.boost.org/doc/libs/release/libs/format/)
    - [JSON](https://www.boost.org/doc/libs/1_76_0/libs/json/doc/html/index.html)
    - [Lambda](https://zh.wikipedia.org/wiki/%E5%8C%BF%E5%90%8D%E5%87%BD%E6%95%B0)
        + [Boost](https://www.boost.org/doc/libs/release/libs/lambda/))
            - 範例 ```. run.sh lambda```
        + [C++0x：Lambda expression](https://kheresy.wordpress.com/2010/05/27/c0x%ef%bc%9alambda-expression/)
    - [Log](https://www.boost.org/doc/libs/release/libs/log/)

## 參考

#### 官方文件

+ [Boost.org](https://www.boost.org/)
+ [Boost (C++ libraries) wiki](https://zh.wikipedia.org/wiki/Boost_C%2B%2B_Libraries)
    - [Boost C++ Libraries 簡介](https://kheresy.wordpress.com/2010/10/13/boostcpplibraries/)
    - [C++ Boost庫是什麼？](https://tw511.com/a/01/3206.html)
+ [Boost 1.69.0 Library Documentation](https://www.boost.org/doc/libs/1_69_0/)

#### 教學網站
