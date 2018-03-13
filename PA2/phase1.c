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
    by 9 various genres and split between three functions.

--------------------------------------------------------------------------------
*/

#include <stdio.h>

void fillArrays(int howMany, int songs[][2]);
void getInfo(int howMany, int songs[][2]);
void songType(int genreNum, char songType[45]);

int main (){
  int array, musicStyle, something; //FIXME something


return 0;
}

/*******************************************************************************

//FIXME come back and add descriptions.

*******************************************************************************/
void fillArrays(int howMany, int songs[][2]){
  int genre, songLength, i, j;

  printf("How many songs are in your playlist? ");
  scanf(" %i", &howMany);

  int songArray[howMany][2];


  for (i = 0; i < howMany; i++) {
    printf("Enter information for songs in your playlist..\n");
    printf("1 for rock\n2 for blues\n3 for indie\n4 for rap\n5 for "
    "dance/electronic\n6 for reggae\n7 for country\n8 for r&b\n9 for pop\n\n"
      "\n\n--> ");
    scanf(" %i", &genre);
    songArray[i][0] = genre;

    printf("How long is your song in seconds?\n");
    scanf(" %i", &songLength);
    songArray[i][1] = songLength;

  }
}

/*******************************************************************************

//FIXME come back and add descriptions.

*******************************************************************************/

