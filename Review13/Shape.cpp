//
//  Shape.cpp
//  Review13
//
//  Created by Breno Sallouti on 12/06/17.
//  Copyright © 2017 Breno Sallouti. All rights reserved.
//

#include "Shape.hpp"
float Shape::rectangleArea (float base, float height, float area) {
    area = base * height;
    return area;
}
float Shape::TriangleArea (float base, float height, float area) {
    area = (base * height)/2;
    return area;
}

