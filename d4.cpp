//Sophia Carlone

#include <iostream>
#include <fstream>

using namespace std;

bool range(int x, int min, int max){
    return((x >= min) && ( x <= max));   
}

int main(){
    int total = 0;
    string line = "";
    string elf1, elf2;
    int comma = 0;
    int elf1_min, elf1_max, elf2_min, elf2_max;
    int dash;

    ifstream in;
    in.open("day4.txt");
    while(getline(in, line)){
        comma = line.find(',');
        elf1 = line.substr(0, comma);
        elf2 = line.substr(comma + 1);

        dash = elf1.find('-');
        elf1_min = stoi(elf1.substr(0, dash));
        elf1_max = stoi(elf1.substr(dash + 1));
        dash = elf2.find('-');
        elf2_min = stoi(elf2.substr(0, dash));
        elf2_max = stoi(elf2.substr(dash + 1));

        if(range(elf1_min, elf2_min, elf2_max)) total++;
        else if(range(elf1_max, elf2_min, elf2_max)) total++;
        else if (range(elf2_min, elf1_min, elf1_max)) total++;
        else if(range(elf2_max, elf1_min, elf1_max)) total++;
    }

    in.close();
    cout << total << endl;
}