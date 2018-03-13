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
//void songType(int genreNum, char songType[45]);

int main (){
  int numSongs;

  printf("How many songs are in your playlist?\n");
  scanf("%d", &numSongs);
  int songArray[numSongs][2];
  fillArrays(numSongs, songArray);
  getInfo(numSongs, songArray);

return 0;
}

/*******************************************************************************

//FIXME come back and add descriptions.

*******************************************************************************/
void fillArrays(int howMany, int songs[][2]){
  int genre, songLength, i;

  for (i = 0; i < howMany; i++) {
    printf("Enter information for songs in your playlist..\n");
    printf("1 for rock\n2 for blues\n3 for indie\n4 for rb\n5 for "
    "dance/electronic\n6 for reggae\n7 for country\n8 for r&b\n9 for pop\n\n"
      "\n\n--> ");
    scanf(" %i", &genre);
    songs[i][0] = genre;

    printf("How long is your song in seconds?\n");
    scanf(" %i", &songLength);
    songs[i][1] = songLength;

  }
  for (i = 0; i < howMany; i++){
    printf("%d %d\n", songs[i][0], songs[i][1]);
  }
}

/*******************************************************************************

//FIXME come back and add descriptions.

*******************************************************************************/

void getInfo(int howMany, int songs[][2]){
  int i, min = 900, max = 0, avg = 0, rock = 0, blues = 0, indie = 0, rb = 0,
   dance = 0, reggae = 0, country = 0, rap = 0, pop = 0;

  printf("Your playlist of %d songs had: \n", howMany);
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 1){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      rock++, avg += songs[i][1];
      }
}
  if (rock > 0){
    printf("\tYou had %d rock songs!\n", rock);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / rock) / 60, (avg / rock)
     % 60);
    min = 900, max = 0, avg = 0;
    }

  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 2){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      blues++, avg += songs[i][1];
      }
    }
  if (blues > 0){
    printf("\tYou had %d blues songs, the thrill isn't gone!\n", blues);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / blues) / 60, (avg / blues)
     % 60);
    min = 900, max = 0, avg = 0;
    }

  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 3){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      indie++, avg += songs[i][1];
      }
  }
  if (indie > 0){
    printf("\tYou had %d indie songs!\n", indie);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / indie) / 60, (avg /
      indie) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 4){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      rap++, avg += songs[i][1];
      }
  }
  if (rap > 0){
    printf("\tYou had %d rap songs!\n", rap);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / rap) / 60, (avg /
      rap) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 4){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      dance++, avg += songs[i][1];
      }
  }
  if (dance > 0){
    printf("\tYou had %d dance / electronic songs!\n", dance);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / dance) / 60, (avg /
      dance) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 4){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      reggae++, avg += songs[i][1];
      }
  }
  if (reggae > 0){
    printf("\tYou had %d reggae songs!\n", reggae);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / reggae) / 60, (avg /
      reggae) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 4){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      country++, avg += songs[i][1];
      }
  }
  if (country > 0){
    printf("\tYou had %d country songs!\n", country);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / country) / 60, (avg /
      country) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 4){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      rb++, avg += songs[i][1];
      }
  }
  if (rb > 0){
    printf("\tYou had %d R&B songs!\n", rb);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / rb) / 60, (avg /
      rb) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 4){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      pop++, avg += songs[i][1];
      }
  }
  if (pop > 0){
    printf("\tYou had %d pop songs!\n", pop);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / pop) / 60, (avg /
      pop) % 60);
    min = 900, max = 0, avg = 0;
    }
}

int averageFunction()
