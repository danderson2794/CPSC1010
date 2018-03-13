/*
--------------------------------------------------------------------------------
    Damion Anderson
    14 March, 2018
    CSPC1010 - Section 002
    Programming Assignment 1

    Program Description:
    The purpose of this program is to take input from a user on various
    songs and create a playlist that will tell the user what the average songs
    length, maximum, and minimum for various genres. The output will categorized
    by 9 various genres.

--------------------------------------------------------------------------------
*/

#include <stdio.h>
int main (){
  int howMany, i, genre, songLength, j;
  printf("How many songs are in your playlist? ");
  scanf(" %i", &howMany);

  int songArray[howMany][2];


  for (i = 0; i < howMany; i++) {
    printf("Enter information for songs in your playlist..\n");
    printf("1 for rock\n2 for blues\n3 for indie\n4 for rap\n5 for"
    "dance/electronic\n6 for reggae\n7 for country\n8 for r&b\n9 for pop\n\n"
      "\n\n--> ");
    scanf(" %i", &genre);
    songArray[i][0] = genre;

    printf("How long is your song in seconds?\n");
    scanf(" %i", &songLength);
    songArray[i][1] = songLength;

  }
  printf("\n");

  for (i = 0; i < howMany; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", songArray[i][j]);
    }
    printf("\n");
  }


  return 0;
}
