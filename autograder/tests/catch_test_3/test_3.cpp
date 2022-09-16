//
// Created by rudri on 9/12/2020.
//
#include <iomanip>
#include "catch.hpp"
#include "redirect_io.h"
#include "P3.h"
using namespace std;

static void test_3_1() {
    const int sz = 4;
    double arr[sz] = {-2, 2, 4, -5};
    cout << fixed << setprecision(1);
    cout << calculate_average_distance(arr, sz) << endl;
}

TEST_CASE("Question #3.1") {
    execute_test("test_3_1.in", test_3_1);
}

static void test_3_2() {
    const int sz = 7;
    double arr[sz] = {2, 4, 6, 8, 10, 12, 14};
    cout << fixed << setprecision(1);
    cout << calculate_average_distance(arr, sz) << endl;
}

TEST_CASE("Question #3.2") {
    execute_test("test_3_2.in", test_3_2);
}

static void test_3_3() {
    const int sz = 7;
    double arr[sz] = {2, 4, 6, 8, 10, 12, 14};
    cout << fixed << setprecision(1);
    cout << calculate_average_distance(arr, sz) << endl;
}

TEST_CASE("Question #3.3") {
    execute_test("test_3_3.in", test_3_3);
}

static void test_3_4() {
    const int sz = 1;
    double arr[sz] = {13};
    cout << fixed << setprecision(1);
    cout << calculate_average_distance(arr, sz) << endl;
}

TEST_CASE("Question #3.4") {
    execute_test("test_3_4.in", test_3_4);
}
