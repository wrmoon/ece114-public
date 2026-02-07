#include <iostream>
#include <string>
#include <cstring> // for memset
#include <cmath> // for std::round
#include <cstdint>

#define IMAGE_WIDTH     1024
#define IMAGE_HEIGHT    768
//#define IMAGE_WIDTH     3840
//#define IMAGE_HEIGHT    2160
#define COLOR_PLANES    3       // R, G, B

struct FixedSizeImage
{
    std::string filename;
    uint8_t pixels[IMAGE_HEIGHT][IMAGE_WIDTH][COLOR_PLANES];
};

using namespace std;

#define PBV  1
#define PBP  2
#define PBR  3
#define TYPE PBR


void readImage_pbv(FixedSizeImage img);
void convertImageToGrayscale_pbv(FixedSizeImage img);
void displayImage_pbv(FixedSizeImage img);

void readImage_pbp(FixedSizeImage* img);
void convertImageToGrayscale_pbp(FixedSizeImage* img);
void displayImage_pbp(FixedSizeImage* img);

void readImage_pbr(FixedSizeImage& img);
void convertImageToGrayscale_pbr(FixedSizeImage& img);
void displayImage_pbr(const FixedSizeImage& img);

int main()
{
    FixedSizeImage image1;
    image1.filename = "puppy1.png";
    ::memset(image1.pixels, 1, sizeof(image1.pixels));
    image1.pixels[0][0][1] = 5;

    cout << "sizeof FixedSizeImage = " << sizeof(FixedSizeImage) << endl;

#if TYPE == PBV
    readImage_pbv(image1);
    displayImage_pbv(image1);
    convertImageToGrayscale_pbv(image1);
    displayImage_pbv(image1);

#elif TYPE == PBP
    readImage_pbp(&image1);
    displayImage_pbp(&image1);
    convertImageToGrayscale_pbp(&image1);
    displayImage_pbp(&image1);

#elif TYPE == PBR
    readImage_pbr(image1);
    displayImage_pbr(image1);
    convertImageToGrayscale_pbr(image1);
    displayImage_pbr(image1);
#endif
    return 0;
}

#if TYPE == PBV
///////////////////////////////////////////////////////////////////////////////
// Pass by value
///////////////////////////////////////////////////////////////////////////////
void readImage_pbv(FixedSizeImage img)
{
    cout << "reading " << img.filename << "..." << endl;
    for (uint32_t row = 0; row < IMAGE_HEIGHT; row++)
    {
        for (uint32_t col = 0; col < IMAGE_WIDTH; col++)
        {
            for (uint32_t color = 0; color < COLOR_PLANES; color++)
            {
                img.pixels[row][col][color] = row + col + color;
            }
        }
    }
}

void convertImageToGrayscale_pbv(FixedSizeImage img)
{
    cout << "converting " << img.filename << " to gray..." << endl;
    for (uint32_t row = 0; row < IMAGE_HEIGHT; row++)
    {
        for (uint32_t col = 0; col < IMAGE_WIDTH; col++)
        {
            uint8_t red =   img.pixels[row][col][0];
            uint8_t green = img.pixels[row][col][1];
            uint8_t blue =  img.pixels[row][col][2];
            uint8_t gray = static_cast<uint8_t>(std::round(0.299 * red + 0.587 * green + 0.114 * blue));
            for (uint32_t color = 0; color < COLOR_PLANES; color++)
            {
                img.pixels[row][col][color] = gray;
            }
        }
    }
}

void displayImage_pbv(FixedSizeImage img)
{
    cout << "first pixel is " 
         << (int)img.pixels[0][0][0] << "," 
         << (int)img.pixels[0][0][1] << "," 
         << (int)img.pixels[0][0][2] << endl;
}
#endif


#if TYPE == PBP
///////////////////////////////////////////////////////////////////////////////
// Pass by pointer
///////////////////////////////////////////////////////////////////////////////
void readImage_pbp(FixedSizeImage* img)
{
    // TODO check for null
    if (img != nullptr)
    {
        cout << "reading " << img->filename << "..." << endl;
        for (uint32_t row = 0; row < IMAGE_HEIGHT; row++)
        {
            for (uint32_t col = 0; col < IMAGE_WIDTH; col++)
            {
                for (uint32_t color = 0; color < COLOR_PLANES; color++)
                {
                    img->pixels[row][col][color] = row + col + color;
                }
            }
        }
    }
}

void convertImageToGrayscale_pbp(FixedSizeImage* img)
{
    // TODO check for null
    cout << "converting " << img->filename << " to gray..." << endl;
    for (uint32_t row = 0; row < IMAGE_HEIGHT; row++)
    {
        for (uint32_t col = 0; col < IMAGE_WIDTH; col++)
        {
            uint8_t red = img->pixels[row][col][0];
            uint8_t green = img->pixels[row][col][1];
            uint8_t blue = img->pixels[row][col][2];
            uint8_t gray = static_cast<uint8_t>(std::round(0.299 * red + 0.587 * green + 0.114 * blue));
            for (uint32_t color = 0; color < COLOR_PLANES; color++)
            {
                img->pixels[row][col][color] = gray;
            }
        }
    }
}

void displayImage_pbp(FixedSizeImage* img)
{
    // TODO check for null
    // TODO const
    cout << "first pixel is " 
         << (int)img->pixels[0][0][0] << "," 
         << (int)img->pixels[0][0][1] << "," 
         << (int)img->pixels[0][0][2] << endl;
}
#endif


#if TYPE == PBR
///////////////////////////////////////////////////////////////////////////////
// Pass by reference
///////////////////////////////////////////////////////////////////////////////
void readImage_pbr(FixedSizeImage& img)
{
    cout << "reading " << img.filename << "..." << endl;
    for (uint32_t row = 0; row < IMAGE_HEIGHT; row++)
    {
        for (uint32_t col = 0; col < IMAGE_WIDTH; col++)
        {
            for (uint32_t color = 0; color < COLOR_PLANES; color++)
            {
                img.pixels[row][col][color] = row + col + color;
            }
        }
    }
}

void convertImageToGrayscale_pbr(FixedSizeImage& img)
{
    cout << "converting " << img.filename << " to gray..." << endl;
    for (uint32_t row = 0; row < IMAGE_HEIGHT; row++)
    {
        for (uint32_t col = 0; col < IMAGE_WIDTH; col++)
        {
            uint8_t red = img.pixels[row][col][0];
            uint8_t green = img.pixels[row][col][1];
            uint8_t blue = img.pixels[row][col][2];
            uint8_t gray = static_cast<uint8_t>(std::round(0.299 * red + 0.587 * green + 0.114 * blue));
            for (uint32_t color = 0; color < COLOR_PLANES; color++)
            {
                img.pixels[row][col][color] = gray;
            }
        }
    }
}

void displayImage_pbr(const FixedSizeImage& img)
{
    cout << "first pixel is " 
         << (int)img.pixels[0][0][0] << "," 
         << (int)img.pixels[0][0][1] << "," 
         << (int)img.pixels[0][0][2] << endl;
}
#endif