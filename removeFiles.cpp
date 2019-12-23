#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

#define PASSWORD "biploveisdon"
// to convert character array to string 
string convertToString(char* a, int size) 
{ 
    string s = a; 
    return s; 
} 

int main()
{
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"!!-------------------------------------- Welcome to easy deletion tool ----------------------------------------------!!"<<endl;
	cout<<"!!----------------------------------------- Developed by Biplove LC -------------------------------------------------!!"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;

	// To hide the text
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE); 
    DWORD mode = 0;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));
    
	string pass;
	cout<<"Enter a password: ";
	cin>>pass;
	cout<<endl;
	if (pass == PASSWORD) {
		goto authenticated;
	}   
	else {
		string pass;
		int i = 3;
		do
		{   
			if (i != 1) {
				cout<<"Try again, "<<i<<" times left: ";
			} else {
				cout<<"Last chance: ";
			}
			cin>>pass;	
			cout<<endl;	
			i--;	
		}while(pass != PASSWORD && i > 0);
		if (pass == PASSWORD) {
			goto authenticated;
		}
	}
	cout<<"Aborting!!!";
	abort();
	
	
	authenticated:
		SetConsoleMode(hStdin, mode);  // Show the input texts	
		string x;
		cout<<"\nEnter name of the file you want to delete(To delete by extension, eg:- \".txt\"): ";
		cin>>x;
			    
		if ( x[0] == '.') {
			string ast = "*";
			char ext[sizeof(ast.append(x))];
			string str_ext = ast.append(x);
			strcpy(ext, str_ext.c_str());
			
			char fullFilename[MAX_PATH];
	
		    GetFullPathName(ext, MAX_PATH, fullFilename, nullptr);
		
		    MessageBox(NULL, fullFilename, "Do you want to delete all files with this extension?", MB_OK | MB_ICONQUESTION);
			
			string command = "del /Q ";
			string path = convertToString(fullFilename, sizeof(fullFilename));
			system(command.append(path).c_str());
			cout<<"Deleting files..";
			
		} else {
			char newX[sizeof(x)];
			strcpy(newX, x.c_str());
			
			char fullFilename[MAX_PATH];
	
		    GetFullPathName(newX, MAX_PATH, fullFilename, nullptr);
		    
		    MessageBox(NULL, fullFilename, "Are you sure want to delete this file?", MB_OK | MB_ICONQUESTION);
			if (remove(newX) == 0) {
				cout<<"Deleted successfully!!";
			} else {
				cout<<"Couldn\'t complete deletion!!";
			}
		}			
}
