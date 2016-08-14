#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

string filename = "test.dat";

class TAP_Data
{
public:
    float aPillarAngle;
    int View_X;
    int View_Y;
    int Offset_X;
    int Offset_Y;
    int Crop_Height;
    int Crop_Width;
};

void WriteTAPData(ofstream& of)
{
    // Write to File
    ofstream fout(filename.c_str(), ios::out | ios::binary);
    if (!fout.is_open())
    {
        cerr << "error: open file for output failed!" << endl;
        abort();
    }
    else
    {
        fout.write((char *)&of,sizeof(TAP_Data));
        fout.close();
    }
}

void ReadTAPData(ifstream& inf, TAP_Data Read)
{
    // Read from file
    ifstream fin(filename.c_str(), ios::in | ios::binary);
    if (!fin.is_open())
    {
        cerr << "error: open file for input failed!" << endl;
        abort();
    }
    else
    {
        //fout.read((char *)&inf,sizeof(TAP_Data));
        //inf.read(Read.aPillarAngle,sizeof(aPillarAngle));


    }
}

int main()
{
    TAP_Data ReadD;
    TAP_Data Config_Data {95.76,73,72,59,58,75,76};
    //WriteTAPData(filename);
    //ReadTAPData(ReadD);

   ofstream outfile;
   outfile.open (filename.c_str(), ios::out|ios::binary|ios::app);
   outfile.write ( (char *)(&Config_Data), sizeof(TAP_Data) );
   outfile.close();

   ifstream infile;
   infile.open (filename.c_str(), ios::in|ios::binary);

   while( infile.read ( (char *)&ReadD, sizeof(TAP_Data) ) )
   infile.close();

    cout <<"Pillar angle is "<< ReadD.aPillarAngle << endl;

}
