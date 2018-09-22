#include "Header.h"

#include <iostream>
#include <string>
#include<stdlib.h>
#include<time.h>
#include <vector>
#include <dirent.h>

#include <iostream>
#include <cstring>

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














string unistallgm(string ent, string ent2) {
//system("pkexec sudo");

int i=0;
int k=0;
int j=0;
int dd=0;
bool unis = true;
DIR           *d;
struct dirent *dir;
string thegame="game";
string games[100];//podria usar un vector "un array dinamico" pero de esta manera con arrays estaticos tengo que definir un maximo fijo
string thegames[50];
string rep="Not successful";

string uss,pathi;


cout <<endl;

uss = getenv("USER");
pathi = ("/home/"+uss+"/.steam/steam/steamapps/common");


if ((d = opendir (pathi.c_str())) != NULL) {
  /* print all the files and directories within directory */
  while ((dir = readdir (d)) != NULL) {
   if((strcmp(dir->d_name,".")==0 || strcmp(dir->d_name,"..")==0 || (*dir->d_name) == '.' )) //antes de cargar en el array comprobamos que no sea lectura basura . y ..
{
    }else{
    games[i]=dir->d_name;
    //games[i]=dir->d_name;
    i++;
    //j++;//solo para luego saber cuantos juegos cargo
    }
  }

  closedir (d);
} else {
  /* could not open directory */
  cout << "ERROR LOKITA";
  perror ("");
}
////////Hacer compare para no tomar Ents vacios y que elimine todo Steamapps
thegames[0]=ent;
j++;
//thegames[1]=ent2;
     //if (ent)// if ent =NULL return unsuc  **



cout << "Unistalling games...";
cout << endl;

for (k=0;k<i;k++){
    for(dd=0;dd<j;dd++){
     if (games[k].compare (thegames[dd]) == 0) {
            //cout << games[k];
            //cout << endl;
            //cout << endl;
            //cout << thegames[dd];
            //cout << endl;
            //cout << "Encontro";
             //cout << endl;
            unis=false;
            //cout << games[k];
            //cout << "aca";
        }else{

        unis=true;
        //cout << "ahre";
    //cout << "No encontro";
    //cout<<pathi+"/'"+games[k]+"'";
    system(("rm -rf "+pathi+"/'"+games[k]+"'").c_str());  //Gksu used to be the deafult in a lot of SO. but now is PolicyKit
    //cout<<pathi;
    //cout<<games[k];
    rep = "Successful";
    }

    //unis=true;
}

}

return rep;
}
