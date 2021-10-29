#include <iostream>
#include <string>
using namespace std;
string player1,player2,word,underscore,guess;
int wrong=0;
int main (){
string copy = word;


cout << "----------------------Hello! Welcome to the HANGMAN game!----------  ----------" << endl;
cout << "Please type in your name, PLAYER 1" << endl;
cin >> player1;
cout << "Please type in your name, PLAYER 2" << endl;
cin >> player2;
cout << "OK " << player1 << " and " << player2 << ". Let's start with the    game!" << endl;
cout << player1 << " please input the word you want " << player2 << " to guess." << endl;

cin >> word;

//space
for (int x=0; x<30; x++){
cout << endl;
}

//UNDERSCORE
while (underscore.size() != word.size()){
underscore.push_back('_');}

cout << underscore << endl;

//MAIN WHILE
while(wrong<12){
cin >> guess;

//IF GUESS ISNT LETTER
if(guess.size() > 1){
if(guess==word){
cout << "Thats the right word." << endl;
break;
}
else{
cout << underscore << endl;
cout << "Wrong word try again." << endl;
cout << "Used: " << usedguess << endl;
wrong ++;
}

    }





if(underscore == word){
  cout << "You win!" << endl;
  break;
}



if(wrong==1){
cout << "I" << endl;
}
else if(wrong==2){
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==3){
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==4){
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==5){
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==6){
cout << "I===" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==7){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==8){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I  |" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==9){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==10){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|-" << endl;
cout << "I" << endl;
cout << "I" << endl;
}
else if(wrong==11){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|-" << endl;
cout << "I /"  << endl;
cout << "I" << endl;
}
else if(wrong==12){
cout << "I===" << endl;
cout << "I  O" << endl;
cout << "I -|-" << endl;
cout << "I / /"<< endl;
cout << "I YOU ARE DEAD" << endl;

cout << "Game over bro! The word was: " << word <<endl;
break;
}
}
}
