#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream myfile("D:\\argument.txt");
  if(!myfile)
  {
    cout<<"unable to open myfile";
    exit(1);
  }
  else
  {
    string DEFAULT_RUN_DIR;
    string MNG_IP;
    while(!myfile.eof)
    {
      myfile.getline(DEFAULT_RUN_DIR);
      ...
    }
  }
}
