#include <iostream>
#include "karlanc.hpp"

using namespace std;

void szavakrabont(char *c,char szavak[][CHAR_STAR_SIZE]);
void szavakrabont(char* c, char szavak[][CHAR_STAR_SIZE],char koz);

int main()
{
	char c[CHAR_STAR_SIZE][CHAR_STAR_SIZE],c1[CHAR_STAR_SIZE];
	cin.getline(c1,CHAR_STAR_SIZE);
	cout<<"...";
	int x=szavak(c1,c);
	for(int i=0;i<x;i++){
		cout<<c[i]<<'\n';
	}
    return 0;
}
