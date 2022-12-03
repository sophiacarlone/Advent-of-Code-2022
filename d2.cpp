//Sophia Carlone

//TODO: I do not like how I have to have 9 if statements. Find a way to minimize if statements
//sucks doing stuff quickly takes hold over cool code

#include <iostream>
#include <fstream>

using namespace std;

#define ROCK 1;
#define PAPER 2;
#define SISSCORS 3;
#define LOSS 0;
#define DRAW 3;
#define WIN 6;

int main(){
    int total  = 0;
    char opponent, self;
    ifstream in;
    in.open("day2.txt");

    while(in >> opponent >> self){
        if((opponent == 'A')&&(self == 'X')) total += 3;    
        if((opponent == 'A')&&(self == 'Y')) total += 4;    
        if((opponent == 'A')&&(self == 'Z')) total += 8;    
        if((opponent == 'B')&&(self == 'X')) total += 1;    
        if((opponent == 'B')&&(self == 'Y')) total += 5;    
        if((opponent == 'B')&&(self == 'Z')) total += 9;    
        if((opponent == 'C')&&(self == 'X')) total += 2;    
        if((opponent == 'C')&&(self == 'Y')) total += 6;    
        if((opponent == 'C')&&(self == 'Z')) total += 7;    
    }
    cout << total << endl;
}

/* Part 1
rock rock 4
rock paper 8
rock sisscors 3
paper rock 1
paper paper 5
paper sisscors 9 
sisscors rock 7
sisscors paper 2
sisscors sisscors 6 
*/

/* Part 2 (lose draw win)
rock rock 4 - draw
rock paper 8 - win
rock sisscors 3 - lose
paper rock 1 - lose
paper paper 5 - draw
paper sisscors 9 - win
sisscors rock 7 - win
sisscors paper 2 - lose
sisscors sisscors 6 - draw
*/