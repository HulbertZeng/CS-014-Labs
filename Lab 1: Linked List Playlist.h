#ifndef PLAYLIST_H
#define PLAYLIST_H

class Playlist {
  Playlist();
  Playlist(int);
  public:
  InsertAfter();
  SetNext(); //Mutator
  GetID(); //Accessor
  GetSongName(); //Accessor
  GetArtistName(); //Accessor
  GetSongLength(); //Accessor
  GetNext(); //Accessor
  PrintPlaylistNode();
  private:
  string uniqueID; //Initialized to "none" in default constructor
  string songName; //Initialized to "none" in default constructor
  string artistName; //Initialized to "none" in default constructor
  int songLength; //Initialized to 0 in default constructor
  PlaylistNode* nextNodePtr; //Initialized to 0 in default constructor
};
