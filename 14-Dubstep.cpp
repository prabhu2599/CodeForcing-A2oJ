#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;
	int temp=0;
	string str1;
	int space = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
		{
		    if(i == 0)
		        space = 1;
		    temp = 1;
			i += 2;
		}
		else
		{
		    if (temp)
			{
				//cout << " ";
				str1 = str1 + " ";
				temp--;
				//cout<<first<<endl;
			}
			str1 = str1 + str[i];
			//cout << str[i];
		}
	}
	if(space){
	    cout<<str1.substr(1,str1.size());
	} else{
	cout<<str1;
	}
	return 0;
}
