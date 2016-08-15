#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

string filename = "test.dat";

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

void WritePData(P_Data& Config_Data)
{
    // Write to File
    ofstream outfile;
    outfile.open (filename.c_str(), ios::out|ios::binary);
    outfile.write ( (char *)(&Config_Data), sizeof(P_Data) );
    outfile.close();
}

void ReadPData(P_Data& ReadD)
{
    // Read from file

    ifstream infile;
    infile.open (filename.c_str(), ios::in|ios::binary);

    while( infile.read ( (char *)&ReadD, sizeof(P_Data) ) )
        infile.close();
}

void LoadData(P_Data& SrcRecord, P_Data& NewRecord)
{
    SrcRecord = NewRecord;
}

int main()
{
    P_Data ReadD;
    P_Data Config_Data = {97.76,73,72,59,58,75,76};

    WritePData(Config_Data);
    ReadPData(ReadD);

    Config_Data.Print_Data();

    ReadD = {76,76,76,76,76,76,76};

    LoadData(Config_Data, ReadD);

    Config_Data.Print_Data();
}
