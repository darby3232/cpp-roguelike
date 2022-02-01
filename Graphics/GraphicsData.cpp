#include "GraphicsData.hpp"

void GraphicsData::load(std::string graphicsConfigPath)
{

	auto graphics_config = toml::parse_file(graphicsConfigPath);

	this->window_x = graphics_config["screen_x"].value_or(640);
	this->window_y = graphics_config["screen_y"].value_or(480);

	this->tile_image_region_x_start = graphics_config["tile_image_region_x_start"].value_or(0);
	this->tile_image_region_x_end = graphics_config["tile_image_region_x_end"].value_or(300);

	this->tile_image_region_y_start = graphics_config["tile_image_region_y_start"].value_or(0);
	this->tile_image_region_y_end = graphics_config["tile_image_region_y_end"].value_or(300);

	this->tile_image_top_pixel_width = graphics_config["tile_image_top_pixel_width"].value_or(0);
	this->tile_image_top_pixel_height = graphics_config["tile_image_top_pixel_width"].value_or(0);

	this->font_pixel_size = graphics_config["font_pixel_size"].value_or(0);

}
