/* Copyright (c) 2024 Skyward Experimental Rocketry
 * Author: Emilio Corigliano
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <chrono>

#include "algorithms/NAS/NASState.h"
/* linter off */ using namespace std::chrono;

namespace TestPropagator0
{
std::chrono::milliseconds dt = 20ms;
int n                        = 50;
Boardcore::NASState nas[]    = {{1, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {2, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {3, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {4, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {5, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {6, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {7, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {8, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {9, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {10, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {11, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {12, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {13, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {14, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {15, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {16, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {17, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {18, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {19, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {20, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {21, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {22, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {23, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {24, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {25, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {26, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {27, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {28, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {29, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {30, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {31, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {32, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {33, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {34, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {35, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {36, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {37, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {38, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {39, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {40, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {41, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {42, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {43, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {44, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {45, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {46, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {47, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {48, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {49, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}},
                                {50, {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0}}};

Boardcore::PropagatorState STATE0(0, 0, nas[0]);

}  // namespace TestPropagator0

namespace TestPropagator1
{
std::chrono::milliseconds dt = 20ms;
int n                        = 100;
Boardcore::NASState nas[]    = {
       {1, {0, 42, 0, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {2, {-0.02, 42, 0.02, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {3, {-0.04, 42, 0.04, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {4, {-0.06, 42, 0.06, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {5, {-0.08, 42, 0.08, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {6, {-0.1, 42, 0.1, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {7, {-0.12, 42, 0.12, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {8, {-0.14, 42, 0.14, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {9, {-0.16, 42, 0.16, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {10, {-0.18, 42, 0.18, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {11, {-0.2, 42, 0.2, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {12, {-0.22, 42, 0.22, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {13, {-0.24, 42, 0.24, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {14, {-0.26, 42, 0.26, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {15, {-0.28, 42, 0.28, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {16, {-0.3, 42, 0.3, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {17, {-0.32, 42, 0.32, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {18, {-0.34, 42, 0.34, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {19, {-0.36, 42, 0.36, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {20, {-0.38, 42, 0.38, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {21, {-0.4, 42, 0.4, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {22, {-0.42, 42, 0.42, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {23, {-0.44, 42, 0.44, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {24, {-0.46, 42, 0.46, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {25, {-0.48, 42, 0.48, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {26, {-0.5, 42, 0.5, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {27, {-0.52, 42, 0.52, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {28, {-0.54, 42, 0.54, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {29, {-0.56, 42, 0.56, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {30, {-0.58, 42, 0.58, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {31, {-0.6, 42, 0.6, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {32, {-0.62, 42, 0.62, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {33, {-0.64, 42, 0.64, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {34, {-0.66, 42, 0.66, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {35, {-0.68, 42, 0.68, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {36, {-0.7, 42, 0.7, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {37, {-0.72, 42, 0.72, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {38, {-0.74, 42, 0.74, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {39, {-0.76, 42, 0.76, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {40, {-0.78, 42, 0.78, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {41, {-0.8, 42, 0.8, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {42, {-0.82, 42, 0.82, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {43, {-0.84, 42, 0.84, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {44, {-0.86, 42, 0.86, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {45, {-0.88, 42, 0.88, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {46, {-0.9, 42, 0.9, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {47, {-0.92, 42, 0.92, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {48, {-0.94, 42, 0.94, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {49, {-0.96, 42, 0.96, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {50, {-0.98, 42, 0.98, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {51, {-1, 42, 1, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {52, {-1.02, 42, 1.02, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {53, {-1.04, 42, 1.04, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {54, {-1.06, 42, 1.06, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {55, {-1.08, 42, 1.08, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {56, {-1.1, 42, 1.1, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {57, {-1.12, 42, 1.12, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {58, {-1.14, 42, 1.14, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {59, {-1.16, 42, 1.16, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {60, {-1.18, 42, 1.18, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {61, {-1.2, 42, 1.2, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {62, {-1.22, 42, 1.22, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {63, {-1.24, 42, 1.24, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {64, {-1.26, 42, 1.26, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {65, {-1.28, 42, 1.28, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {66, {-1.3, 42, 1.3, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {67, {-1.32, 42, 1.32, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {68, {-1.34, 42, 1.34, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {69, {-1.36, 42, 1.36, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {70, {-1.38, 42, 1.38, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {71, {-1.4, 42, 1.4, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {72, {-1.42, 42, 1.42, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {73, {-1.44, 42, 1.44, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {74, {-1.46, 42, 1.46, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {75, {-1.48, 42, 1.48, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {76, {-1.5, 42, 1.5, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {77, {-1.52, 42, 1.52, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {78, {-1.54, 42, 1.54, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {79, {-1.56, 42, 1.56, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {80, {-1.58, 42, 1.58, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {81, {-1.6, 42, 1.6, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {82, {-1.62, 42, 1.62, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {83, {-1.64, 42, 1.64, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {84, {-1.66, 42, 1.66, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {85, {-1.68, 42, 1.68, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {86, {-1.7, 42, 1.7, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {87, {-1.72, 42, 1.72, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {88, {-1.74, 42, 1.74, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {89, {-1.76, 42, 1.76, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {90, {-1.78, 42, 1.78, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {91, {-1.8, 42, 1.8, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {92, {-1.82, 42, 1.82, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {93, {-1.84, 42, 1.84, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {94, {-1.86, 42, 1.86, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {95, {-1.88, 42, 1.88, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {96, {-1.9, 42, 1.9, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {97, {-1.92, 42, 1.92, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {98, {-1.94, 42, 1.94, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {99, {-1.96, 42, 1.96, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}},
       {100, {-1.98, 42, 1.98, -1, 0, 1, 0, 0, 0, 1, 0, 0, 0}}};

Boardcore::PropagatorState STATE0(0, 0, nas[0]);

}  // namespace TestPropagator1

namespace TestPropagator2
{
std::chrono::milliseconds dt = 20ms;
int n                        = 100;
Boardcore::NASState nas[]    = {
       {1, {12, -24, -48, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {2, {11.994, -23.976, -47.932, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {3, {11.988, -23.952, -47.864, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {4, {11.982, -23.928, -47.796, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {5, {11.976, -23.904, -47.728, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {6, {11.97, -23.88, -47.66, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {7, {11.964, -23.856, -47.592, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {8, {11.958, -23.832, -47.524, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {9, {11.952, -23.808, -47.456, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {10, {11.946, -23.784, -47.388, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {11, {11.94, -23.76, -47.32, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {12, {11.934, -23.736, -47.252, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {13, {11.928, -23.712, -47.184, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {14, {11.922, -23.688, -47.116, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {15, {11.916, -23.664, -47.048, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {16, {11.91, -23.64, -46.98, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {17, {11.904, -23.616, -46.912, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {18, {11.898, -23.592, -46.844, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {19, {11.892, -23.568, -46.776, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {20, {11.886, -23.544, -46.708, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {21, {11.88, -23.52, -46.64, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {22, {11.874, -23.496, -46.572, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {23, {11.868, -23.472, -46.504, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {24, {11.862, -23.448, -46.436, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {25,
        {11.856, -23.424, -46.3680000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {26,
        {11.85, -23.4, -46.3000000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {27,
        {11.844, -23.376, -46.2320000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {28,
        {11.838, -23.352, -46.1640000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {29,
        {11.832, -23.328, -46.0960000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {30,
        {11.826, -23.304, -46.0280000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {31,
        {11.82, -23.28, -45.9600000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {32,
        {11.814, -23.256, -45.8920000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {33,
        {11.808, -23.232, -45.8240000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {34,
        {11.802, -23.208, -45.7560000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {35,
        {11.796, -23.184, -45.6880000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {36,
        {11.79, -23.16, -45.6200000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {37,
        {11.784, -23.136, -45.5520000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {38,
        {11.778, -23.112, -45.4840000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {39,
        {11.772, -23.088, -45.4160000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {40,
        {11.766, -23.064, -45.3480000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {41,
        {11.76, -23.04, -45.2800000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {42,
        {11.754, -23.016, -45.2120000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {43,
        {11.748, -22.992, -45.1440000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {44,
        {11.742, -22.968, -45.0760000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {45,
        {11.736, -22.944, -45.0080000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {46,
        {11.73, -22.92, -44.9400000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {47,
        {11.724, -22.896, -44.8720000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {48,
        {11.718, -22.872, -44.8040000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {49,
        {11.712, -22.848, -44.7360000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {50,
        {11.706, -22.824, -44.6680000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {51, {11.7, -22.8, -44.6000000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {52,
        {11.694, -22.776, -44.5320000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {53,
        {11.688, -22.752, -44.4640000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {54,
        {11.682, -22.728, -44.3960000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {55,
        {11.676, -22.704, -44.3280000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1, 0, 0, 0}},
       {56,
        {11.67, -22.6799999999999, -44.2600000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {57,
        {11.664, -22.6559999999999, -44.1920000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {58,
        {11.658, -22.6319999999999, -44.1240000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {59,
        {11.652, -22.6079999999999, -44.0560000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {60,
        {11.646, -22.5839999999999, -43.9880000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {61,
        {11.64, -22.5599999999999, -43.9200000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {62,
        {11.634, -22.5359999999999, -43.8520000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {63,
        {11.628, -22.5119999999999, -43.7840000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {64,
        {11.622, -22.4879999999999, -43.7160000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {65,
        {11.616, -22.4639999999999, -43.6480000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {66,
        {11.61, -22.4399999999999, -43.5800000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {67,
        {11.604, -22.4159999999999, -43.5120000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {68,
        {11.598, -22.3919999999999, -43.4440000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {69,
        {11.592, -22.3679999999999, -43.3760000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {70,
        {11.586, -22.3439999999999, -43.3080000000001, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {71,
        {11.58, -22.3199999999999, -43.2400000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {72,
        {11.574, -22.2959999999999, -43.1720000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {73,
        {11.568, -22.2719999999999, -43.1040000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {74,
        {11.562, -22.2479999999999, -43.0360000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {75,
        {11.556, -22.2239999999999, -42.9680000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {76,
        {11.55, -22.1999999999999, -42.9000000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {77,
        {11.544, -22.1759999999999, -42.8320000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {78,
        {11.538, -22.1519999999999, -42.7640000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {79,
        {11.532, -22.1279999999999, -42.6960000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {80,
        {11.526, -22.1039999999999, -42.6280000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {81,
        {11.52, -22.0799999999999, -42.5600000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {82,
        {11.514, -22.0559999999999, -42.4920000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {83,
        {11.508, -22.0319999999999, -42.4240000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {84,
        {11.502, -22.0079999999999, -42.3560000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {85,
        {11.496, -21.9839999999999, -42.2880000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {86,
        {11.49, -21.9599999999999, -42.2200000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {87,
        {11.484, -21.9359999999999, -42.1520000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {88,
        {11.478, -21.9119999999999, -42.0840000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {89,
        {11.472, -21.8879999999999, -42.0160000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {90,
        {11.466, -21.8639999999999, -41.9480000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {91,
        {11.46, -21.8399999999999, -41.8800000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {92,
        {11.454, -21.8159999999999, -41.8120000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {93,
        {11.448, -21.7919999999999, -41.7440000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {94,
        {11.442, -21.7679999999999, -41.6760000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {95,
        {11.436, -21.7439999999999, -41.6080000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {96,
        {11.43, -21.7199999999999, -41.5400000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {97,
        {11.424, -21.6959999999999, -41.4720000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {98,
        {11.418, -21.6719999999999, -41.4040000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {99,
        {11.412, -21.6479999999999, -41.3360000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}},
       {100,
        {11.406, -21.6239999999999, -41.2680000000002, -0.3, 1.2, 3.4, 0, 0, 0, 1,
         0, 0, 0}}};

Boardcore::PropagatorState STATE0(0, 0, nas[0]);

}  // namespace TestPropagator2

namespace TestPropagator3
{
std::chrono::milliseconds dt = 500ms;
int n                        = 100;
Boardcore::NASState nas[]    = {
       {1, {12, -24, -48, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {2, {11.85, -23.4, -46.3, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {3, {11.7, -22.8, -44.6, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {4, {11.55, -22.2, -42.9, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {5, {11.4, -21.6, -41.2, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {6, {11.25, -21, -39.5, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {7, {11.1, -20.4, -37.8, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {8, {10.95, -19.8, -36.1, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {9, {10.8, -19.2, -34.4, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {10, {10.65, -18.6, -32.7, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {11, {10.5, -18, -31, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {12, {10.35, -17.4, -29.3, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {13, {10.2, -16.8, -27.6, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {14, {10.05, -16.2, -25.9, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {15, {9.9, -15.6, -24.2, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {16,
        {9.74999999999999, -15, -22.5, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {17,
        {9.59999999999999, -14.4, -20.8, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {18,
        {9.44999999999999, -13.8, -19.1, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {19,
        {9.29999999999999, -13.2, -17.4, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {20,
        {9.14999999999999, -12.6, -15.7, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {21,
        {8.99999999999999, -12, -14, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {22,
        {8.84999999999999, -11.4, -12.3, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {23,
        {8.69999999999999, -10.8, -10.6, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {24,
        {8.54999999999999, -10.2, -8.89999999999998, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {25,
        {8.39999999999999, -9.59999999999999, -7.19999999999998, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {26,
        {8.24999999999999, -8.99999999999999, -5.49999999999998, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {27,
        {8.09999999999999, -8.39999999999999, -3.79999999999998, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {28,
        {7.94999999999999, -7.79999999999999, -2.09999999999998, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {29,
        {7.79999999999999, -7.19999999999999, -0.399999999999984, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {30,
        {7.64999999999999, -6.59999999999999, 1.30000000000002, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {31,
        {7.49999999999999, -5.99999999999999, 3.00000000000002, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {32,
        {7.34999999999999, -5.39999999999999, 4.70000000000002, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {33,
        {7.19999999999999, -4.79999999999999, 6.40000000000002, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {34,
        {7.04999999999999, -4.19999999999999, 8.10000000000002, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {35,
        {6.89999999999999, -3.59999999999999, 9.80000000000001, -0.3, 1.2, 3.4,
         0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {36,
        {6.74999999999999, -2.99999999999999, 11.5, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {37,
        {6.59999999999999, -2.39999999999999, 13.2, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {38,
        {6.44999999999999, -1.79999999999999, 14.9, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {39,
        {6.29999999999999, -1.19999999999999, 16.6, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {40,
        {6.14999999999999, -0.599999999999988, 18.3, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {41,
        {5.99999999999999, 1.17683640610267e-14, 20, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {42,
        {5.84999999999999, 0.600000000000012, 21.7, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {43,
        {5.69999999999999, 1.20000000000001, 23.4, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {44,
        {5.54999999999998, 1.80000000000001, 25.1, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {45,
        {5.39999999999998, 2.40000000000001, 26.8, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {46,
        {5.24999999999998, 3.00000000000001, 28.5, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {47,
        {5.09999999999998, 3.60000000000001, 30.2, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {48,
        {4.94999999999998, 4.20000000000001, 31.9, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {49,
        {4.79999999999998, 4.80000000000001, 33.6, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {50,
        {4.64999999999998, 5.40000000000001, 35.3, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {51,
        {4.49999999999998, 6.00000000000001, 37, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {52,
        {4.34999999999998, 6.60000000000001, 38.7, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {53,
        {4.19999999999998, 7.20000000000001, 40.4, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {54,
        {4.04999999999998, 7.80000000000001, 42.1, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {55,
        {3.89999999999998, 8.40000000000001, 43.8, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {56,
        {3.74999999999998, 9.00000000000001, 45.5, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {57,
        {3.59999999999998, 9.60000000000001, 47.2, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {58,
        {3.44999999999998, 10.2, 48.9, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {59,
        {3.29999999999998, 10.8, 50.6, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {60,
        {3.14999999999998, 11.4, 52.3, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {61,
        {2.99999999999998, 12, 54, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {62,
        {2.84999999999998, 12.6, 55.7, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {63,
        {2.69999999999998, 13.2, 57.4, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {64,
        {2.54999999999998, 13.8, 59.1000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {65,
        {2.39999999999998, 14.4, 60.8000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {66,
        {2.24999999999998, 15, 62.5000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {67,
        {2.09999999999998, 15.6, 64.2000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {68,
        {1.94999999999998, 16.2, 65.9000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {69,
        {1.79999999999998, 16.8, 67.6000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {70,
        {1.64999999999998, 17.4, 69.3000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {71,
        {1.49999999999998, 18, 71.0000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {72,
        {1.34999999999998, 18.6, 72.7000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {73,
        {1.19999999999998, 19.2, 74.4000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {74,
        {1.04999999999998, 19.8, 76.1000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {75,
        {0.899999999999983, 20.4, 77.8000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {76,
        {0.749999999999983, 21, 79.5000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {77,
        {0.599999999999983, 21.6, 81.2000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {78,
        {0.449999999999983, 22.2, 82.9000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {79,
        {0.299999999999983, 22.8, 84.6000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {80,
        {0.149999999999983, 23.4, 86.3000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {81,
        {-1.71529457304587e-14, 24, 88.0000000000001, -0.3, 1.2, 3.4, 0.5, 0.5,
         0.5, 0.5, 1, 2, 3}},
       {82,
        {-0.150000000000017, 24.6, 89.7000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {83,
        {-0.300000000000017, 25.2, 91.4000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {84,
        {-0.450000000000017, 25.8, 93.1000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {85,
        {-0.600000000000017, 26.4, 94.8000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {86,
        {-0.750000000000017, 27, 96.5000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {87,
        {-0.900000000000017, 27.6, 98.2000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {88,
        {-1.05000000000002, 28.2, 99.9000000000001, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5,
         0.5, 1, 2, 3}},
       {89,
        {-1.20000000000002, 28.8, 101.6, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {90,
        {-1.35000000000002, 29.4, 103.3, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {91,
        {-1.50000000000002, 30, 105, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2, 3}},
       {92,
        {-1.65000000000002, 30.6, 106.7, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {93,
        {-1.80000000000002, 31.2, 108.4, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {94,
        {-1.95000000000002, 31.8, 110.1, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {95,
        {-2.10000000000002, 32.4, 111.8, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {96,
        {-2.25000000000002, 33, 113.5, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {97,
        {-2.40000000000002, 33.6, 115.2, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {98,
        {-2.55000000000002, 34.2, 116.9, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {99,
        {-2.70000000000002, 34.8, 118.6, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}},
       {100,
        {-2.85000000000002, 35.4, 120.3, -0.3, 1.2, 3.4, 0.5, 0.5, 0.5, 0.5, 1, 2,
         3}}};

Boardcore::PropagatorState STATE0(0, 0, nas[0]);

}  // namespace TestPropagator3