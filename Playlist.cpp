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
