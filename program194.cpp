#include<iostream>
using namespace std;
typedef unsigned int UINT;



UINT ToggleRange(UINT iNo,int iStart,int iEnd)
{
	UINT iMaske1=0xffffffff,iMaske2=0xffffffff,iMaske=0;
	UINT iResult=0;
	iMaske1=iMaske1<<(iStart-1);
	iMaske2=iMaske2>>(32-iEnd);
	iMaske=iMaske1&iMaske2;
	iResult=iNo^iMaske;
	return iResult;

}
int main()
{
	UINT iValue=0,iRet=0;
	int i=0,j=0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	cout<<"Enter starting position\n";
	cin>>i;
	cout<<"Enter ending  position\n";
	cin>>j;
	

	iRet=ToggleRange(iValue,i,j);
	cout<<"Updated number is : "<<iRet<<"\n";
	
	
	return 0;
}