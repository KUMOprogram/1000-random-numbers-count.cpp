#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
system("color f1");

	srand(time(0));
	int i,j;
	int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	
	for (i=0; i<1000; ++i)
	{	
		int r=rand();
		r=(r%6)+1;

		if (r==1){a1++;}
		else if (r==2){a2++;}
		else if (r==3){a3++;}
		else if (r==4){a4++;}
		else if (r==5){a5++;}
		else if (r==6){a6++;}
	}
	
	cout<<" 1 emfanisthke fores "<<a1<<endl<<endl;
	cout<<" 2 emfanisthke fores "<<a2<<endl<<endl;
	cout<<" 3 emfanisthke fores "<<a3<<endl<<endl;
	cout<<" 4 emfanisthke fores "<<a4<<endl<<endl;
	cout<<" 5 emfanisthke fores "<<a5<<endl<<endl;
	cout<<" 6 emfanisthke fores "<<a6<<endl<<endl;
	
system("pause");
}
