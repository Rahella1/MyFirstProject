#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    char name[10], familyname[12], lastname[14];
    
 ofstream myfile(" filename.txt");
 if ( myfile.is_open())
 {
     cout << "Enter given name and familiy name with space "<<endl;
     cin>> name >>familyname>>lastname;
     
     myfile << " This is the first person's name " << name <<familyname <<lastname<<endl;
     myfile.close();
 }
else cout<< " unable to openfile"<<endl;

  return 0;
}