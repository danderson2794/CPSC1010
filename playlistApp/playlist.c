/*
--------------------------------------------------------------------------------
    Damion Anderson
    16 February, 2018
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
int songValue = 0, songCount = 0, songLength = 0, rockTotal = 0, rockAvg = 0,
  rockNumTracks = 0,rockLong = 0,rockShort = 9000, bluesTotal = 0, bluesAvg = 0,
  bluesNumTracks = 0, bluesLong = 0, bluesShort = 9000,indieTotal = 0,
  indieAvg = 0, indieNumTracks = 0, indieLong = 0, indieShort = 9000,
  rapTotal = 0, rapAvg = 0, rapNumTracks = 0, rapLong = 0, rapShort = 9000,
  danceTotal = 0, danceAvg = 0,danceNumTracks = 0, danceLong = 0,
  danceShort = 9000, reggaeTotal = 0, reggaeAvg = 0,reggaeNumTracks = 0,
  reggaeLong = 0, reggaeShort = 9000, countryTotal = 0, countryAvg = 0,
  countryNumTracks = 0, countryLong = 0, countryShort = 9000, rbTotal = 0,
  rbAvg = 0, rbNumTracks = 0, rbLong = 0, rbShort = 9000, popTotal = 0,
  popAvg = 0, popNumTracks = 0, popLong = 0, popShort = 9000;

printf("Enter information for songs in your playlist..\n");
printf("1 for rock\n2 for blues\n3 for indie\n4 for rap\n5 for dance/electronic"
        "\n6 for reggae\n7 for country\n8 for r&b\n9 for pop\n\n"
        "\n\n--> ");
scanf(" %i", &songValue);
songCount++; //To be used at the end of the program.

printf("How long is your song in seconds?\n");
scanf("%i", &songLength);

/* This switch takes input from above and categorizes the user's input */
switch (songValue) {
  case 1:
    rockTotal += songLength;
    rockNumTracks++;
    rockLong = songLength;
    rockShort = songLength;
      break;
  case 2:
    bluesTotal += songLength;
    bluesNumTracks++;
    bluesLong = songLength;
    bluesShort = songLength;
      break;
  case 3:
    indieTotal += songLength;
    indieNumTracks+= 1;
    indieLong = songLength;
    indieShort = songLength;
      break;
  case 4:
    rapTotal += songLength;
    rapNumTracks++;
    rapLong = songLength;
    rapShort = songLength;
      break;
  case 5:
    danceTotal += songLength;
    danceNumTracks++;
    danceLong = songLength;
    danceShort = songLength;
      break;
  case 6:
    reggaeTotal += songLength;
    reggaeNumTracks++;
    reggaeLong = songLength;
    reggaeShort = songLength;
      break;
  case 7:
    countryTotal += songLength;
    countryNumTracks++;
    countryLong = songLength;
    countryShort = songLength;
      break;
  case 8:
    rbTotal += songLength;
    rbNumTracks++;
    rbLong = songLength;
    rbShort = songLength;
      break;
  case 9:
    popTotal += songLength;
    popNumTracks++;
    popLong = songLength;
    popShort = songLength;
      break;
  default:
    printf("You did not input a valid genre. Please try again.\n");
} //end of swtich.

int moreSongs;
printf("Do you have more songs to enter? Type 1 for yes, 0 for no.\n");
scanf(" %i", &moreSongs);

