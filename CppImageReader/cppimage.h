#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct CPPIMAGE_COLOR
{
	unsigned char RED;
	unsigned char GREEN;
	unsigned char BLUE;
};

struct BITMAP_FILEHEADER
{
	unsigned char Identifier;
	unsigned int FileSize;
	unsigned int Reserved;
	unsigned int BitmapDataOffset;
};

struct BITMAP_INFOHEADER
{
	unsigned int BitmapHeaderSize;
	unsigned int Width;
	unsigned int Height;
	unsigned char Planes;
	unsigned char BitsPerPixel;
	unsigned int Compression;
	unsigned int BitmapDataSize;
	unsigned int H_Resolution;
	unsigned int V_Resolution;
	unsigned int UsedColors;
	unsigned int ImportantColors;
};

class cppimage
{
public:
	cppimage();
	cppimage(string FilePos);
	void SetColor(int x, int y, unsigned char RED, unsigned char GREEN, unsigned char BLUE);
private:
	CPPIMAGE_COLOR** ImageData;
	string FileType;

	void BitmapReader(string FilePos);
};
