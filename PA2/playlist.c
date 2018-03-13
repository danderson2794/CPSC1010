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
#include <string.h>


void fillArrays(int howMany, int songs[][2]);
void getInfo(int howMany, int songs[][2]);
void getSongType(int genreNum, char songType[45]);

int main (){
  int numSongs; //guide has 2 more local variables.

  printf("How many songs are in your playlist?\n");
  scanf("%d", &numSongs);
  int songArray[numSongs][2];

  fillArrays(numSongs, songArray);
  getInfo(numSongs, songArray);
  return 0;
}

/*******************************************************************************

This function fills the arrays using input from the User.

*******************************************************************************/
void fillArrays(int howMany, int songs[][2]){
  int genre, songLength, i;

  for (i = 0; i < howMany; i++) {
    printf("Enter information for songs in your playlist..\n");
    printf("1 for rock\n2 for blues\n3 for indie\n4 for rap\n5 for "
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

This funciton takes the user's input from function fillArrays and finds the
average, shortest, and longest song. It also tells how many songs are in each
genre.

*******************************************************************************/
void getInfo(int howMany, int songs[][2]){
  int i, min = 900, max = 0, avg = 0, rock = 0, blues = 0, indie = 0, rb = 0,
   dance = 0, reggae = 0, country = 0, rap = 0, pop = 0;
 char string[45];

  printf("Your playlist of %d songs had: \n\n", howMany);
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
    getSongType(1, string);
    printf("\tYou had %d %s songs!\n", rock, string);// replace the genre
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
    getSongType(2, string);
    printf("\tYou had %d %s songs, the thrill isn't gone!\n", blues, string);
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
    getSongType(3, string);
    printf("\tYou had %d %s songs!\n", indie, string);
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
    getSongType(4, string);
    printf("\tYou had %d %s songs!\n", rap, string);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / rap) / 60, (avg /
      rap) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 5){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      dance++, avg += songs[i][1];
      }
  }
  if (dance > 0){
    getSongType(5, string);
    printf("\tYou had %d %s songs!\n", dance, string);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / dance) / 60, (avg /
      dance) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 6){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      reggae++, avg += songs[i][1];
      }
  }
  if (reggae > 0){
    getSongType(6, string);
    printf("\tYou had %d %s songs!\n", reggae, string);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / reggae) / 60, (avg /
      reggae) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 7){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      country++, avg += songs[i][1];
      }
  }
  if (country > 0){
    getSongType(7, string);
    printf("\tYou had %d %s songs!\n", country, string);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / country) / 60, (avg /
      country) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 8){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      rb++, avg += songs[i][1];
      }
  }
  if (rb > 0){
    getSongType(8, string);
    printf("\tYou had %d %s songs!\n", rb, string);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / rb) / 60, (avg /
      rb) % 60);
    min = 900, max = 0, avg = 0;
    }
  for (i = 0; i < howMany; i++){
    if (songs[i][0] == 9){
      if (songs[i][1] < min)
        min = songs[i][1];
      if (songs[i][1] > max)
        max = songs[i][1];
      pop++, avg += songs[i][1];
      }
  }
  if (pop > 0){
    getSongType(9, string);
    printf("\tYou had %d %s songs!\n", pop, string);
    printf("\tShortest song is %d:%.2d.\n", min / 60, min % 60);
    printf("\tLongest song is %d:%.2d.\n", max / 60, max % 60);
    printf("\tAverage length was %d:%.2d\n\n", (avg / pop) / 60, (avg /
      pop) % 60);
    min = 900, max = 0, avg = 0;
    }

}
/*******************************************************************************

This function fills the arrays using input from the User.

*******************************************************************************/
void getSongType(int genreNum, char songType[45]){

  switch (genreNum) {
    case 1:
      strcpy(songType, "rock");
      break;
    case 2:
      strcpy(songType, "blues");
      break;
    case 3:
      strcpy(songType, "indie");
      break;
    case 4:
      strcpy(songType, "rap");
      break;
    case 5:
      strcpy(songType, "dance / electronic");
      break;
    case 6:
      strcpy(songType, "Reggae");
      break;
    case 7:
      strcpy(songType, "Country");
      break;
    case 8:
      strcpy(songType, "R&B");
      break;
    case 9:
      strcpy(songType, "pop");
      break;
    }
}
