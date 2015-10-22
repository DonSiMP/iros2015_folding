// A class that implements distance field computation from an image.

#ifndef __DISTANCE_FIELD_H__
#define __DISTANCE_FIELD_H__

#include <bluetail/image/image.h>
using namespace _BlueTail::_Image;

void generateSDF(const SImage<double, 1>& in_binary_image, SImage<double, 1>& out_SDF);
void generateDF(const SImage<double, 1>& in_binary_image, SImage<double, 1>& out_DF);

#endif
