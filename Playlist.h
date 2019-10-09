#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <iostream>
using namespace std;

class PlaylistNode {
  public:
  PlaylistNode();
  PlaylistNode(string id, string song, string artist, int length);
  void InsertAfter(PlaylistNode* &nextNode);
  void SetNext(PlaylistNode* &toBeNext); //Mutator
  string GetID() const; //Accessor
  string GetSongName() const; //Accessor
  string GetArtistName() const; //Accessor
  int GetSongLength() const; //Accessor
  PlaylistNode* GetNext() const; //Accessor
  void PrintPlaylistNode();
  private:
  string uniqueID; //Initialized to "none" in default constructor
  string songName; //Initialized to "none" in default constructor
  string artistName; //Initialized to "none" in default constructor
  int songLength; //Initialized to 0 in default constructor
  PlaylistNode* nextNodePtr; //Initialized to 0 in default constructor
};

#endif
