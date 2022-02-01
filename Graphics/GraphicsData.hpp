#ifndef GRAPHICS_DATA
#define GRAPHICS_DATA

#include<iostream>
#include<vector>

#include <toml++/toml.h>

class GraphicsData
{

public:
    void load(std::string graphicsConfigPath);
    
    int window_x;
    int window_y;

    int tile_image_region_x_start;
    int tile_image_region_y_start;
    int tile_image_region_x_end;
    int tile_image_region_y_end;

    int tile_image_top_pixel_width;
    int tile_image_top_pixel_height;

    int font_pixel_size;

};

#endif