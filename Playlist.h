#ifndef PLAYLIST_H
#define PLAYLIST_H

class PlaylistNode {
  public:
  Playlist();
  Playlist(string, string, string, int, int);
  void InsertAfter(PlaylistNode*);
  void SetNext(PlaylistNode*); //Mutator
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
