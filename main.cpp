#include <iostream>
#include <iostream>
#include <fstream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	ifstream file;
 	ofstream fileOut; 
 	
 	int length;
 	int strOfNum;
 	int firstElement;
 	int last = 0;
 	
 	bool first = true;
 	
 	file.open("c:\liczby2.txt");
 	fileOut.open("wyjscie.txt");
 	
 	if (file.good()) 
	 {
 	 	while(!file.eof())
	     {
	        file>>strOfNum;
	       	
			if (strOfNum >= last)
			{
				if (first)
				{
					firstElement = strOfNum;
					first = false;
				};
				
				length++;
			} 
			else 
			{
				length = 0;
				first = true;
			}
			
	        last<<strOfNum;
	     }
		 fileOut<<"najdluzszy niemalejacy ciag liczb rozpoczyna sie liczba: "<<firstElement<<endl;
		 fileOut<<"sk³ada siê z: "<<to_string( firstElement ).length()<<" elementow"<<endl;
		 file.close();
		 fileOut.close();
	 }
 	
	return 0;
}
