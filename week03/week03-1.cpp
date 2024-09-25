///因為range-based for迴圈必須在C++(2011之後)才能用 如果使用1998的就不能用
///CodeBlocks 17.12 裡 Settings compiler 勾第二個 -std=c++11
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
