#include <cstddef>
#include <iostream>
using namespace std;

#include "Playlist.h"

void printMenu(string);
void addSong(PlaylistNode* &head, PlaylistNode* &tail);
void removeSong(PlaylistNode* &head, PlaylistNode* &tail);
void changePosition(PlaylistNode* &head, PlaylistNode* &tail);
void outputArtist(PlaylistNode* &head, PlaylistNode* &tail);
void outputTotalTime(PlaylistNode* &head, PlaylistNode* &tail);
void outputFull(PlaylistNode* &head, PlaylistNode* &tail, string);

int main() {
  string playlistTitle;
  
  cout << "Enter playlist's title:" << endl;
  getline(cin, playlistTitle);
  
  printMenu(playlistTitle);
  
  return 0;
}

void printMenu(string playlistTitle) {
  char userInput;
  PlaylistNode* headNode = new PlaylistNode;
  headNode = nullptr;
  PlaylistNode* tailNode = new PlaylistNode;
  tailNode = nullptr;
  
  while(userInput != 'q') {
    cout << endl << playlistTitle << " PLAYLIST MENU" << endl;
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
      addSong(headNode, tailNode);
    } else if(userInput == 'd') {
      removeSong(headNode, tailNode);
    } else if(userInput == 'c') {
      changePosition(headNode, tailNode);
    } else if(userInput == 's') {
      outputArtist(headNode, tailNode);
    } else if(userInput == 't') {
      outputTotalTime(headNode, tailNode);
    } else if(userInput == 'o') {
      outputFull(headNode, tailNode, playlistTitle);
    }
  }
  return;
}

void addSong(PlaylistNode* &head, PlaylistNode* &tail) {
  string id;
  string song;
  string artist;
  int length;
  
  cout << "ADD SONG" << endl;
  cout << "Enter song's unique ID:" << endl;
  cin >> id;
  cin.ignore();
  cout << "Enter song's name:" << endl;
  getline(cin, song);
  cout << "Enter artist's name:" << endl;
  getline(cin, artist);
  cout << "Enter song's length (in seconds):" << endl;
  cin >> length;
  
  PlaylistNode* newNode = new PlaylistNode(id, song, artist, length);

  if(head == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    tail->SetNext(newNode);
    tail = newNode;
  }
  //head->InsertAfter(newNode);
}
void removeSong(PlaylistNode* &head, PlaylistNode* &tail) {
  string removeID;
  PlaylistNode* currNode = nullptr;
  PlaylistNode* tempNode = nullptr;
  PlaylistNode* sub = nullptr;

  cout << "REMOVE SONG" << endl;
  cout << "Enter song's unique ID:" << endl;
  cin >> removeID;
  currNode = head;
  tempNode = head;
  sub = head;

  if(head != tail){
    while(currNode->GetID() != removeID) {
      currNode = currNode->GetNext();
    }
    while(tempNode->GetNext() != currNode) {
      tempNode = tempNode->GetNext();
    }
    sub = currNode->GetNext();
    tempNode->SetNext(sub);
    
    cout << "\"" << currNode->GetSongName() << "\" removed." << endl;
    delete currNode;
  } else {
    cout << "\"" << currNode->GetSongName() << "\" removed." << endl;
    head = nullptr;
    tail = nullptr;
  }
}

void changePosition(PlaylistNode* &head, PlaylistNode* &tail) {
  int currPosition;
  int newPosition;
  PlaylistNode* currNode = nullptr;
  PlaylistNode* finalNode = nullptr;
  PlaylistNode* sub = nullptr;

  currNode = head;
  finalNode = head;

  cout << "CHANGE POSITION OF SONG" << endl;
  cout << "Enter song's current position:" << endl;
  cin >> currPosition;
  cout << "Enter new position for song:" << endl;
  cin >> newPosition;

  if(currPosition == 1) {
    head = head->GetNext();
  } else if(currPosition == 2) {
    currNode = head->GetNext();
    head = currNode->GetNext();
  } else {
    PlaylistNode* tempNode = nullptr;
    tempNode = head;

    for(int i = 0; i < currPosition - 2; ++i) {
      tempNode = tempNode->GetNext();
    }
    currNode = tempNode->GetNext();
    sub = currNode->GetNext();
    tempNode->SetNext(sub);
  }

  for(int i = 0; i < newPosition - 1; ++i) {
    finalNode = finalNode->GetNext();
  }
  
  sub = finalNode->GetNext();
  currNode->SetNext(sub);
  finalNode->SetNext(currNode);

  cout << "\"" << currNode->GetSongName() << "\" moved to position " << newPosition << endl;
  //needs more testing
}

void outputArtist(PlaylistNode* &head, PlaylistNode* &tail) {
  PlaylistNode* currNode = nullptr;
  currNode = head;
  string artistName;
  int num = 1;

  cin.ignore();
  cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
  cout << "Enter artist's name:" << endl;
  getline(cin, artistName);

  while(currNode->GetNext() != tail) {
    if(currNode->GetArtistName() == artistName) {
      cout << num << "." << endl;
      currNode->PrintPlaylistNode();
      currNode = currNode->GetNext();
    }
    ++num;
    cout << num << "." << endl;
    currNode->PrintPlaylistNode();
  }
}

void outputTotalTime(PlaylistNode* &head, PlaylistNode* &tail) {
  int sumSec = 0;
  PlaylistNode* currNode = nullptr;
  currNode = head;

  cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;

  if(head != nullptr) {
    while(currNode->GetNext() != nullptr) {
      sumSec += currNode->GetSongLength();
      currNode = currNode->GetNext();
    }
    sumSec += currNode->GetSongLength();
  }
  
  cout << "Total time: " << sumSec << " seconds" << endl;
}

void outputFull(PlaylistNode* &head, PlaylistNode* &tail, string playlistTitle) {
  cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
  if(head != nullptr) {
    PlaylistNode* currNode = nullptr;
    currNode = head;
    int num = 1;
    
    while(currNode != tail) {
      cout << num << "." << endl;
      ++num;
      currNode->PrintPlaylistNode();
      cout << endl;
      currNode = currNode->GetNext();
    }
    cout << num << "." << endl;
    currNode->PrintPlaylistNode();
    
  } else {
      cout << "Playlist is empty" << endl;
  }
}
