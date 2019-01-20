#include <string>

#include "GeneticDrawer.hpp"
#include "GreyscaleRawImage.hpp"

int main(int argc, char** args)
{
	const int width = 256;
	const int height = 256;
    const char * input_path = "./input/Raw-Lenna-256.raw";
    const char * output_dir = "./output/";

	bk::GreyscaleRawImage image;
	image.load_from_file(input_path, width, height);
	
	bk::GeneticDrawerSettings settings { 6, 2, 3 };

	bk::GeneticDrawer drawer(image, settings, output_dir);

	drawer.start();

    return 0;
}