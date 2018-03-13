/*
--------------------------------------------------------------------------------
    Damion Anderson
    14 March, 2018
    CSPC1010 - Section 002
    Programming Assignment 1
    Estimated time: 10 hours
    Total Time: 8 hours 30 minutes.

    Program Description:
    The purpose of this program is to take input from a user on various
    songs and create a playlist that will tell the user what the average songs
    length, maximum, and minimum for various genres. The output will categorized
    by 9 various genres.

--------------------------------------------------------------------------------
                                                                              */
#include <stdio.h>

int main(void) {

  int row = 0, col = 2, i = row, genre, songLength, j;
  printf("How many songs are in your playlist? ");
  scanf(" %i", &row);

  int songArray[row][col];


  for (i = 0; i < row; i++) {
    printf("Enter information for songs in your playlist..\n");
    printf("1 for rock\n2 for blues\n3 for indie\n4 for rap\n5 for"
    "dance/electronic\n6 for reggae\n7 for country\n8 for r&b\n9 for pop\n\n"
      "\n\n--> ");
    scanf(" %i", &genre);
    songArray[i][0] = genre;

    printf("How long is your song in seconds?\n");
    scanf(" %i", &songLength);
    songArray[i][1] = songLength;

    genre = 0, songLength = 0;

  }
  printf("\n");

  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      printf("%d ", songArray[i][j]);
    }
    printf("\n");
  }

  return 0;
  }