void getInfo(int howMany, int songs[][2]){

  int rockMin = 900, rockMax = 0, bluesMin = 900, bluesMax = 0, indieMin = 900,
   indieMax = 0, rapMin = 900, rapMax = 0, danceMin = 900, danceMax = 0,
   reggaeMin = 900, reggaeMax = 0, countryMin = 900, rockSongs = 0,
   countryMax = 0, rbMin = 900, rbMax = 0, popMin = 900, popMax = 0,
   bluesSongs = 0, indieSongs = 0, rapSongs = 0, danceSongs = 0, popSongs = 0,
   countrySongs = 0, rbSongs = 0,reggaeSongs = 0, rockAvg = 0, bluesAvg = 0,
   indieAvg = 0, rapAvg = 0, danceAvg = 0, reggaeAvg = 0, countryAvg = 0,
   popAvg = 0, rbAvg = 0, i;

  int songArray[howMany][2];

  for (i = 0; i < howMany; i++){
    //Rock Calculations
    if (songArray[i][0] == 1) {
      ++rockSongs;
      rockAvg += songArray[i][1];
      if (songArray[i][1] < rockMin)
        rockMin = songArray[i][1];
      if (songArray[i][1] > rockMax)
        rockMax = songArray[i][1];
    }
    //Blues Calculations
    if (songArray[i][0] == 2) {
      ++bluesSongs, bluesAvg += songArray[i][1];
      if (songArray[i][1] < bluesMin)
        bluesMin = songArray[i][1];
      if (songArray[i][1] > bluesMax)
        bluesMax = songArray[i][1];
    }
    //Indie Calculations
    if (songArray[i][0] == 3) {
      ++indieSongs, indieAvg += songArray[i][1];
      if (songArray[i][1] < indieMin)
        indieMin = songArray[i][1];
      if (songArray[i][1] > indieMax)
        indieMax = songArray[i][1];
    }
    //Rap Calculations
    if (songArray[i][0] == 4) {
      ++rapSongs, rapAvg += songArray[i][1];
      if (songArray[i][1] < rapMin)
        rapMin = songArray[i][1];
      if (songArray[i][1] > rapMax)
        rapMax = songArray[i][1];
    }
    //Dance / Electronic Calculations
    if (songArray[i][0] == 5) {
      ++danceSongs, danceAvg += songArray[i][1];
      if (songArray[i][1] < danceMin)
        danceMin = songArray[i][1];
      if (songArray[i][1] > danceMax)
        danceMax = songArray[i][1];
    }
    if (songArray[i][0] == 6) {
      ++reggaeSongs, reggaeAvg += songArray[i][1];
      if (songArray[i][1] < reggaeMin)
        reggaeMin = songArray[i][1];
      if (songArray[i][1] > reggaeMax)
        reggaeMax = songArray[i][1];
    }
    if (songArray[i][0] == 7) {
      ++countrySongs, countryAvg += songArray[i][1];
      if (songArray[i][1] < countryMin)
        countryMin = songArray[i][1];
      if (songArray[i][1] > countryMax)
        countryMax = songArray[i][1];
    }
    if (songArray[i][0] == 7) {
      ++rbSongs, rbAvg += songArray[i][1];
      if (songArray[i][1] < rbMin)
        rbMin = songArray[i][1];
      if (songArray[i][1] > rbMax)
        rbMax = songArray[i][1];
    }
    if (songArray[i][0] == 7) {
      ++popSongs, popAvg += songArray[i][1];
      if (songArray[i][1] < popMin)
        popMin = songArray[i][1];
      if (songArray[i][1] > popMax)
        popMax = songArray[i][1];
    }
  }
  //End of algorithm. This portion prints results.
void songType(int genreNum, char songType[45]){

  printf("Your playlist of %d songs has:\n", howMany);

  if (rockSongs > 0){
    printf("\t%d rock songs, Rock on!\n", rockSongs);
    printf("\t\tShortest was %d:%.2d. You definitely do not listen to Prog..\n",
      rockMin / 60, rockMin % 60);
    printf("\t\tLongest was %d:%.2d.\n", rockMax / 60, rockMax % 60);
    printf("\t\tAverage length was %d:%.2d.\n\n", (rockAvg / rockSongs)/ 60,
    (rockAvg / rockSongs) % 60);
  }

  if (bluesSongs > 0){
    printf("\t%d blues songs, the thrill isn't gone!\n", bluesSongs);
    printf("\t\tShortest was %d:%.2d.\n", bluesMin / 60, bluesMin % 60);
    printf("\t\tLongest was %d:%.2d.\n", bluesMax / 60, bluesMax % 60);
    printf("\t\tAverage length was %d:%.2d.\n\n", (bluesAvg / bluesSongs)/ 60,
    (bluesAvg / bluesSongs) % 60);
  }

  if (indieSongs > 0){
    printf("\t%d indie songs!\n", indieSongs);
    printf("\t\tShortest was %d:%.2d.\n", indieMin / 60, indieMin % 60);
    printf("\t\tLongest was %d:%.2d.\n", indieMax / 60, indieMax % 60);
    printf("\t\tAverage length was %d:%.2d.\n\n", (indieAvg / indieSongs)/ 60,
    (indieAvg / indieSongs) % 60);
  }

  if (rapSongs > 0){
    printf("\t%d rap songs!\n", rapSongs);
    printf("\t\tShortest was %d:%.2d.\n", rapMin / 60, rapMin % 60);
    printf("\t\tLongest was %d:%.2d.\n", rapMax / 60, rapMax % 60);
    printf("\t\tAverage length was %d:%.2d.\n\n", (rapAvg / rapSongs)/ 60,
    (rapAvg / rapSongs) % 60);
    }

  if (danceSongs > 0){
    printf("\t%d dance / electronic songs!\n", danceSongs);
    printf("\t\tShortest was %d:%.2d.\n", danceMin / 60, danceMin % 60);
    printf("\t\tLongest was %d:%.2d.\n", danceMax / 60, danceMax % 60);
    printf("\t\tAverage length was %d:%.2d.\n\n", (danceAvg / danceSongs)/ 60,
    (danceAvg / danceSongs) % 60);
    }

  if (reggaeSongs > 0){
    printf("\t%d reggae songs! You should check out the song Good Vibes by"
        "Rebelution.\n", reggaeSongs);
    printf("\t\tShortest was %d:%.2d.\n", reggaeMin / 60, reggaeMin % 60);
    printf("\t\tLongest was %d:%.2d.\n", reggaeMax / 60, reggaeMax % 60);
    printf("\t\tAverage length was %d:%.2d.\n\n", (reggaeAvg / reggaeSongs)/ 60,
    (reggaeAvg / reggaeSongs) % 60);
    }

  if (countrySongs > 0){
    printf("\t%d country songs.\n", countrySongs);
    printf("\t\tShortest was %d:%.2d.\n", countryMin / 60, countryMin % 60);
    printf("\t\tLongest was %d:%.2d.\n", countryMax / 60, countryMax % 60);
    printf("\t\tAverage length was %d:%.2d.\n\n", (countryAvg / countrySongs)/ 60,
    (countryAvg / countrySongs) % 60);
    }

  if (rbSongs > 0){
    printf("\t%d R&B songs.\n", rbSongs);
    printf("\t\tShortest was %d:%.2d.\n", rbMin / 60, rbMin % 60);
    printf("\t\tLongest was %d:%.2d.\n", rbMax / 60, rbMax % 60);
    printf("\t\tAverage length was %d:%.2d.\n\n", (rbAvg / rbSongs)/ 60,
    (rbAvg / rbSongs) % 60);
    }

  if (popSongs > 0){
    printf("\t%d pop songs.\n", popSongs);
    printf("\t\tShortest was %d:%.2d.\n", popMin / 60, popMin % 60);
    printf("\t\tLongest was %d:%.2d.\n", popMax / 60, popMax % 60);
    printf("\t\tAverage length was %d:%.2d.\n\n", (popAvg / popSongs)/ 60,
    (popAvg / popSongs) % 60);
    }
  }
