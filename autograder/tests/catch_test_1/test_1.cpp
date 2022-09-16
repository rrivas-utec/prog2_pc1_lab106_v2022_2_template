//
// Created by rudri on 9/12/2020.
//
#include <iomanip>
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

static void test_1() {
 question_1();
}

TEST_CASE("Question #1") {
    execute_test("test_1.in", test_1);
}