#include<iostream>
using namespace std;
typedef unsigned int UINT;

//imp que
UINT CountBit(UINT iNo)
{
	UINT i=0,iCnt=0;
	UINT iMask=0x00000001;
	for(i=1;i<32;i++,iMask=iMask<<1)
	{
		
		if((iNo & iMask)==iMask)
		{
			iCnt++;
		}
		
		
	}
	return iCnt;
}


int main()
{
	UINT iValue=0,iRet=0;
	int i=0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	
	
	iRet=CountBit(iValue);
	cout<<"Number of bit which are on: "<<iRet<<"\n";
	
	
	return 0;
}