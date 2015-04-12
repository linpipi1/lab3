#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
	int number,i,copy,sum;
	ifstream inFile("file.in",ios::in);
	inFile>>number;
//      cout<<number;	
	vector<int>cows(number+1);
	i=0; 
	while(inFile>>copy)
	{
//	        cout<<copy<<" ";
		cows[i]=copy;
//              cout<<cowsweight[i]<<endl;
		i++;	
	}
	
	sort( cows.begin() , cows.end() );
//	for(i=1;i<9;i++)
//	{
//		cout<<cows[i]<<endl;
//	}
	
	sum=cows[8]+cows[7]+cows[6]+cows[5]+cows[4];
	cout<<sum<<endl;

	return 0;
	
}
