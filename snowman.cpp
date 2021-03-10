#include <iostream>
#include <string>
#include <array>
#include "snowman.hpp"

namespace ariel{
const int userMin=11111111;
const int userMax=44444444;
const int one = 1;
const int two = 2;
const int three = 3;
const int four = 4;
const int five = 5;
const int six = 6;
const int seven = 7;
const int eight = 8;
const int nine = 9;
const int ten = 10;


string snowman(int userInput)
{
    if(userInput<userMin || userInput>userMax)
    {
        throw invalid_argument("not a valid input!");
        return "";
    }
    std :: array <int,eight> userChoise;
    int temp=0;
    int temp2=0;
    for (int i = 0; i < eight; i++)
    {
        temp = userInput%ten;
        if(temp<1||temp>4)
        {
            throw invalid_argument("not a valid input!");
        }
        userChoise.at(seven-i)= temp;
        temp2=userInput/ten;
        userInput=temp2;
    }
    
    std::array<string, four>Hat = { "_===_", " ___\n.....","  _  \n /_\\ ", " ___ \n(_*_)" };
    std::array<string, four>Nose = { ",", ".","_", " " };
    std::array<string, 4>Eye = { ".", "o","O", "-" };
    std::array<string, 4>Lup = { " ", "\\"," ", "" }; //if space
    std::array<string, 4>Ldn = { "'<'", " ","'/'", "" };
    std::array<string, 
    4>Rup = { " ", "'/'"," ", " " };
    std::array<string, 4>Rdn = { ">", " ","\\", " " };
    std::array<string, 4>Torso = { " : ", "] [",">" " <", "   " };
    std::array<string, 4>Base = { " : ", "'" " '","___", "   " };
    std::array<string, ten> SnowParts;
    SnowParts [0] = Hat[userChoise[0]-1];
    SnowParts [one] = Nose[userChoise[1]-1];
    SnowParts [two] = Eye[userChoise[2]-1];
    SnowParts [three] = Eye[userChoise[3]-1];
    SnowParts [four] = Lup[userChoise[four]-one]; //for Lup
    SnowParts [five] = Ldn[userChoise[four]-one];//for Ldn
    SnowParts [six] = Rup[userChoise[five]-one];// for Rup
    SnowParts [seven] = Rdn[userChoise[five]-one];// for Rdn
    SnowParts [eight] = Torso[userChoise[six]-one];
    SnowParts [nine] = Base[userChoise[seven]-one];
    std::array<string, four> lines;
    lines[0]=SnowParts[0];
    lines[1]=SnowParts[four]+"("+SnowParts[2]+SnowParts[1]+SnowParts[3]+")"+SnowParts[6];
    lines[2]=SnowParts[five]+"("+SnowParts[eight]+")"+SnowParts[seven];
    lines[3]="("+SnowParts[nine]+")";
    std :: string ans;
    for (int i = 0; i < 4; i++)
        {
            ans = ans+lines[i]+"\n"; 
        }
    return ans;
}
};
