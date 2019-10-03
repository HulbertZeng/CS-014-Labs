#include <iostream>
using namespace std;

#include "Playlist.h"

void printMenu(string playlistTitle) {
  char userInput;
  bool isValidInput = true;
  
  while(isValidInput) {
    cout << "JAMZ PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl << endl;
    cout << "Choose an option:" << endl;
    
    cin >> userInput;
    
    if(userInput == 'a') {
    
    } else if(userInput == 'b') {
    
    } else if(userInput == 'c') {
    
    } else if(userInput == 's') {
    
    } else if(userInput == 't') {
    
    } else if(userInput == 'o') {
    
    } else if(userInput == 'q') {
      
    } else {
      isValidInput = false;
    }
  }
}

int main() {
  string playlistTitle;
  
  cout << Enter playlist's title: " << endl;
  cin >> playlistTitle;
  
  printMenu(playlistTitle);
  
  return 0;
}
