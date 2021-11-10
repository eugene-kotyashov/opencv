//
//  metal_orb_args_types.h
//  cad-viewer-ipad
//
//  Created by eugene_k on 25.10.21.
//  Copyright © 2021 xrtool. All rights reserved.
//

#ifndef metal_orb_args_types_h
#define metal_orb_args_types_h


#define HARRIS_RESPONSE_ARGS_BUFFER_ID  0

#define DUMMY_BUF_LEN 10

typedef enum _HarrisResponsesArgsBufferIDs{
    
    IMG_BUF_BUF_ID,
    LAYER_INFO_BUF_ID,
    KEYPOINTS_BUF_ID,
    RESPONSES_BUF_ID,
    N_KEYPOINTS_CONST_ID,
    IMG_STEP_CONST_ID,
    IMG_OFFSET0_CONST_ID,
    BLOCK_SIZE_CONST_ID,
    HARRIS_K_CONST_ID,
    SCALE_SQ_SQ_CONST_ID
    
} HarrisResponsesArgsBufferIDs;

typedef struct _HarrisResponsesKernelArgsConstants {
    
    uint nkeypoints ;
    int  imgstep;
    int  imgoffset0;
    int  blockSize ;
    float harris_k ;
    float scale_sq_sq ;
} HarrisResponsesKernelArgsConstants;
#endif /* metal_orb_args_types_h */
