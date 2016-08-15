#include "FileSystem.h"

void WritePData(P_Data& Config_Data, string Fname)
{
    // Write to File
    ofstream outfile;
    outfile.open (Fname.c_str(), ios::out|ios::binary);
    outfile.write ( (char *)(&Config_Data), sizeof(P_Data) );
    outfile.close();
}

void ReadPData(P_Data& ReadD, string Fname)
{
    // Read from file
    ifstream infile;
    infile.open (Fname.c_str(), ios::in|ios::binary);

    while( infile.read ( (char *)&ReadD, sizeof(P_Data) ) )
        infile.close();
}

void LoadData(P_Data& SrcRecord, P_Data& NewRecord)
{
    SrcRecord = NewRecord;
}
