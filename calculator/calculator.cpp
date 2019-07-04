#include "stdafx.h"
#include "function.h"
#include <conio.h>

using namespace System;

int main(array<System::String ^> ^args)
{
    char operation;
    float  A,B,REZ;
	cout<<"A=";
	cin>>A;
	cout<<"operation: ";
	cin>>operation;
	cout<<"B=";
	cin>>B;

	switch (operation) {
	case'+':REZ=A+B;break;
	case'-':REZ=A-B;break;
	case'*':REZ=A*B;break;
	case'/':REZ=A/B;break;
	default:cout<<"Error operation";
	}
	if (B<0)
		if (operation=='-')
			cout<<A<<'+'<<B*-1<<"="<<REZ<<'\n';
		else
		if (operation=='+')
	        cout<<A<<B<<"="<<REZ<<'\n';
		else
		    cout<<A<<operation<<"("<<B<<")"<<"="<<REZ<<'\n';
	else
		cout<<A<<operation<<B<<"="<<REZ<<'\n';
		_getch();
		return 0;
}