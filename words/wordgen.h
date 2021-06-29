#pragma once

/*
 * В этой библиотеке описаны все действия со словами.
 * Проверка букв, генерация случайных слов и описаны категории слов.
 *
 *
 * К сожалению пока не было времени на настройку кодировки.
 *
 *
 * Категории:
 * * Фрукты
 * * Страны Европы и не только (список взят с сайта Евровидения)
 * * Большие города России
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Check{
public:
    string check(string w, char c, char n[]);
};

class GFruit{
public:
    string getWord();
    void printFact();
    string smth[13] = {"When life gives you lemons, make lemonade.",
                       "Apples are a quarter of air, and therefore do not sink in water.",
                       "In science, an orange is considered a berry.",
                       "Apricots grow even in Siberia, and tolerate frosts down to -45 degrees. \nTheoretically, you can even eat them, \nbut no one wants to, cus they are small, tough and very sour.",
                       "The signature dish that brought worldwide fame to Chef Gordon Ramsay's restaurant is plum pudding.",
                       "The Guinness Book of Records in 1998 officially named the avocado the healthiest fruit in the world.",
                       "To keep the tangerines for a long time, they are covered with wax. \nThe wax itself is harmless to us, but it can hide defects in the fruit.",
                       "Botanically, bananas are berries, just like watermelons, for example. \nTrue, all the same, everyone has long been accustomed to considering them fruits.",
                       "Red grapefruit has more vitamin C than regular grapefruit.",
                       "Coconut water is completely sterile. \nTherefore, 60-70 years ago, it was used as a blood substitute for transfusions.",
                       "The advantage of lime over lemon is that it can grow in the tropics where lemons cannot.\nBut Lymes do not like the cold. For them, temperatures below zero are inconvenient.",
                       "In India, on some holidays, it's customary to brush your teeth not with a toothbrush and toothpaste, \nbut with a sprig of a mango tree.",
                       "Kiwi weight is fixed. A high-quality and ripe kiwi cannot weigh less than 70 or more than 100 grams."
                      };
    string fruits[13] = {"lemon",
                         "apple",
                         "orange",
                         "apricot",
                         "purple",
                         "avocado",
                         "mandarin",
                         "banana",
                         "grapefruit",
                         "coconut",
                         "lime",
                         "mango",
                         "kiwi"
                        };
private:
    int r;
};

class GEurovision{
public:
    string getWord();
    string smth[39] = {"Name of italian rock-band, who won eurovision in 2021 is Måneskin.",
                       "Barbara Pravi isn't real name of singer. On serbian Pravi means 'original'",
                       "Gjons started piano cus he wanted a hobby",
                       "On ðaði o Gagnamagniðs site (dadifreyr.com) you can buy branded cup from 17.5$",
                       "Over than half of singers, who participated in Eurovision thinked that Ukraine won competition",
                       "Blind channel isn't alternative rock, but violent pop",
                       "Malta's perfomance changed in every stage",
                       "Lithuania participated in Eurovision for 3 years",
                       "Russia only one country, who don't have normal selection of singer",
                       "Greece's performer not from Greece, but from the Netherlands",
                       "It's Bulgarian Billie Eilish",
                       "The Black Mamba've toured all over the world",
                       "Producer of Moldovas performance is Filipp Kirkorov",
                       "Sweden's song Million Voices is plagiarism of two songs:\n * Million Moices by Polina Gagarina\n * Starboy by The Weeknd",
                       "They are Serbian trendsetters",
                       "Cypriots don't like song, that Elena performed, cus that song about love with devil",
                       "Eden can do whistle note, that nobody can repeat",
                       "Tix choose this pseudonim, cus he has Tourett's syndrom and bullies called him Tix(Ticks)",
                       "Belgian band has unpronounceable name - Hooverphonic",
                       "Efendi owns a cake house",
                       "Albania's singer loves coffee, but has allergic to caffeine",
                       "Famous raper from 2010 Flo Rida came to grand final of Eurovision and preform with San Florida singer",
                       "Nederlandses song is brocolli athem",
                       "Spanish is most popular language on Eurovision excepting english",
                       "Germany is most undervoted country on this Eurovision. The had 3 points from experts and 0 points from public",
                       "UK had 0 points from experts and 0 points from public in Grand Final. This is record",
                       "Albina reached the final of The Voice",
                       "Romania's singer has seven cats",
                       "All singles of denmark's group have been chart smashes",
                       "Vincent Bueno has already won a TV talent show",
                       "Uku has released over a singles on Estonian, English and Russia-language tracks",
                       "Ana Soklič attempted Eurovision again in 2007",
                       "Debut album of Poland's singer went platinum",
                       "Australia is only one non-Europe country on Eurovision",
                       "Vasil has both Macedonian and Bulgarian citizenship",
                       "Benny Cristo won clip of the year in 2013",
                       "Lesley’s been with her wife for over 13 years",
                       "Georgia's founded the rock group წრიული კუთხე (The Circular Corner).",
                       "Latvia's singer was on The Voice of Lithuania"
                      };
    string ecountries[39] = {"italy",
                             "france",
                             "switzerland",
                             "iceland",
                             "ukraine",
                             "finland",
                             "malta",
                             "lithuania",
                             "russia",
                             "greece",
                             "bulgaria",
                             "portugal",
                             "moldova",
                             "sweden",
                             "serbia",
                             "cyprus",
                             "israel",
                             "norway",
                             "belgium",
                             "azerbaijan",
                             "albania",
                             "san marino",
                             "nederlands",
                             "spain",
                             "germany",
                             "united kingdom",
                             "croatia",
                             "romania",
                             "denmark",
                             "austria",
                             "estonia",
                             "slovenia",
                             "poland",
                             "australia",
                             "north mackedonia",
                             "czech republic",
                             "ireland",
                             "georgia",
                             "latvia"

                            };
    void printFact();
private:
   int r;
};

class GRussia{
public:
    void printFact();
    string getWord();
    string smth[15] = {"Moscow is the capital of Russia",
                       "St. Petersburg is closest city to Finland",
                       "There is a legend that the city lived simultaneously in two time zones",
                       "Yekaterinburg for 67 years called 'Sverdlovsk'",
                       "Kazan 5th city of biggest cities in Russia",
                       "The Nizhny Novgorod has never been captured by enemies during its entire existence.",
                       "Chelyabinsk is located on both banks of the Miass River, with one half of Chelyabinsk belonging to the Urals, and the other to Western Siberia.",
                       "The area of Samara is larger than the area of the Republic of San Marino",
                       "At the beginning of summer, dust storms often occur in Omsk. The dust carried by the wind contains many harmful substances, including lead.",
                       "Rostov-on-Don is located in two parts of the world at once – the southern bank of the Don is considered Asia, and the northern one is Europe.",
                       "Ufa - capital of bashkiria",
                       "The area of the Krasnoyarsk Territory is four times larger than the area of the whole of France.\nAnd on the territory of Krasnoyarsk alone, as many as three Parisians would easily be located.",
                       "Voronezh is city of StandUp",
                       "Convicts exiled to Siberia usually went through Perm to Siberia. Even Fyodor Dostoevsky managed to visit here in this capacity.",
                       "The center of Volgograd partially lies 10-12 meters below sea level"
                       };
    string rcities[15] = {"moscow",
                          "saint petersburg",
                          "novosibirsk",
                          "yekaterinburg",
                          "kazan",
                          "nizhny novgorod",
                          "chelyabinsk",
                          "samara",
                          "omsk",
                          "rostov on don",
                          "ufa",
                          "krasnoyarsk",
                          "voronezh",
                          "perm",
                          "volgograd"
                          };
private:
    int r;
};

