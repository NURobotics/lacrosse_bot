#ifndef LACROSSE_BOT_FILTER_H
#define LACROSSE_BOT_FILTER_H

#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

namespace nurc {

using namespace cv;
using namespace std;

class Filter
{
public:
	Filter() {}
	virtual Mat& filter(Mat& image) = 0;
	Mat& operator()(Mat& image) { return filter(image); }
	
	const char *debug() { return "FILTER DEBUGGING"; }

private:
	Filter(const Filter& copy);
	Filter& operator=(const Filter& copy);
};

} // namespace

#endif
