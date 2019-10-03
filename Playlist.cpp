#include <iostream>
using namespace std;

#include "Playlist.h"

PlaylistNode::Playlist() {
  uniqueID = "none";
  songName = "none";
  artistName = "none";
  songLength = 0;
  nextNodePtr = 0;
}

PlaylistNode::Playlist(string id, string song, string artist, int length) {
  uniqueID = id;
  songName = song;
  artistName = artist;
  songLength = length;
  this->nextNodePtr = 0;
}

void PlaylistNode::InsertAfter(PlaylistNode* addressSetAfter) {
  this->nextNodePtr = addressSetAfter;
  cout << "FUNCTION InsertAfter() NOT COMPLETE" << endl;
}

void PlaylistNode::SetNext(PlaylistNode* toBeNext) {
  this->nextNodePtr = toBeNext;
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
  cout << "FUNCTION PrintPlaylistNode() NOT COMPLETE" << endl;
}

