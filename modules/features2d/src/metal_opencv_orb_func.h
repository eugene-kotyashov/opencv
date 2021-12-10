//
//  metal_opencv_orb_func.h
//  metal_opencv_orb_func
//
//  Created by eugene_k on 21.10.21.
//  Copyright © 2021 xrtool. All rights reserved.
//
#ifndef metal_opencv_orb_func_h
#define metal_opencv_orb_func_h

#include <stdint.h>
#include <vector>
#include "opencv2/core/mat.hpp"
#include "opencv2/core/types.hpp"

void metal_harris_responses(
    cv::InputArray img,
    cv::InputArray &layerinfo,
    const cv::Mat &pts,
    cv::Mat &responses,
    int nkeypoints,
    int blockSize,
    float harris_k,
    float scaler_sq_sq);

void metal_fastKptKernel(cv::InputArray img,
                         cv::Mat &kp1,
                         int maxKeypoints,
                         int threshold);

void metal_fastNMSKernel(cv::InputArray img,
                         const cv::Mat &kp1,
                         cv::Mat &kp2,
                         int counter,
                         int maxKeypoints);

void metal_resizeImage(
                        int borderSize,
                        cv::Size finalSize,
                        cv::InputArray imgIn,
                        cv::OutputArray imgOut);

void metal_ICAngles(   
                    cv::InputArray img,
                    cv::InputArray layerinfo,
                    cv::InputArray keypoints,
                    size_t nkeypoints, 
                    cv::OutputArray responses, 
                    const std::vector<int> & u_max,
                    int half_k);
                    
void metal_debug_image_kernel(cv::InputArray imgIn);

#endif
