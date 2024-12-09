/* Copyright (c) 2021-2022 Skyward Experimental Rocketry
 * Authors: Riccardo Musso, Alberto Nidasio
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
#pragma once

#include <sensors/SensorData.h>
#include <sensors/correction/SixParametersCorrector/SixParametersCorrector.h>

#include <Eigen/Core>
#include <Eigen/Eigenvalues>
#include <vector>

namespace Boardcore
{

/**
 * @brief Soft and hard iron calibration utility.
 *
 * Fits a non-rotated ellipsoid to the calibration data and then derives the
 * correction parameters.
 *
 * Reference:
 * https://www.st.com/resource/en/design_tip/dt0059-ellipsoid-or-sphere-fitting-for-sensor-calibration-stmicroelectronics.pdf
 *
 * @tparam MaxSamples
 */
class SoftAndHardIronCalibration
{
public:
    SoftAndHardIronCalibration();

    bool feed(const MagnetometerData& data);

    /**
     * @brief Uses the recorded measurements to compute the correction
     * parameters needed to correct sensor's data.
     *
     * Note: Feed at leas 9 measurements!
     *
     * @return SoftAndHardIronCorrector containing the correction parameters.
     */
    SixParametersCorrector computeResult();

private:
    Eigen::Matrix<float, 7, 7> D = Eigen::Matrix<float, 7, 7>::Zero();
};

}  // namespace Boardcore
