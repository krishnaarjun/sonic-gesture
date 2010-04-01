
#ifndef _MATCHER_H
#define	_MATCHER_H

#include "common.h"

class Matcher {
    KNearest matcher;
    Size winStride, padding;
    HOGDescriptor hog;
    vector<Point> locations;
    vector<float> descriptors;
    Mat handimg;
    Mat train;
    Mat labels_mat;
    vector<int> labels;

public:
    Matcher();
    int match(vector<float> descriptors);
};

#endif
