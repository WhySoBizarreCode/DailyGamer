#include "Header.h"

#include <iostream>
#include <string>
#include<stdlib.h>
#include<time.h>
#include <vector>
#include <dirent.h>

string game() {

srand(time(NULL));
int i=0;
int randi = 0;

DIR           *d;
struct dirent *dir;
vector<string> dirlist;
string uss,pathi;


cout <<endl;

uss = getenv("USER");
pathi = ("/home/"+uss+"/.steam/steam/steamapps/common");
std::cout << pathi;
cout << endl;

if ((d = opendir (pathi.c_str())) != NULL) {
  /* print all the files and directories within directory */
  while ((dir = readdir (d)) != NULL) {

 if((strcmp(dir->d_name,".")==0 || strcmp(dir->d_name,"..")==0 || (*dir->d_name) == '.' )) //antes de cargar en el array comprobamos que no sea lectura basura . y ..
 {
 }else{
    dirlist.push_back(dir->d_name);
    //cout<<dirlist[i];
    //cout<<endl;
    i++;
    }
  }

  closedir (d);
}else {
  /* could not open directory */
  perror ("Steamapps Doesn't exist");
  return "Library error, folder don't found";
}
    if(i>0){
    //bool randomito=true;
     //   while(randomito){
    randi=rand()% i;
    //cout << randi;
    //rand() % 10 + 1;
        //if(randi%2==0){
	//break;

	//}
	//}
	//cout << "You have to play.. ";
	//cout << dirlist[randi];
	return dirlist[randi];
	//cout<<endl;
	}else{
	//cout << "You don't have any game installed in steamapps";
	return "You don't have any game installed in steamapps";
	//cout<<endl;
	}

}
