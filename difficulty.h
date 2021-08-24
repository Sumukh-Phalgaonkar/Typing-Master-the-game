/************<difficulty.h***********/

#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

class difficulty
{
	protected:
		string data;
		void datagenerator(){}
		
	public:
		void display(){}
		
};


class easy: public level
{
	/******* Datagenerator wil acces a text file and read 500 characters from there.
			 Display() will call datagenerator*****/
};







class medium: public level
{
	/******* Datagenerator will generate 500 random characters belonging to alphanumeric category, randomly form words of length 4 to 10 characters
			 Display() will call datagenerator*****/
};







class difficult: public level
{
	/******* Datagenerator will generate 500 random characters from all possible set of ascii characters
			 Display() will call datagenerator*****/
};
