/*
Boost.Test 中的 fixture ( 夾具、固定變數 ) 是提供不同 Test tree 階層的資料結構，亦可作為跨測試案例間的資料傳遞物件。
*/

// 定義測試模組名稱
// 在此可選用 BOOST_TEST_MAIN、BOOST_TEST_MODULE
#define BOOST_TEST_MODULE Example
// 引入 UTF header，注意執行環境差異需選用不同的 header
#include <boost/test/included/unit_test.hpp>

// 宣告 fixture 資料結構
// Global fixture，提供給測試模組內所有案例共用的資料結構
// ref : https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/boost_test/tests_organization/fixtures/global.html
struct global_fixture
{
    global_fixture() { std::cout << "FIXTURE : global setup" << std::endl; }
    ~global_fixture() { std::cout << "FIXTURE : global teardown"  << std::endl; }

    static int g;
};
int global_fixture::g = 123;

// Suit fixture，提供給測試套件 ( Test Suit ) 內所有案例的資料結構，會於每個案例執行前重新建立
// 需注意，Suit 和 Case 是衝突的，一旦使用 BOOST_FIXTURE_TEST_SUITE 其內僅能使用 BOOST_AUTO_TEST_CASE，反之 BOOST_FIXTURE_TEST_CASE 外層只能使用 BOOST_AUTO_TEST_SUITE
// ref : https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/boost_test/tests_organization/fixtures/per_test_suite_fixture.html
struct suit_fixture
{
    suit_fixture() : v({1,2,3,4,5}) { std::cout << "FIXTURE : suit setup" << std::endl; }
    ~suit_fixture() { std::cout << "FIXTURE : suit teardown" << std::endl; }

    std::vector<int> v;
};

// Case fixture，提供給單一案例的資料結構
// ref : https://www.boost.org/doc/libs/1_75_0/libs/test/doc/html/boost_test/tests_organization/fixtures/case.html
struct case_fixture {
  case_fixture() : i( 0 ) { BOOST_TEST_MESSAGE( "FIXTURE : case setup" ); }
  ~case_fixture() { BOOST_TEST_MESSAGE( "FIXTURE : case teardown" ); }

  int i;
};

// 設定全域資料
BOOST_TEST_GLOBAL_FIXTURE( global_fixture );

// 测试套件宣告，此套件額外設定套件資料
BOOST_FIXTURE_TEST_SUITE( Demo_Test_1, suit_fixture )

    // 測試案例 1
    BOOST_AUTO_TEST_CASE( D1_Case_1 )
    {
        // Global fixture test assertion
        BOOST_CHECK_EQUAL(global_fixture::g, 123);
        global_fixture::g = 456;

        // Suit fixture test assertion
        BOOST_CHECK_EQUAL(v.size(), 5);
        BOOST_CHECK_EQUAL(v[0], 1);
        BOOST_CHECK_EQUAL(v[4], 5);
        v[0] = 10;
        BOOST_CHECK_EQUAL(v[0], 10);
    }

    // 測試案例 2
    BOOST_AUTO_TEST_CASE( D1_Case_2 )
    {
        // Global fixture test assertion
        BOOST_CHECK_EQUAL(global_fixture::g, 456);
        global_fixture::g = 789;

        // Suit fixture test assertion
        BOOST_CHECK_EQUAL(v.size(), 5);
        BOOST_CHECK_EQUAL(v[0], 1);
        BOOST_CHECK_EQUAL(v[4], 5);
        v[0] = 15;
        BOOST_CHECK_EQUAL(v[0], 15);
    }

// 測試套件結束
BOOST_AUTO_TEST_SUITE_END()

// 测试套件宣告，此套件額外設定套件資料
BOOST_FIXTURE_TEST_SUITE( Demo_Test_2, suit_fixture )

    // 測試案例 1
    BOOST_AUTO_TEST_CASE( D2_Case_1 )
    {
        // Global fixture test assertion
        BOOST_CHECK_EQUAL(global_fixture::g, 789);
        global_fixture::g = 987;

        // Suit fixture test assertion
        BOOST_CHECK_EQUAL(v.size(), 5);
        BOOST_CHECK_EQUAL(v[0], 1);
        BOOST_CHECK_EQUAL(v[4], 5);
        v[0] = 20;
        BOOST_CHECK_EQUAL(v[0], 20);
    }

// 測試套件結束
BOOST_AUTO_TEST_SUITE_END()

// 测试套件宣告
BOOST_AUTO_TEST_SUITE( Dem2_Test_3 )

    // 測試案例 1
    BOOST_FIXTURE_TEST_CASE( D3_Case_1, case_fixture )
    {
        // Global fixture test assertion
        BOOST_CHECK_EQUAL(global_fixture::g, 987);

        // Case fixture test assertion
        BOOST_CHECK_EQUAL(i, 0);
    }

BOOST_AUTO_TEST_SUITE_END()
