/*Basics of file handling  operations.*/
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
//	ofstream outfile("example.txt");
//	if (outfile)
//	{
//		outfile << "Hello, file handling!";
//		cout << "File created and data written successfully!\n";
//	}
//	else
//	{
//		cerr << "Error creating file!\n";
//	}
//
//	outfile.close();
//
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
//	ofstream outfile_1("example.txt", ios::app);//Input/Output Streams namespace mode.
//
//	if (outfile_1)
//	{
//		outfile_1 << "\nAppending new line.";
//		cout << "Data appended successfully!\n";
//
//	}
//	else
//	{
//		cerr << "Error opening file for updating!\n";
//	}
//
//	outfile_1.close();
//
//	if (remove("example.txt")==0)
//	{
//		cout << "File deleted successfully!\n";
//	}
//	else
//	{
//		cerr << "Error deleting the file!\n";
//	}
//
//	return 0;
//}