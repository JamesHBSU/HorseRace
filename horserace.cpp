#include <iostream>
#include <string>
int const track = 15;
int horses[] = {0, 1, 2, 3, 4};
int const numHorses = 5;
void printTrack(int position[]){
	for(int i = 0; i < numHorses; i++){
		std::cout << "|" << std::endl;
		for(int j = 0; j < track; j++){
			if(j == position[i]) std::cout << horses << std::endl;
				else std::cout << "." << std::endl;
			}//ends track for loop
		}//ends first for
	}//ends print track void
int main(void){
	int position[numHorses];
	int winner;
	int winners[numHorses];
	int totalWinners = 0;
	for(int i = 0; i < numHorses; i++){
		position[i] = track - 1;
	}//end for loop
printTrack(positon);
while (totalWinners == 0){
	for(int i = 0; i < numHorses; i++){
		position[i] -= rand() % 2;
		if(position[i] <= 0) {
			position[i] = 0;
			winners[totalWinners] = i; //horse number
			totalWinners++;
		}//end winners if statement
	}//end for loop
	printTrack(position0; //prints race
}//end while loop
winner = winners[totalWinners]; //declares the final winner
std::cout << "Hope you wanted " << winner << " to win!" << std::endl;
