#include <iostream>
using namespace std;

#include "Playlist.h"

Playlist::Playlist() {
  uniqueID = "";
  songName = "";
  artistName = "";
  songLength = 0;
  nextNodePtr = 0;
}

void Playlist::InsertAfter() {
  cout << "FUNCTION InsertAfter() NOT COMPLETE" << endl;
}

void Playlist::SetNext() {
  cout << "FUNCTION SetNext() NOT COMPLETE" << endl;
}

string Playlist::GetID() {
  return uniqueID;
}

string Playlist::GetSongName() {
  return songName;
}

