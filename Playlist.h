#ifndef PLAYLIST_H
#define PLAYLIST_H

class Playlist {
  public:
  Playlist();
  Playlist(int);
  void InsertAfter();
  void SetNext(); //Mutator
  string GetID(); //Accessor
  string GetSongName(); //Accessor
  string GetArtistName(); //Accessor
  int GetSongLength(); //Accessor
  int GetNext(); //Accessor
  void PrintPlaylistNode();
  private:
  string uniqueID; //Initialized to "none" in default constructor
  string songName; //Initialized to "none" in default constructor
  string artistName; //Initialized to "none" in default constructor
  int songLength; //Initialized to 0 in default constructor
  PlaylistNode* nextNodePtr; //Initialized to 0 in default constructor
};

#endif
