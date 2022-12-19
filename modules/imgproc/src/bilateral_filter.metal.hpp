#ifndef metal_opencv_bilateral_filter_h
#define metal_opencv_bilateral_filter_h

#include <stdint.h>
#include <vector>
#include "opencv2/core/mat.hpp"
#include "opencv2/core/types.hpp"

void metal_bilateralFilter(
                cv::InputArray _src,
                cv::OutputArray _dst,
                cv::InputArray space_weight,
                cv::InputArray space_ofs,
                int radius,
                int maxk,
                float gauss_color_coeff
);

#endif