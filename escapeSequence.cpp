


/*program to show the use of escape sequence*/
#include<iostream>

using namespace std;
//Escape sequence
int main()
{

cout<<"hello";
cout<<"\nindia";
cout<<"\nthis is \nline one";	       // \n new line character
cout<<"\nThis is \t line 2";	       // \t horizontal tab
cout<<"\nThis is \a line 3";	       // \a audible bell
cout<<"\nThis is\b\b line 4";	       // \b backspace
cout<<"\nThis is\r line 5";	       // \r carriage return
cout<<"\nThis is line 6\r";	       // \r carriage return
cout<<"\n\"This is line 7\"";	       // \" double quotes
cout<<"\n\'This is line 8\'";	       // \' Single quotes
cout<<"\n\\This is line 9\\";	       // \\ back slash
cout<<"\n\vThis is line 10";	       // \v vertical tab
cout<<"\n\fThis is line 11";	       // \f form feed
cout<<"\nThis is \0line 12";	       // \0 NUll character

return 0;
}
