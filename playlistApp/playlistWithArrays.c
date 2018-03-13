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

    /*  Had to initialize all values, else you'd get random outputs that didn't
        make sense. Also, the short tracks needed to be initialized to an extreme
        value for the shortest song algorithm to work. */
    int songValue = 0, songCount = 0, songLength = 0, rockTotal = 0, rockAvg = 0, rockNumTracks = 0,rockLong = 0,rockShort = 9000, bluesTotal = 0, bluesAvg = 0,bluesNumTracks = 0, bluesLong = 0, bluesShort = 9000,indieTotal = 0, indieAvg = 0, indieNumTracks = 0, indieLong = 0, indieShort = 9000, rapTotal = 0, rapAvg = 0, rapNumTracks = 0, rapLong = 0, rapShort = 9000,danceTotal = 0, danceAvg = 0,danceNumTracks = 0, danceLong = 0,danceShort = 9000, reggaeTotal = 0, reggaeAvg = 0,reggaeNumTracks = 0,reggaeLong = 0, reggaeShort = 9000, countryTotal = 0, countryAvg = 0,countryNumTracks = 0, countryLong = 0, countryShort = 9000, rbTotal = 0,rbAvg = 0, rbNumTracks = 0, rbLong = 0, rbShort = 9000, popTotal = 0,popAvg = 0, popNumTracks = 0, popLong = 0, popShort = 9000;

    int numSongsTotal;
    printf("How many songs are in your playlist? ");
    scanf(" %i", &numSongsTotal);
    int songArray[numSongsTotal][numSongsTotal]; 


    while (numSongsTotal >= 1) {
    printf("Enter information for songs in your playlist..\n");
    printf("1 for rock\n2 for blues\n3 for indie\n4 for rap\n5 for dance/electronic"
        "\n6 for reggae\n7 for country\n8 for r&b\n9 for pop\n\n"
        "\n\n--> ");
scanf(" %i", &songValue);
    songCount++; //To be used at the end of the program.

    printf("How long is your song in seconds?\n");
scanf("%i", &songLength);
int i = 0;



numSongsTotal--;

} 


  return 0;
}
