/**
    091044005HW02.cpp

    Here is the simple definition of my algorithmto understand my code easily
    first of all normally my algorithm works with all number
    i worked as number array entered by user
    and it start from one and the difference of all of it just one
    and it seems elements number off an array isnt it
    my algorithm calculate which number of array should put
    and i updated it to char array
    and our char array size always 1225 here cause of some discriction
    Which line and whic element of this line to put,my algorithm calculate it
    and in some for loops i use it with char array


**/



#include <iostream>

#define ARRSIZE 1225
#define ARRSIZEROOT 35
#define GENERALRATE 8
#define LEFTRATE 5
#define RIGHTRATE 9

using namespace std;

int main()
{
    char stringThatEnteredFromUser[ARRSIZE];

    for(int i=0;i<ARRSIZE;++i)  //fill all elements with space
    stringThatEnteredFromUser[i]=' ';

    //asking string
    cout<<"enter a string \nthat is not include whitespace character \nalso shorter than 1225 character \nto make it spiral"<<endl<<endl;
    cin>>stringThatEnteredFromUser;
    cout<<stringThatEnteredFromUser;

    //variables for calculating that done for algorithm after program
	int numThatEnteredFromUser=ARRSIZEROOT;
	int numThatModified=0;
	int part1=0,part2=0;
	int breakPointNum=0;
	int startNum=0;
	int i1=0,i2=0,i3=0,i4=0;
	int i5,i6,i7,i8;
    int numForUse;


    //calculating part,seperatin two part
	numThatModified=numThatEnteredFromUser*numThatEnteredFromUser;
	part1=(numThatEnteredFromUser+1)/2;
	part2=(numThatEnteredFromUser-1)/2;
	startNum=(numThatEnteredFromUser*numThatEnteredFromUser)-numThatEnteredFromUser;

    int difference,counter1=0;

    //first part
    for(i1=0;i1<part1;++i1,--startNum)
    {
        numForUse=startNum;

        if(!(i1==0 || i1==1))
        {
           counter1=counter1+1;
        }

            cout<<stringThatEnteredFromUser[numForUse];

        //left side
        for(i2=0;i2<i1;++i2)
        {
            numForUse=numForUse-( LEFTRATE + GENERALRATE*(part1-i2-2) );

            cout<<stringThatEnteredFromUser[numForUse];
        }

        //middle side
        for(i3=i2;i3<(numThatEnteredFromUser-counter1)-1;++i3)
        {
            ++numForUse;
            cout<<stringThatEnteredFromUser[numForUse];
        }

        //right side
        for(i4=counter1;i4>0;--i4)
        {
            numForUse=numForUse+(RIGHTRATE + GENERALRATE*(part1-i4-2));
            cout<<stringThatEnteredFromUser[numForUse];
        }
        cout<<endl;
    }

    //second part
    for(i5=part2;i5>0;--i5,--startNum)
    {
        numForUse=startNum;

        //left side
        for(difference=0,i6=i5-1;i6>0;--i6,++difference)
        {
            cout<<stringThatEnteredFromUser[numForUse];
            numForUse=numForUse-(LEFTRATE+(part2-difference-1)*GENERALRATE);
        }

        //middle side
        for(i7=(numThatEnteredFromUser-2*i5+1);i7>0;--i7)
        {
            cout<<stringThatEnteredFromUser[numForUse];
            --numForUse;
        }

        //right side
        for(i8=i5-1;i8>=0;--i8)
        {
            cout<<stringThatEnteredFromUser[numForUse];
            numForUse=numForUse+RIGHTRATE+(part1-i8-2)*GENERALRATE;
        }
        cout<<endl;
    }

    return 0;
}
