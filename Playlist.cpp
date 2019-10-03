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

void PlaylistNode::InsertAfter() {
  cout << "FUNCTION InsertAfter() NOT COMPLETE" << endl;
}

void PlaylistNode::SetNext() {
  cout << "FUNCTION SetNext() NOT COMPLETE" << endl;
}

string PlaylistNode::GetID() const{
  return uniqueID;
}

string PlaylistNode::GetSongName() const{
  return songName;
}

string PlaylistNode::GetArtistName() const{
  return artistName;
}

int PlaylistNode::GetSongLength() const{
  return songLength;
}

PlaylistNode* PlaylistNode::GetNext() const{
  return this->nextNodePtr;
}

void PlaylistNode::PrintPlaylistNode() {
  cout << "FUNCTION PrintPlaylistNode NOT COMPLETE" << endl;
}









