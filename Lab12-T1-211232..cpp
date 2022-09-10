#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() 
{
	string a,b;
	
	
	ifstream fin("E:\\C++ files\\Result.txt"); //OPENS a existing file in read mode
	getline(fin,a); //get data 1
	getline(fin,b); //get data 2
	cout<<a<<endl<<b; 
	
	ofstream fout("E:\\C++ files\\Another Result.txt"); //opens a new file
	fout<<a<<endl<<b; //display the result on new file
return 0;
}
