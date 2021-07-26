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
    - [Array](https://www.boost.org/doc/libs/1_76_0/doc/html/array.html)
    - [Container](https://www.boost.org/doc/libs/1_76_0/doc/html/container.html)
    - [ContainerHash](https://www.boost.org/doc/libs/1_76_0/doc/html/hash.html)
    - [Heap](https://www.boost.org/doc/libs/1_76_0/doc/html/heap.html)
+ 平行運算  
    - [Thread](https://www.boost.org/doc/libs/release/libs/thread/)
    - [Atomic](https://www.boost.org/doc/libs/1_76_0/doc/html/atomic.html)
    - [Interprocess](https://www.boost.org/doc/libs/release/libs/interprocess/)
    - [Message Passing Interface (MPI)](https://www.boost.org/doc/libs/release/libs/mpi/)
    - [Pool](https://www.boost.org/doc/libs/release/libs/pool/)
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
    - [Chrono](https://www.boost.org/doc/libs/1_76_0/doc/html/chrono.html)
    - [DLL](https://www.boost.org/doc/libs/1_76_0/doc/html/boost_dll.html)
    - [Filesystem](https://www.boost.org/doc/libs/1_76_0/libs/filesystem/doc/index.htm)
    - [Format](https://www.boost.org/doc/libs/release/libs/format/)
    - [JSON](https://www.boost.org/doc/libs/1_76_0/libs/json/doc/html/index.html)
    - [Lambda](https://zh.wikipedia.org/wiki/%E5%8C%BF%E5%90%8D%E5%87%BD%E6%95%B0)
        + [Boost](https://www.boost.org/doc/libs/release/libs/lambda/))
            - 範例 ```. run.sh lambda```
        + [C++0x：Lambda expression](https://kheresy.wordpress.com/2010/05/27/c0x%ef%bc%9alambda-expression/
    - [Log](https://www.boost.org/doc/libs/release/libs/log/)

## 參考

#### 官方文件

+ [Boost.org](https://www.boost.org/)
+ [Boost (C++ libraries) wiki](https://zh.wikipedia.org/wiki/Boost_C%2B%2B_Libraries)
    - [Boost C++ Libraries 簡介](https://kheresy.wordpress.com/2010/10/13/boostcpplibraries/)
    - [C++ Boost庫是什麼？](https://tw511.com/a/01/3206.html)
+ [Boost 1.69.0 Library Documentation](https://www.boost.org/doc/libs/1_69_0/)

#### 教學網站
