#ifndef _FACE_DETECTOR_H_
#define _FACE_DETECTOR_H_

#include "opencv2/core.hpp"
#include "../common/common.h"

namespace mirror {
// 抽象类
class Detector {
public:
	virtual Detector* Clone() = 0;
	virtual int LoadModel(const char* root_path) = 0;
	virtual int Detect(const cv::Mat& img_src, std::vector<FaceInfo>* faces) = 0;
	virtual ~Detector() {};
};

}
#endif // !_FACE_DETECTOR_H_