//This loop will continue to take song data until user enters 0.
while (moreSongs > 0) {
  printf("Great! Which genre is your next song?\n");
  printf("1 for rock\n2 for blues\n3 for indie\n4 for rap\n"
          "5 for dance/electroni\n6 for reggae\n7 for country\n8 for r&b\n"
          "9 for pop\n\n--> ");
  scanf(" %i", &songValue);
  printf("How long is the song in seconds?\n");
  scanf(" %i", &songLength);

/*  This is similar to the switch above; however, I incorporated if statements
    to calculate the min and max of each genre.*/
  switch (songValue) {
    case 1:
      rockTotal += songLength;
      rockNumTracks++;
      if ( rockLong < songLength) {
        rockLong = songLength;
      }
      if (rockShort > songLength) {
        rockShort = songLength;
      }
        break;
    case 2:
      bluesTotal += songLength;
      bluesNumTracks++;
      if ( bluesLong < songLength) {
        bluesLong = songLength;
      }
      if (bluesShort > songLength) {
        bluesShort = songLength;
      }
        break;
    case 3:
      indieTotal += songLength;
      indieNumTracks += 1;
      if ( indieLong < songLength) {
        indieLong = songLength;
      }
      if (indieShort > songLength) {
        indieShort = songLength;
      }
        break;
    case 4:
      rapTotal += songLength;
      rapNumTracks++;
      if ( rapLong < songLength) {
        rapLong = songLength;
      }
      if (rapShort > songLength) {
        rapShort = songLength;
      }
        break;
    case 5:
      danceTotal += songLength;
      danceNumTracks++;
      if ( danceLong < songLength) {
        danceLong = songLength;
      }
      if (danceShort > songLength) {
        danceShort = songLength;
      }
        break;
    case 6:
      reggaeTotal += songLength;
      reggaeNumTracks++;
      if ( reggaeLong < songLength) {
        reggaeLong = songLength;
      }
      if (reggaeShort > songLength) {
        reggaeShort = songLength;
      }
        break;
    case 7:
      countryTotal += songLength;
      countryNumTracks++;
      if ( countryLong < songLength) {
        countryLong = songLength;
      }
      if (countryShort > songLength) {
        countryShort = songLength;
      }
        break;
    case 8:
      rbTotal += songLength;
      rbNumTracks++;
      if ( rbLong < songLength) {
        rbLong = songLength;
      }
      if (rbShort > songLength) {
        rbShort = songLength;
      }
        break;
    case 9:
      popTotal += songLength;
      popNumTracks++;
      if ( popLong < songLength) {
        popLong = songLength;
      }
      if (popShort > songLength) {
        popShort = songLength;
      }
        break;
    default:
      printf("You did not input a valid genre. Please try again.\n");
  }//switch end

  printf("Do you have more songs to enter? (1 for yes, 0 for no)\n");
  scanf(" %i", &moreSongs);

}// while loop end

/*  These if statements will activate based on which songs the user input.
    There is also a second if statement nested for proper grammar based on num
    of songs inputed in each genre.  */
if (rockNumTracks > 0) {
  float rockAvgMin, rockAvgSec, rockLongestMin, rockLongestSec, rockShortMin,
        rockShortSec;
  rockAvg = (float)(rockTotal / rockNumTracks);
  rockAvgMin = rockAvg / 60;
  rockAvgSec = rockAvg % 60;
  rockLongestMin = (float)rockLong / 60;
  rockLongestSec = rockLong % 60;
  rockShortMin = (float)rockShort / 60;
  rockShortSec = rockShort % 60;

    if (rockNumTracks > 1) {
      printf("You had %i rock songs, Rock On!\n", rockNumTracks);
    }
    else if (rockNumTracks == 1){
      printf("You had one rock song, try listening to a band called"
       "\n Plini to increase your"
        " number of rock songs..\n");
    }
  printf("Your average rock song was %.0f minutes and %.0f seconds\n",
        rockAvgMin, rockAvgSec);
  printf("Your longest song was %.0f minutes and %.0f seconds.\n",
        rockLongestMin, rockLongestSec);
  printf("Your shortest song was %.0f minutes and %.0f seconds.\n\n",
        rockShortMin, rockShortSec);
}
if (bluesNumTracks > 0) {
  float bluesAvgMin, bluesAvgSec, bluesLongestMin, bluesLongestSec,
        bluesShortMin, bluesShortSec;
  bluesAvg = (float)(bluesTotal / bluesNumTracks);
  bluesAvgMin = bluesAvg / 60;
  bluesAvgSec = bluesAvg % 60;
  bluesLongestMin = (float)bluesLong / 60;
  bluesLongestSec = bluesLong % 60;
  bluesShortMin = (float)bluesShort / 60;
  bluesShortSec = bluesShort % 60;

  if (bluesNumTracks > 1) {
    printf("You had %i blues songs, you must have great taste in music!"
    "\n\n", bluesNumTracks);
    }
  else if (bluesNumTracks == 1){
    printf("You had one blues song.. I guess the thrill is truly gone.."
    "\n");
  }

  printf("Your average blues song was %.0f minutes and %.0f seconds\n",
        bluesAvgMin, bluesAvgSec);
  printf("Your longest song was %.0f minutes and %.0f seconds.\n",
        bluesLongestMin, bluesLongestSec);
  printf("Your shortest song was %.0f minutes and %.0f seconds.\n\n",
        bluesShortMin, bluesShortSec);
}

