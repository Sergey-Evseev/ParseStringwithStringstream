#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

const int numBooks = 5;//5 строк
const string bookData[] =//массив типа string
{
	"F1,Forensics for Houseviwes,Genevieve Valentin,23.4,45.99,35,FICTION",//массив из 5 длинных строк
	"F2,Useless Cyberpunk Gamer Chat,SuperKool CyberDog,0,-1,-2,FICTION",
	"N1,Death by C++,David Bishop,999.99,3.14,123,NONFICTION",
	"U1,A Primer of Wisdom,Sage,-0.99,123.45,987,65,UNDECIDED",
	"F3,Mein Kampf,Adolf Hitler,0,-1000,-1999,FICTION"
};

int main()
{
	for (int  i = 0; i < numBooks; i++)//перебирая строки
	{
		string my_str = bookData[i]; //grab one row of bookData each cycle and put it in 'my_str' string

		vector<string> result; //vector holding strings to split things up

		stringstream s_stream(my_str);//create string stream 's_stream' from the string 'my_str' 

		while (s_stream.good()) {

			string substr;//temporary variable

			getline(s_stream, substr, ','); //get first string delimited by comma and put it in substr 
			result.push_back(substr); //put each substring in the vector at the BACK
		}
		for (int j = 0; j < result.size(); j++) 
		{	//print all splitted strings
			cout << result.at(j) << endl;//result это строковый вектор
		}
		cout << endl;
	}
	return 0;
}

