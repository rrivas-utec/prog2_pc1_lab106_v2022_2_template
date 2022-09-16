//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
using namespace std;

static void question_2() {
    double x = 0;
    cin >> x;
    cout << fixed << setprecision(5);
    cout << exponential(x) << endl;

}

TEST_CASE("Question #2") {
    execute_test("test_2.in", question_2);
}