#ifndef _FACE_LANDMARKER_H_
#define _FACE_LANDMARKER_H_

#include "opencv2/core.hpp"

namespace mirror {
// 抽象类
class Landmarker {
public:
	virtual Landmarker* Clone() = 0;
	virtual int LoadModel(const char* root_path) = 0;
	virtual int ExtractKeypoints(const cv::Mat& img_src,
		const cv::Rect& face, std::vector<cv::Point2f>* keypoints) = 0;
	virtual ~Landmarker() {};
};


}

#endif // !_FACE_LANDMARKER_H_

