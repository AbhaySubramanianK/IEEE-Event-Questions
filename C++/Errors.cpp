//Error Debugging

// 1
// Observe the following C++ code and write the name(s) of the header file(s), which will be essentially required to run it in a C++ compiler :
void main()
{
char CH,STR[20];
cin>>STR;
CH=toupper(STR[0]);
 
	cout<<STR<<starts with<<CH<<endl;
}

// 2
// Observe the following program very carefully and write the names of those header file(s), which are essentially needed to compile and execute the following program successfully:
typedef char STRING[80]; void main ()
{
STRING Txt [] = "We love Peace"; int Count=0;
while (Txt[Count]!='\0') if(isalpha(Txt[Count])) Txt[Count++]='@' ;
else
Txt[Count++]='#' ; puts(Txt);
}

// 3
// Ronica Jose has started learning C++ and has typed the following program. When she compiled the following code written by her, she discovered that she needs to include some header files to successfully compile and execute it. Write the names of those header files, which are required to be included in the code.
void main()
{double X,Times,Result; cin>>X>>Times; Result=pow(X,Times); cout<<Result<<endl;
}

// 4
// Anil typed the following C++ code and during compilation he found three errors as follows:
// (i)	Function strlen should have prototype
// (ii)	Undefined symbol cout
// (iii)	Undefined symbol endl
// On asking, his teacher told him to include necessary header files in the code. Write the names of the header files, which Anil needs to include, for successful compilation and execution of the following code
void main()
{
char Txt[] = "Welcome";
for(int	C= 0; C<strlen(Txt); C++) Txt[C]
= Txt[C]+1;
cout<<Txt<<endl;
}



// 5
// Rewrite the following C++ code after removing all the syntax error(s), if present in the code. Make sure that you underline each correction done by you in the code.
// Important Note :
// –	Assume that all the required header files are already included.
// –	The corrections made by you do not change the logic of the program.
typedef char[80] STR; void main()
{ Txt STR;
gets(Txt);
 
	cout<<Txt[0]<<’\t<<Txt[2]; cout<<Txt<<endline;
}


// 6
//Observe the following C++ code very carefully and rewrite it after removing any/all syntactical errors with each correction underlined.
// Note: Assume all required header files are already being included in the program.
#Define float MaxSpeed =60.5; void main()
{
int MySpeed char Alert='N'; cin>> MySpeed;
if MySpeed > MaxSpeed Alert='Y';
cout<<Alert<<endline;
}



// 7
// Rewrite the following C++ code after removing any/all syntactical errors with each correction underlined.
// Note: Assume all required header files are already being included in the program.
#define Formula(a,b) = 2*a+b void main()
{ float X=3.2;Y=4.1;
Z=Formula(X,Y); cout<<’Result=’<<Z<<endl;
}


// 8
// Rewrite the following C++ code after removing any/all syntactical errors with each correction underlined.
// Note: Assume all required header files are already being included in the program.
void main()
{ cout<<"Enter an Alphabet:";
cin>>CH;
 
	switch(CH)

case ‘A’ cout<<"Ant";		Break; case ‘B’ cout<<"Bear" ;	Break;
}

// 9
// Obtain the output from the following C++ program as expected to appear on the screen after its execution.
// Note :- All the desired header files are already included in the code, which are required to run the code.
void main()
{ char *Text=AJANTA;
int *P, Num[]={1,5,7,9};
P=Num; cout<<*P<<Text<<endl; Text++;
P++;
cout<<*P<<Text<<endl;
}


// 10
// Write the output of the following C++ program code:
// Note: Assume all required header files are already being included in the program.
void Location(int &X,int Y=4)
{ Y+=2;
X+=Y;
}
void main()
{ int PX=l0,PY=2;
Location(PY) ;
cout<<PX<<" , "<<PY<<endl ; Location(PX,PY); cout<<PX<<" , "<<PY<<endl ;
}
