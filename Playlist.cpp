#include <iostream>
using namespace std;

#include "Playlist.h"

Playlist::Playlist() {
  uniqueID = "none";
  songName = "none";
  artistName = "none";
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

string Playlist::GetArtistName() {
  return artistName;
}

int Playlist::GetSongLength() {
  return songLength;
}

int Playlist::GetNext() {
  cout << "FUNCTION GetNext() NOT COMPETE" << endl;
  return 1;
}

void Playlist::PrintPlaylistNode() {
  cout << "FUNCTION PrintPlaylistNode NOT COMPLETE" << endl;
}









