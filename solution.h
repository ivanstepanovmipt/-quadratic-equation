#pragma once
#include <iostream>
#include <cmath>
#include <assert.h>
#include <cassert>
#include <stdio.h>
#include <string>
#include <fstream>

/**
  * @file solution.h
  *
  * @brief Program for solve quadratic equations
  *
  * @author Ivan Stepanov
  *
  * @date 09/28/2020
 */

bool EqualToZero(double& d);
int SolveQuadradicEquation(double a, double b, double c, double *x1, double *x2);
double Input(const std::string& s);
