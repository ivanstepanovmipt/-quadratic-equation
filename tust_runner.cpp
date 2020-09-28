#include "test_runner.h"
#include "solution.h"

/**
  * @file test_runner.cpp
  *
  * @brief Program for testing
  *
  * @author Ivan Stepanov
  *
  * @date 09/28/2020
 */

void TestSolveQuadradicEquationOutFile(){
    int n = 0;
    double a = 0;
    double b = 0;
    double c = 0;
    double n_roots = 0;
    double x1 = 0;
    double x2 = 0;
    std::ifstream input("test.txt");
    input >> n;

    for(int i = 0; i < n; ++i){
        input >> a >> b >> c >> n_roots >> x1 >> x2;
        double test1_x1 = 0;
        double test1_x2 = 0;
        int test1_number_of_roots = SolveQuadradicEquation(a, b, c, &test1_x1, &test1_x2);
        assert(test1_number_of_roots == n_roots);
        assert(test1_x1 == x1 || test1_x1 == x2);
        assert(test1_x2 == x2 || test1_x2 == x1);
        }
}

void TestSolveQuadradicEquation() {

    double test1_x1 = 0;
    double test1_x2 = 0;
    int test1_number_of_roots = SolveQuadradicEquation(1, 4, 3, &test1_x1, &test1_x2);
    assert(test1_number_of_roots == 2);
    assert(test1_x1 == -1 || test1_x1 == -3);
    assert(test1_x2 == -1 || test1_x2 == -3);

    double test2_x1 = 0;
    double test2_x2 = 0;
    int test2_number_of_roots = SolveQuadradicEquation(1, 2, 1, &test2_x1, &test2_x2);
    assert(test2_number_of_roots == 1);
    assert(test2_x1 == -1 || test2_x1 == -1);
    assert(test2_x2 == -1 || test2_x2 == -1);

    double test3_x1 = 0;
    double test3_x2 = 0;
    int test3_number_of_roots = SolveQuadradicEquation(0, 1, 2, &test3_x1, &test3_x2);
    assert(test3_number_of_roots == 1);
    assert(test3_x1 == -2 || test3_x1 == -2);
    assert(test3_x2 == 0 || test3_x2 == 0);

    double test4_x1 = 0;
    double test4_x2 = 0;
    int test4_number_of_roots = SolveQuadradicEquation(5, 1, 2, &test3_x1, &test3_x2);
    assert(test4_number_of_roots == 0);
    assert(test4_x1 == 0 || test4_x1 == 0);
    assert(test4_x2 == 0 || test4_x2 == 0);

    double test5_x1 = 0;
    double test5_x2 = 0;
    int test5_number_of_roots = SolveQuadradicEquation(0, 0, 0, &test3_x1, &test3_x2);
    assert(test5_number_of_roots == -1);
    assert(test5_x1 == 0 || test5_x1 == 0);
    assert(test5_x2 == 0 || test5_x2 == 0);
}
