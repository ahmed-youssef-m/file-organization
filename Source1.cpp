///*Access Methods*/
//
//#include<iostream>
//#include<fstream>
//#include<string>
//
//using namespace std;
//
//int main() {
//
//	string line = "";
//
//	//Sequential Access
//	ifstream infile("example.txt");
//
//	if (infile)
//	{
//		while (getline(infile, line)) {
//			cout << line << endl;
//		}
//	}
//	else
//	{
//		cerr << "Error opening file for reading!\n";
//	}
//
//	infile.close();
//
//	//Direct (Random) Access
//	fstream file("example.txt", ios::in | ios::out);
//
//	if (file)
//	{
//		file.seekp(6);//seek put is a write pointer used to refer to writing location in this case (6 byte/char)
//		file << "Random";
//		file.seekg(0);//seek get is a reader pointer used to refer to reading location in this case (0 byte/char) since the pointer is in end of the file.
//
//		while (getline(file, line)) {
//			cout << line << endl;
//		}
//	}
//	else
//	{
//		cerr << "Error opening file!\n";
//	}
//
//	file.close();
//
//	return 0;
//}