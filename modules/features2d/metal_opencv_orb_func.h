//
//  metal_opencv_orb_func.h
//  metal_opencv_orb_func
//
//  Created by eugene_k on 21.10.21.
//  Copyright © 2021 xrtool. All rights reserved.
//
#ifndef metal_opencv_orb_func_h
#define metal_opencv_orb_func_h

#define USE_METAL

#include <stdint.h>
#include <vector>
#include "opencv2/core/mat.hpp"
#include "opencv2/core/types.hpp"

void metal_harris_responses(
                            const cv::Mat& img,
                            const cv::Mat& layerinfo,
                            cv::Mat& pts,
                            cv::Mat& responses, 
                            int nkeypoints,
                            int blockSize,
                            float harris_k,
                            float scaler_sq_sq);

#endif
