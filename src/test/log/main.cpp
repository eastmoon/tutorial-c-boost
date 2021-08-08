/*
測試案例的檢測，是依據案例內的判定 ( Assertion 或稱斷言 ) 來構成此案例的檢測完整與否，而每個判定其結過會以不同等級的記錄輸出。

Assertion severity level，在 Boost 中判定記錄共有三個等級 WARN、CHECK、REQUIRE，對輸出與執行狀態可參考下連結內容
Ref : https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/boost_test/testing_tools/tools_assertion_severity_level.html

BOOST_TEST，基礎判定式，其第一輸入為判斷式 ( Staement ) 並以此判斷的布林值作為判定記錄；而依據文件，BOOST_TEST 亦具有 BOOST_TEST_<level> 來做處不同數據記錄，而其預設 BOOST_TEST 等於 BOOST_TEST_CHECK
Ref : https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/boost_test/testing_tools/boost_test_universal_macro.html

BOOST_<Level>_<action>，Boost 提供了不同的檢定、訊息條件，可透過這些細節來做更為細緻的檢測與記錄。
<level> 參考前述的三個階級
<action> 參考下連結內容的 API 列表
Ref : https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/boost_test/utf_reference/testing_tool_ref.html

bin/<application> 命令 log_level、log_format，C++ 的單元測試框架可視為另外一個進入點編譯完成的應用程式，透過執行應用程式完成檢測與產生輸出記錄，而其應用程式可透過命令介面 ( Command line interface ) 指定匯出內容與匯出格式；而上述使用的 log 等級會對應到相應的輸出內容。
Ref : https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/boost_test/test_output/log_formats.html
*/

// 定義測試模組名稱
// 在此可選用 BOOST_TEST_MAIN、BOOST_TEST_MODULE
#define BOOST_TEST_MODULE Example
// 引入 UTF header，注意執行環境差異需選用不同的 header
#include <boost/test/included/unit_test.hpp>

// 测试套件宣告
BOOST_AUTO_TEST_SUITE( Demo_Test )

// 測試案例 TEST ASSERTION
BOOST_AUTO_TEST_CASE( BOOST_TEST_ASSERTION )
{
    /* test assertion */
    BOOST_TEST( true );
    BOOST_TEST_WARN( false );
    BOOST_TEST_CHECK( false );
    BOOST_TEST_REQUIRE( false );
    BOOST_TEST( true );
}

// 測試案例 MESSAGE ASSERTION
BOOST_AUTO_TEST_CASE( BOOST_MESSAGE_ASSERTION )
{
    BOOST_TEST_MESSAGE(">> CUSTOME TEST MESSAGE");
    BOOST_WARN_MESSAGE(false, "WARN MESSAGE");
    BOOST_CHECK_MESSAGE(false, "CHECK MESSAGE");
    BOOST_REQUIRE_MESSAGE(false, "REQUIRE MESSAGE");
    BOOST_TEST_MESSAGE("TEST MESSAGE");
}

// 測試案例 EQUAL ASSERTION
BOOST_AUTO_TEST_CASE( BOOST_EQUALE_ASSERTION )
{
    int i = 1;
    BOOST_WARN_EQUAL(i, 1);
    BOOST_WARN_EQUAL(i, 2);
    BOOST_CHECK_EQUAL(i, 2);
    BOOST_REQUIRE_EQUAL(i, 2);
    BOOST_WARN_EQUAL(i, 1);
}

// 測試套件結束
BOOST_AUTO_TEST_SUITE_END()
