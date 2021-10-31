#include<iostream>
using namespace std;
typedef unsigned int UINT;


//iNo 0000 0000 1110 0100 1011 1010
//iPos  6
//iNo 0000 0000 1110 0100 1001 1010
UINT ToggleBit(UINT iNo,int iPos1,int iPos2)
{

	
	UINT iMask1=0x00000001,iMask2=0x00000001,iMask=0;
	iMask1=iMask1<<(iPos1-1);
	iMask1=iMask2<<(iPos2-1);
	iMask=iMask1|iMask2;
	UINT iResult=iNo^iMask;
	return iMask;
	
		
}
int main()
{
	UINT iValue=0,iRet=0;
	int i=0,j=0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	cout<<"Enter position of bit\n";
	cin>>i;
	
	cout<<"Enter position of bit\n";
	cin>>j;
	
	iRet=ToggleBit(iValue,i,j);
	cout<<"Updated number is : "<<iRet<<"\n";
	
	
	return 0;
}