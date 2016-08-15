#ifndef FILESYSTEM_H_INCLUDED
#define FILESYSTEM_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstdlib>
//#include <string>

using namespace std;

class P_Data
{
public:
    float Angle;
    int View_X;
    int View_Y;
    int Offset_X;
    int Offset_Y;
    int Crop_Height;
    int Crop_Width;

    void Print_Data()
    {
        cout <<"Pillar angle is "<< this->Angle << endl;
        cout <<"View_X is "<< this->View_X << endl;
        cout <<"View_Y is "<< this->View_X << endl;
        cout <<"Offset_X is "<< this->Offset_X << endl;
        cout <<"Offset_X is "<< this->Offset_Y << endl;
        cout <<"Crop_Height is "<< this->Crop_Height << endl;
        cout <<"Crop_Width is "<< this->Crop_Width << endl;
    }
};


void WritePData(P_Data& Config_Data, string Fname);
void ReadPData(P_Data& ReadD, string Fname);
void LoadData(P_Data& SrcRecord, P_Data& NewRecord);

#endif // FILESYSTEM_H_INCLUDED
