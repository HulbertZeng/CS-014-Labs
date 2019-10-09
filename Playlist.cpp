#include <cstddef>
#include <iostream>
using namespace std;

#include "Playlist.h"

PlaylistNode::PlaylistNode() {
    uniqueID = "none";
    songName = "none";
    artistName = "none";
    songLength = 0;
    this->nextNodePtr = nullptr;
}

PlaylistNode::PlaylistNode(string id, string song, string artist, int length) {
    uniqueID = id;
    songName = song;
    artistName = artist;
    songLength = length;
    this->nextNodePtr = nullptr;
}

void PlaylistNode::InsertAfter(PlaylistNode* &nextNode) {
    if(this == nullptr) {
        PlaylistNode* sub = nullptr;
        sub = this;
        sub = nextNode;
    } else {
        PlaylistNode* currNode = nullptr;
        currNode = this;

        while(currNode->GetNext() != nullptr) {
            currNode = currNode->GetNext();
        }
        currNode->SetNext(nextNode);
    }
}

void PlaylistNode::SetNext(PlaylistNode* &toBeNext) {
    nextNodePtr = toBeNext;
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
    cout << "Unique ID: " << GetID() << endl;
    cout << "Song Name: " << GetSongName() << endl;
    cout << "Artist Name: " << GetArtistName() << endl;
    cout << "Song Length (in seconds): " << GetSongLength() << endl;
}
