#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

fstream Config_file;
std::vector<std::string> lines;
string line;

class TAP_Data
{
public:
    float aPillarAngle;
    int View_X;
    int View_Y;
    int Crop_Height;
    int Crop_Width;

    //Open and close file for writing data
    void SaveConfig()
    {
        Config_file.open("TAP.config", ios_base::out | ios_base::in);  // will not create file
        if (Config_file.is_open())
        {
            cout << "Warning, Config file already exists\n";
            //if (no)
            {
                Write_Data();
                Config_file.close();
                // throw something
            }
        }
        else
        {
            Config_file.clear();
            cout << "Config file created\n";
            Config_file.open("TAP.config", ios_base::out);  // will create if necessary
            Write_Data();
            Config_file.close();
        }
    }

    //Red Data from Config file
    void Read_Data()
    {
        Config_file.open("TAP.config", ios_base::out | ios_base::in);  // will not create file
        if (Config_file.is_open())
        {
            while ( std::getline(Config_file, line) )
            {
                cout<<"The line is "<<line<<endl;
                // skip empty lines:
                if (line.empty())
                    continue;
                lines.push_back(line);
            }
        }
    }

    //Write Data to Config file
    void Write_Data()
    {
        Config_file << "aPillarAngle: " << aPillarAngle <<'\n'<<
                    "  View_X: " << View_X <<'\n'<<
                    "  View_Y: " << View_Y <<'\n'<<
                    "  Crop_Height: " << Crop_Height <<'\n'<<
                    "  Crop_Width: " << Crop_Width <<'\n';
    }

    // Print Config information to the screen
    void print()
    {
        std::cout << "aPillarAngle: " << aPillarAngle <<'\n'<<
                  "  View_X: " << View_X <<'\n'<<
                  "  View_Y: " << View_Y <<'\n'<<
                  "  Crop_Height: " << Crop_Height <<'\n'<<
                  "  Crop_Width: " << Crop_Width <<'\n';
    }
};


int main()
{
    TAP_Data Config_Data {95.76,59,58,75,76};
    //Config_Data.print();
    //Config_Data.SaveConfig();
    Config_Data.Read_Data();
    int i=0;
    //for(int i=0; i<10; i++)
    while(line[i]!='\0')
    {
        cout<<"Data is "<<lines[i]<<endl;
    }
    return 0;
}
