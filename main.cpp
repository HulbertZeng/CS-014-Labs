#include <iostream>
using namespace std;

#include "Playlist.h"

void printMenu(string);
void addSong();
void removeSong();
void changePosition();
void outputArtist();
void outputTotalTime();
void outputFull();

int main() {
  string playlistTitle;
  
  cout << Enter playlist's title: " << endl;
  cin >> playlistTitle;
  
  printMenu(playlistTitle);
  
  return 0;
}
e
void printMenu(string playlistTitle) {
  char userInput;
  
  while(userInput != 'q') {
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
    
    PlaylistNode* headNode = nullptr;
    PlaylistNode* tailNode = nullptr;
    
    if(userInput == 'a') {
      addSong();
    } else if(userInput == 'b') {
      removeSong();
    } else if(userInput == 'c') {
      changePosition();
    } else if(userInput == 's') {
      outputArtist();
    } else if(userInput == 't') {
      outputTotalTime();
    } else if(userInput == 'o') {
      outputFull();
    }
  }
  return;
}

void addSong() {
  string id;
  string song;
  string artist;
  int length;
  
  cout << "ADD SONG" << endl;
  cout << "Enter song's unique ID:" << endl;
  cin >> id;
  cout << "Enter song's name:" << endl;
  cin >> song;
  cout << "Enter artist's name:" << endl;
  cin >> artist;
  cout << "Enter song's length (in seconds):" << endl;
  cin >> length;
  
  PlaylistNode newNode(id, song, artist, length);
  
}

void removeSong() {}

void changePosition() {}

void outputArtist() {}

void outputTotalTime() {}

void outputFull() {}
