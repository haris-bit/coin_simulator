#include<iostream>
#include<vector>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<fstream>

using namespace std;
int main()
{
	srand(time(NULL));
	int num = 0;
	int tails = 0;
	int heads = 0;
	char op;
	cout<<"Coin Toss Simulator[enter]: "<<endl;
	getchar();
	ofstream ofile; //declared for scope
	cout<<"Would like to store the data in a seperate file(y/n)"<<endl;
	cin>>op;
	if(op=='y'or op=='Y')
	{
	string filename;
	cout<<"Enter filename:"<<endl;
	cin>>filename;
	ofile.open(filename.c_str());
	}	
	cout<<"How many coin tosses to generate: "<<endl;
	cout<<"0 as in tails"<<endl;
	cout<<"1 as in heads"<<endl;
	cin>>num;
	vector <int>arr(num);
	
	for(int i = 0; i<arr.size(); i++)
	{
		arr[i] = rand()%2;
		if(arr[i]==0)
		{
			if(op=='y'or op=='Y')
			{
			ofile<<"tails"<<arr[i]<<" ";
			}
			tails++;
		}
		else if(arr[i]==1)
		{
		ofile<<"heads"<<arr[i]<<" ";	
		heads++;
			
		}
		
	}
	
	cout<<"By Law of Large Numbers:"<<endl;
	cout<<"Total: "<<arr.size()<<endl;
	cout<<"No. of tails: "<<tails<<endl;
	cout<<"No. of heads: "<<heads<<endl;
	
	return 0;	
}
