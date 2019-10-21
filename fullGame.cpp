#include "dkalgmain.h"
using namespace std;

void fullGame(){
vector<Player> rbList;
vector<Player> wrList;
vector<Player> teList;
vector<Player> qbList;
vector<Player> defList;
vector<Player> flexList;
vector<Player> team;
vector<Player> finalTeam;

Player plyr;
string inpS, userFile;
int inpI, finalSal, loopNum;
int totSalary=0;
double maxTeamAvg=0.0;
double totPoints;
double inpF;
int maxSalary = 50000;

cout<<"What file are you using?"<<endl;
cin>>userFile;

srand(time(NULL));
ifstream fin;
fin.open(userFile);
getline(fin, inpS);

while(getline(fin, inpS))
{ stringstream streamLine(inpS);
getline(streamLine, inpS, ',');
plyr.pos = inpS;
getline(streamLine, inpS, ',');
getline(streamLine, inpS, ',');
plyr.name = inpS;
getline(streamLine, inpS, ',');
inpI= stoi(inpS);
plyr.id = inpI;
getline(streamLine, inpS, ',');
getline(streamLine, inpS, ',');
inpI= stoi(inpS);
plyr.salary = inpI;
getline(streamLine, inpS, ',');
getline(streamLine, inpS, ',');
getline(streamLine, inpS, ',');

inpF= stof(inpS);
plyr.average = inpF;

if(plyr.pos=="QB")
  qbList.push_back(plyr);
if(plyr.pos=="RB")
{
  rbList.push_back(plyr);
  flexList.push_back(plyr);
}
if(plyr.pos=="WR")
{
  wrList.push_back(plyr);
  flexList.push_back(plyr);
}
if(plyr.pos=="TE")
{
  teList.push_back(plyr);
  flexList.push_back(plyr);
}
if(plyr.pos=="DST")
  defList.push_back(plyr);
}
fin.close();
for( int i=0; i<500000000; i++)
{
int choice = rand() % qbList.size();
team.push_back(qbList[choice]);
choice = rand() % rbList.size();
team.push_back(rbList[choice]);
choice = rand() % rbList.size();
if(team[1].name == rbList[choice].name)
{
  while(team[1].name == rbList[choice].name)
  {
      choice = rand() % rbList.size();
  }
}
team.push_back(rbList[choice]);
choice = rand() % wrList.size();
team.push_back(wrList[choice]);
choice = rand() % wrList.size();
if(team[2].name == wrList[choice].name)
{
  while(team[2].name == wrList[choice].name)
  {
      choice = rand() % wrList.size();
  }
}
team.push_back(wrList[choice]);
choice = rand() % wrList.size();
if(team[2].name == wrList[choice].name || team[3].name == wrList[choice].name)
{
  while(team[2].name == wrList[choice].name || team[3].name == wrList[choice].name)
  {
      choice = rand() % wrList.size();
  }
}
team.push_back(wrList[choice]);
choice = rand() % teList.size();
team.push_back(teList[choice]);
choice = rand() % flexList.size();
if(team[1].name == flexList[choice].name || team[2].name == flexList[choice].name || team[3].name == flexList[choice].name
    || team[4].name == flexList[choice].name || team[5].name == flexList[choice].name || team[6].name == flexList[choice].name)
{
  while(team[1].name == flexList[choice].name || team[2].name == flexList[choice].name || team[3].name == flexList[choice].name
      || team[4].name == flexList[choice].name || team[5].name == flexList[choice].name || team[6].name == flexList[choice].name)
  {
      choice = rand() % flexList.size();
  }
}
    team.push_back(flexList[choice]);

choice = rand() % defList.size();
team.push_back(defList[choice]);
for(int i=0; i<9; ++i)
{
totSalary +=team[i].salary;
totPoints +=team[i].average;
}
if(totSalary<=maxSalary && totPoints>maxTeamAvg)
{
finalSal=totSalary;
maxTeamAvg=totPoints;
finalTeam=team;
loopNum=i;
}
totSalary = 0;
totPoints = 0;
team.clear();
}
for(int i=0; i<9; ++i)
{
cout<<finalTeam[i].pos<<"--"<<finalTeam[i].name<<endl;
}
cout<<"Total Avg = "<<maxTeamAvg<<endl;
cout<<"Total Salary = "<<finalSal<<endl;
cout<<"How many iterations to make this team = "<<loopNum<<endl;
}
