///�]��range-based for�j�饲���bC++(2011����)�~��� �p�G�ϥ�1998���N�����
///CodeBlocks 17.12 �� Settings compiler �ĲĤG�� -std=c++11
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(char c:s){
		if(c!='2'){
			cout<<c;
		}
	}
	cout<<("\n");
}
