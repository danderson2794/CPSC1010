/*
--------------------------------------------------------------------------------
    Damion Anderson
    19 February, 2018
    CSPC1010 - Section 002
    Programming Assignment 1
    Estimated Time: 10 hours
    Total time: 2 hours 30 minutes

    Program Description:
    The purpose of this program is to take input from a user on various
    songs and create a playlist that will tell the user what the average songs
    length, maximum, and minimum for various genres. The output will categorized
    by 9 various genres.

--------------------------------------------------------------------------------
                                                                              */
#include <stdio.h>

int main() {

float songValue, songCount, rockTotal, rockAvg, rockNumTracks, rockLongest,
    rockShortest;

//Takes the initial values based on user input.
printf("Enter information for songs in your playlist..\n");
printf("1 for rock\n2 for blues\n3 for indie\n4 for rap\n5 for dance/electronic"
      "\n6 for reggae\n7 for country\n8 for r&b\n9 for pop\n\n"
    "\n\n--> ");
scanf(" %c", &songValue);
songCount++; //songCount will increment + 1 each time songValue is used

//Created int's for individual song lengths. Maximum int's supported is 10.
int rock, blues, indie, rap, dance, reggae, country, rb, pop;

switch (songValue) {
  case '1':
    printf("How long is the song in seconds? ");
    scanf(" %i", &rock);
    rockTotal = rock;
    rockLongest = rock;
    rockShortest = rock;
    rockNumTracks += 1;
    break;
  case '2':
    printf("How long is the song in seconds? ");
    scanf(" %i", &blues);
    break;
  case '3':
    printf("How long is the song in seconds? ");
    scanf(" %i", &indie);
    break;
  case '4':
    printf("How long is the song in seconds? ");
    scanf(" %i", &rap);
    break;
  case '5':
    printf("How long is the song in seconds? ");
    scanf(" %i", &dance);
    break;
  case '6':
    printf("How long is the song in seconds? ");
    scanf(" %i", &reggae);
    break;
  case '7':
    printf("How long is the song in seconds? ");
    scanf(" %i", &country);
    break;
  case '8':
    printf("How long is the song in seconds? ");
    scanf(" %i", &rb);
    break;
  case '9':
    printf("How long is the song in seconds? ");
    scanf(" %i", &pop);
    break;
}

//int i will only be used for the loop.
int i;
printf("Do you have another song? (1 for yes, 0 for no)\n");
scanf(" %i\n", &i);
int rock1, blues1;
//trying to figure out how to store data in while without array
while (i > 0) {
  printf("\n1 for rock \n2 for blues \n3 for indie \n4 for rap \n5 for "
  "dance/electronic \n6 for reggae \n7 for country \n8 for r&b \n9 for pop"
      "\n\n--> ");
  scanf("%c", &songValue);
  printf("How long is the song in seconds?\n");

  songCount++; //songCount continues to increment after songValue is used.

if (songValue == 1) {
  scanf(" %x\n", rock1);
  rockTotal += rock1;
  rockNumTracks += 1;
  rockAvg = rockTotal / rockNumTracks;

}
else if (songValue == 2){
  scanf(" %i\n", blues1);
}

else{
  printf("You entered an invalid genre.\n");
}
  printf("Do you have another song? (1 for yes, 0 for no)\n");
  scanf(" %i", &i);

}

printf("The Song Count was %i \n", songCount);
printf("Total Rock Length was: %x\n", rockTotal);
printf("Rock average was: %x\n", rockAvg);
printf("Total Rock tracks was: %i\n", rockNumTracks);

  return 0;
}
