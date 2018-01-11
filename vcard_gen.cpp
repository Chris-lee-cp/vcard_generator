/*****************************************************************************
**
**  Name:           vcard_gen.cpp
**
**  Description:    Simple V-Card generator.
**
**  Copyright  2018, junghoon lee(jhoon.chris@gmail.com)
**               All Rights Reserved.
**              Proprietary and confidential.
**
*****************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int generate_vcard (int i) 
{
  string filename = "test";
  filename += to_string(i);
  filename += ".vcf";
  
  cout << "genereate " << filename << "\n";

  ofstream myfile;
  myfile.open(filename);
  if (myfile.is_open())
  {
    myfile << "BEGIN:VCARD\n";
    myfile << "VERSION:3.0\n";
    myfile << "PRODID:-//Apple Inc.//iPhone OS 11.2.1//EN\n";
    myfile << "N:;test"<<i<<";;;\n";
    myfile << "FN: test"<<i<<"\n";
    myfile << "ORG:test"<<i<<"\n";
    myfile << "TEL;type=HOME;type=VOICE;type=pref:+1650987100"<<i<<"\n";
    myfile << "TEL;type=CELL;type=VOICE:(777) 999-0000"<<i<<"\n";
    myfile << "END:VCARD\n";
    myfile.close();
  }
  else cout << "Unable to open file";

  return 0;
}

int main () {

  cout << "generate 2000 vcards!" << "\n";
  for (int i = 0 ; i < 2000 ; i++)
     generate_vcard(i);

  return 0;
}
