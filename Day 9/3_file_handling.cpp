#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("1_file_handling.txt");
    fout<<"hello yashwanth\n";
    fout.close();
    cout<<"file is closed"<<endl;
    {
        ifstream fin("1_file_handling.txt");
    string line;
    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}
}
