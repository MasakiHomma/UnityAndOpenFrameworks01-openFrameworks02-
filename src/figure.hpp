//
//  figure.hpp
//  Syphon_01
//
//  Created by 本間　理起 on 2017/04/02.
//
//

#ifndef figure_hpp
#define figure_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* figure_hpp */

class figure {
private:
    
public:
    void pentagon(float center_coordinate_x,float center_coordinate_y,float radius,int frame_comma_side,int frameCount_);
    void quadrangle(float center_coordinate_x,float center_coordinate_y,float radius,int frame_comma_side,int frameCount_);
    void triangle(float center_coordinate_x,float center_coordinate_y,float radius,int frame_comma_side,int frameCount_);
    void hexagon(float center_coordinate_x,float center_coordinate_y,float radius,int frame_comma_side,int frameCount_);
    void draw(int frame_comma_side,int frameCount);
};