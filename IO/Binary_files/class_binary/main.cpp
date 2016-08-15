#include "FileSystem.h"

using namespace std;

string filename = "test.dat";

int main()
{
    P_Data ReadD;
    P_Data Config_Data = {97.76,73,72,59,58,75,76};

    WritePData(Config_Data, filename);
    ReadPData(ReadD, filename);

    Config_Data.Print_Data();

    ReadD = {76,76,76,76,76,76,76};

    LoadData(Config_Data, ReadD);

    Config_Data.Print_Data();
}