if (indieNumTracks > 0) {
  float indieAvgMin, indieAvgSec,indieLongestMin, indieLongestSec,
        indieShortMin, indieShortSec;
  indieAvg = (float)(indieTotal / indieNumTracks);
  indieAvgMin = indieAvg / 60;
  indieAvgSec = indieAvg % 60;
  indieLongestMin = (float)indieLong / 60;
  indieLongestSec = indieLong % 60;
  indieShortMin = (float)indieShort / 60;
  indieShortSec = indieShort % 60;

    if (indieNumTracks > 1) {
      printf("\nYou had %i indie songs, you must have great taste in music!"
      "\n", indieNumTracks);
      }
    else if (indieNumTracks == 1){
      printf("You had one indie song.. You should listen to more!\n");
    }

  printf("Your average indie song was %.0f minutes and %.0f seconds\n",
        indieAvgMin, indieAvgSec);
  printf("Your longest song was %.0f minutes and %.0f seconds.\n",
        indieLongestMin, indieLongestSec);
  printf("Your shortest song was %.0f minutes and %.0f seconds.\n\n",
        indieShortMin, indieShortSec);
}
if (rapNumTracks > 0) {
  float rapAvgMin, rapAvgSec, rapLongestMin, rapLongestSec, rapShortMin,
        rapShortSec;
  rapAvg = (float)(rapTotal / rapNumTracks);
  rapAvgMin = rapAvg / 60;
  rapAvgSec = rapAvg % 60;
  rapLongestMin = (float)rapLong / 60;
  rapLongestSec = rapLong % 60;
  rapShortMin = (float)rapShort / 60;
  rapShortSec = rapShort % 60;

    if (rapNumTracks > 1) {
      printf("\nYou had %i rap songs."
      "\n", rapNumTracks);
      }
    else if (rapNumTracks == 1){
      printf("You had one rap song.\n");
    }

  printf("Your average rap song was %.0f minutes and %.0f seconds\n",
        rapAvgMin, rapAvgSec);
  printf("Your longest song was %.0f minutes and %.0f seconds.\n",
        rapLongestMin, rapLongestSec);
  printf("Your shortest song was %.0f minutes and %.0f seconds.\n\n",
        rapShortMin, rapShortSec);

}
if (danceNumTracks > 0) {
  float danceAvgMin, danceAvgSec, danceLongestMin, danceLongestSec,
        danceShortMin, danceShortSec;
  danceAvg = (float)(danceTotal / danceNumTracks);
  danceAvgMin = danceAvg / 60;
  danceAvgSec = danceAvg % 60;
  danceLongestMin = (float)danceLong / 60;
  danceLongestSec = danceLong % 60;
  danceShortMin = (float)danceShort / 60;
  danceShortSec = danceShort % 60;

    if (danceNumTracks > 1) {
      printf("\nYou had %i dance / electronic songs, nice!\n", danceNumTracks);
      }
    else if (danceNumTracks == 1){
      printf("You had one dance / electronic song.. Sad day.. :(\n");
    }

  printf("Your average dance / electronic song was %.0f minutes and"
          " %.0f seconds\n", danceAvgMin, danceAvgSec);
  printf("Your longest song was %.0f minutes and %.0f seconds.\n",
        danceLongestMin, danceLongestSec);
  printf("Your shortest song was %.0f minutes and %.0f seconds.\n\n",
        danceShortMin, danceShortSec);

}
if (reggaeNumTracks > 0) {
  float reggaeAvgMin, reggaeAvgSec, reggaeLongestMin, reggaeLongestSec,
        reggaeShortMin, reggaeShortSec;
  reggaeAvg = (float)(reggaeTotal / reggaeNumTracks);
  reggaeAvgMin = reggaeAvg / 60;
  reggaeAvgSec = reggaeAvg % 60;
  reggaeLongestMin = (float)reggaeLong / 60;
  reggaeLongestSec = reggaeLong % 60;
  reggaeShortMin = (float)reggaeShort / 60;
  reggaeShortSec = reggaeShort % 60;

    if (reggaeNumTracks > 1) {
      printf("\nYou had %i reggae songs, way to send good vibes! (Check out"
      " Rebelution, they're my \nfavorite band.\n", reggaeNumTracks);
      }
    else if (reggaeNumTracks == 1){
      printf("You had one reggae song.. You NEED more in your life!\n");
    }

  printf("Your average reggae song was %.0f minutes and %.0f seconds\n",
        reggaeAvgMin, reggaeAvgSec);
  printf("Your longest song was %.0f minutes and %.0f seconds.\n",
        reggaeLongestMin, reggaeLongestSec);
  printf("Your shortest song was %.0f minutes and %.0f seconds.\n\n",
        reggaeShortMin, reggaeShortSec);
}
if (countryNumTracks > 0) {
  float countryAvgMin, countryAvgSec, countryLongestMin, countryLongestSec,
        countryShortMin, countryShortSec;
  countryAvg = (float)(countryTotal / countryNumTracks);
  countryAvgMin = countryAvg / 60;
  countryAvgSec = countryAvg % 60;
  countryLongestMin = (float)countryLong / 60;
  countryLongestSec = countryLong % 60;
  countryShortMin = (float)countryShort / 60;
  countryShortSec = countryShort % 60;

    if (countryNumTracks > 1) {
      printf("\nYou had %i country songs!\n", countryNumTracks);
      }
    else if (countryNumTracks == 1){
      printf("You had one country song.\n");
    }

  printf("Your average country song was %.0f minutes and %.0f seconds\n",
        countryAvgMin, countryAvgSec);
  printf("Your longest song was %.0f minutes and %.0f seconds.\n",
        countryLongestMin, countryLongestSec);
  printf("Your shortest song was %.0f minutes and %.0f seconds.\n\n",
        countryShortMin, countryShortSec);
}
if (rbNumTracks > 0) {
  float rbAvgMin, rbAvgSec, rbLongestMin, rbLongestSec, rbShortMin, rbShortSec;
  rbAvg = (float)(rbTotal / rbNumTracks);
  rbAvgMin = rbAvg / 60;
  rbAvgSec = rbAvg % 60;
  rbLongestMin = (float)rbLong / 60;
  rbLongestSec = rbLong % 60;
  rbShortMin = (float)rbShort / 60;
  rbShortSec = rbShort % 60;

    if (rbNumTracks > 1) {
      printf("\nYou had %i R&B songs!\n", rbNumTracks);
      }
    else if (rbNumTracks == 1){
      printf("You had one R&B song.\n");
    }

  printf("Your average R&B song was %.0f minutes and %.0f seconds\n",
        rbAvgMin, rbAvgSec);
  printf("Your longest song was %.0f minutes and %.0f seconds.\n",
        rbLongestMin, rbLongestSec);
  printf("Your shortest song was %.0f minutes and %.0f seconds.\n\n",
        rbShortMin, rbShortSec);
}
if (popNumTracks > 0) {
  float popAvgMin, popAvgSec, popLongestMin, popLongestSec, popShortMin,
        popShortSec;
  popAvg = (float)(popTotal / popNumTracks);
  popAvgMin = popAvg / 60;
  popAvgSec = popAvg % 60;
  popLongestMin = (float)popLong / 60;
  popLongestSec = popLong % 60;
  popShortMin = (float)popShort / 60;
  popShortSec = popShort % 60;

    if (popNumTracks > 1) {
      printf("\nYou had %i pop songs!\n", popNumTracks);
      }
    else if (popNumTracks == 1){
      printf("You had one pop song.\n");
    }

  printf("Your average pop song was %.0f minutes and %.0f seconds\n",
        popAvgMin, popAvgSec);
  printf("Your longest song was %.0f minutes and %.0f seconds.\n",
        popLongestMin, popLongestSec);
  printf("Your shortest song was %.0f minutes and %.0f seconds.\n\n",
        popShortMin, popShortSec);
}


  return 0;
}
